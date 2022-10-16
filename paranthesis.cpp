#include <iostream>
using namespace std;
class stackll
{
public:
    char data;
    stackll *next;
    stackll *top = NULL;
    void push(char x)
    {
        stackll *t;
        t = new stackll;
        if (t == NULL)
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            t->data = x;
            if (top == NULL)
            {
                t->next = NULL;
            }
            else
            {
                t->next = top;
            }
            top = t;
        }
    }

    char pop()
    {
        stackll *p;
        if (top == NULL)
        {
            cout << "Stack underflow" << endl;
            return 'a';
        }
        else
        {
            p = top;
            char x = top->data;
            top = top->next;
            delete p;
            return x;
        }
    }

    bool isempty()
    {
        if (top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stackll st;
    bool flag = false;
    string s = "{([a+b]*[a-b])/e}";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            char x = st.pop();
            if (s[i] < 50)
            {
                if (x != s[i] - 1)
                {
                    flag == true;
                    break;
                }
            }
            else
            {

                if (x != s[i] - 2)
                {
                    flag == true;
                    break;
                }
            }
        }
    }
    if (flag == false)
    {
        if (st.isempty() == true)
        {
            cout << "Parenthesis are matched" << endl;
        }
        else
        {
            cout << "Parenthesis are not matched " << endl;
        }
    }
    else
    {
        cout << "Parenthesis are not matched " << endl;
    }

    return 0;
}

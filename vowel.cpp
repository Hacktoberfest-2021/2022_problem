#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[] = "WELcome TO India";
    int word = 0, vcount = 0, ccount = 0;
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vcount++;
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            ccount++;
        }
        if (s[i] == ' ' && s[i - 1] != ' ')
        {
            word++;
        }
    }
    cout << "No of the vowel is " << vcount << endl;
    cout << "No of the consonent is " << ccount << endl;
    cout << "No of the word  is " << word + 1 << endl;
    return 0;
}

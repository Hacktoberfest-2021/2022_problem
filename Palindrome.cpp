#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char name[] = "mmdam";
    bool flag = true;
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
    }
    i = i - 1;
    for (int j = 0; j < i; j++, i--)
    {
        if (name[j] != name[i])
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Plaindrom";
     }
    else
    {
        cout << "Not Plaindrom";
    }

    return 0;
}

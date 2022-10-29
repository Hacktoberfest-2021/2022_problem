#include <bits/stdc++.h>
using namespace std;

int main()
{
  


    char name[] = "arin";
    int i, j;
    char t;
    for (j = 0; name[j] != '\0'; j++)
    {
    }

    j = j - 1;

    for (i = 0; i < j; i++, j--)
    {
        t = name[i];
        name[i] = name[j];
        name[j] = t;
    }

    cout << name;

    return 0;
}

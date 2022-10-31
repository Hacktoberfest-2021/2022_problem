#include <bits/stdc++.h>
using namespace std;

void perm(char s[], int l, int h)
{
    int i;
    if (l == h)
    {
        cout << s << endl;
    }
    else
    {
        for (i = l; i <= h; i++)
        {
            swap(s[l], s[i]);
            perm(s, l + 1, h);
            swap(s[l], s[i]);
        }
    }
}
int main()
{


    char s[] = "CROSSHAIR";
    int l = 0;
    int h = 2;
    perm(s, l, h);

    return 0;
}

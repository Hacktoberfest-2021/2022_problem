#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 1011;
    int num;
    int dec = 0;
    for (int i = 0; i < 4; i++)
    {
        num = n % 10;
        dec = dec + num * pow(2, i);
        n = n / 10;
    }
    cout << dec;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
  
    char A[] = "Arina";
    char B[] = "AArina";
    int as1 = sizeof(A) / sizeof(A[0]);
    int as2 = sizeof(B) / sizeof(B[0]);
    int h[128] = {0}, i, j;
    bool flag = false;
    if (as1 != as2)
    {
        cout << "This are not Anagrams" << endl;
    }
    else
    {
        for (i = 0; A[i] != '\0'; i++)
        {
            h[A[i]]++;
        }
        for (j = 0; B[j] != '\0'; j++)
        {
            h[B[j]]--;
            if (h[B[j]] < 0)
            {
                cout << "This are not Anagrams" << endl;
                break;
            }
        }
        if (B[j] == '\0')
        {
            cout << "This are Anagrams" << endl;
        }
    }
    return 0;
}

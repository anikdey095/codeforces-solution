#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long T = 1;
    cin >> T;
    while (T--)
    {

        long long n, k;
        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            for (char j = 'a'; j < 'a' + k; j++)
            {
                cout << j;
            }
        }
        cout << endl;
    }
}

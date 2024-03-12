
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, p, valids=0;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> p;

        if (p + k <= 5)
        {
            valids++;
        }
    }

    cout << valids / 3 << endl;

    return 0;
}

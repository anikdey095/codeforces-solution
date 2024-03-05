
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int i = 2, ans = 1;
        while (i < n)
        {
            i += x;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}

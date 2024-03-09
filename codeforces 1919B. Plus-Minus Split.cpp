#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,sum1=0,sum2=0;
        cin >> n;

        string ch;
        cin >> ch;
        for (int i = 0; i < n;i++){
            if(ch[i]=='+'){
                sum1 += 1;
            }
            else{
                sum2 += 1;
            }
        }
        cout << abs(sum1 - sum2) << endl;
    }
}

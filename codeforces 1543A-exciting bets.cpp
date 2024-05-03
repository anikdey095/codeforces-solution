#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
       long long  int a, b, count = 0;
        cin >> a >> b;

        if(a==b){
            cout << 0 << " " << 0 << endl;
        }
        else {
            long long int diff = abs(a - b);
            long long int x = a%diff ;
            long long int y = b%diff ;
            if(x==y){
                cout << diff << " " << min(x, diff - x) << endl;
            }
            else if(x!=y){
                cout << 0 << " " << 0 << endl;
            }
        }
    }
}

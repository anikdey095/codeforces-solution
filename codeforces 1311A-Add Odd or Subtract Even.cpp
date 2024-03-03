#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b,ans=0, div=0;
        cin >> a >> b;
        if(a==b){
            ans = 0;
        }
        else if(a>b){
            div = a - b;
            ans++;
            if(div%2==1){
                ans++;
            }
        }
        else{
            div = b - a;
            ans++;
            if(div%2==0){
                ans++;
            }
        }
        cout << ans << endl;
    }
 
}

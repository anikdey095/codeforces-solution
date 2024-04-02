#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d,ans;

    while (cin >> a >> b >> c >> d)
    {
        string ch;
        cin >> ch;
        ans = 0;
        for (int i = 0; i < ch.size();i++){
            if(ch[i]=='1'){
                ans += a;
            }
            else if(ch[i]=='2'){
                ans += b;
            }
            else if(ch[i]=='3'){
                ans += c;
            }
            else if(ch[i]=='4') {
                ans += d;
            }
        }
        cout << ans << endl;
    }
}

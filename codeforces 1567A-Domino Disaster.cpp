#include<bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++){
        int n;
        cin >> n;
        string str;
        cin >> str;
 
        string ans = "";
        for(int i = 0; i < n; i++){
            if(str[i] == 'D'){
                ans += "U";
            }else if(str[i] == 'U'){
                ans += "D";
            }else{
                ans += str[i];
            }
        }
        cout << ans << endl;
    }
    return 0; 
}

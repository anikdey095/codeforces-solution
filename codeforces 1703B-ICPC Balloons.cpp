#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,count=0;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        for (int i = 0; i < n;i++){
            if(s[i]==s[i+1]){
                count++;
            }
        }
        cout << 2 * n - count << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = s.size();
        for (int i = 0; i < l;i++){
            for (int j = 0; j < l - 1;j++){
                if(s[j]>s[j+1]){
                    swap(s[j], s[j + 1]);
                }
            }
        }

        int num=s[l - 1] - 'a' + 1;
        cout << num << endl;
    }
}

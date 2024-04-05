#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int c=0, pos1=0, pos2 = 0;
        int l = s.size();
        for (int i = 0; i < l;i++){
            if(s[i]=='1'){
                pos1 = i;
                break;
            }
        }
        for (int i = l-1; i > pos1;i--){
            if (s[i] == '1')
            {
                pos2 = i;
                break;
            }
        }
       
        for (int i = pos1; i < pos2;i++){
            if(s[i]=='0'){
                c++;
            }
        }
        cout << c << endl;
    }
}

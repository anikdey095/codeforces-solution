#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int n = min(a, b);
        cout << min(n,(a+b)/4) << endl;
        
    }
}

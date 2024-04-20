#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    if(a==b){
        cout << -1<< endl;
    }
    else{
        cout << max(n, m) << endl;
    }
}

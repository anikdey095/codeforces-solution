#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int c;
        if(b<a*2){
            c = (n / 2) * b + (n % 2) * a;
        }
        else{
            c = n * a;
        }
        cout << c << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,count=0;
        cin >> n;
        if(n%2021==0 || n%2020==0){
            count++;
        }
        else{
            for (int i = 0; i <= n / 2020;i++){
                if((n-i*2020)%2021==0){
                  
                    count++;
                }
            }
        }
        if(count==0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, b, d,sum=0,count=0;
    cin >> n >> b >> d;
    for (int i = 0; i < n;i++){
        int a;
        cin >> a;
        if (a <= b)
        {
            sum += a;
            }
            if(sum>d){
                count++;
                sum = 0;
            }
    }
    cout << count << endl;
}

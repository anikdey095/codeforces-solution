#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < n;i++){
           if(arr[i]>max){
               max = arr[i];
           }
    }
    for (int i = 0; i < n;i++){
        ans += max - arr[i];
    }
    cout << ans << endl;
}

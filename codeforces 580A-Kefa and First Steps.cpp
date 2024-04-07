#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,m1=1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    for (int i = 0; i <n; i++){
        if(arr[i]>=arr[i-1]){
            c++;
            m1 = max(m1, c);   
        }
        else{
            c = 1;
        }
    }
    cout<< m1<< endl;
}

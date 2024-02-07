#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,antoni=0,dina=0;
    cin>>n;
    string arr;
    cin>>arr;

    for(int i=0;i<n;i++){
        if(arr[i]=='A'){
            antoni++;
        }
        else{
         dina++;
        }
    }
    if(antoni>dina){
        cout<<"Anton"<<endl;
    }
    else if(dina>antoni){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}

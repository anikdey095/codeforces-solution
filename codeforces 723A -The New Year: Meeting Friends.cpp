#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c,max=0,min=0;
    cin >> a >> b >> c;
    if(a>b && a>c){
        max = a;
    }
    else if(b>a && b>c){
        max = b;
    }
    else{
        max = c;
    }
    if(a<b && a<c){
        min = a;
    }
    else if(b<c && b<c){
        min = b;
    }
    else{
        min = c;
    }
    cout << max-min;
}

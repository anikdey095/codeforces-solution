#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ones=0,zeros=0;
    cin >> n;
    string ch;
    cin >> ch;
    for (int i = 0; i < n;i++){
        if (ch[i] == '0') {
                zeros++;
            }
            else{
                ones++;
            }
    }
    cout << abs(ones - zeros) << endl;
}

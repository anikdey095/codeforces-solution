#include <bits/stdc++.h>>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int b = n % 8;
    if(n==0){
        cout << "1" << endl;
    }
    else if (b == 0)
    {
        cout << "6" << endl;
    }
    else if(b==1){
        cout << "8" << endl;
    }
    else if(b==2){
        cout << "4" << endl;
    }
    else if(b==3){
        cout << "2" << endl;
    }
    else if (b == 4)
    {
        cout << "6" << endl;
    }
    else if (b == 5)
    {
        cout << "8" << endl;
    }
    if(b==6){
        
        cout << "4" << endl;
    }
    else if(b==7){
    cout << "2" << endl;
    }
    


    return 0;
}

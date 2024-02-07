#include<bits/stdc++.h>
using namespace std;

int main() {
    string arr;
    cin >> arr;

    int freq[256] = {0};

    for(int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }

    int count = 0;
    for(int i = 0; i < 256; i++) {
        if(freq[i] > 0) {
            count++;
        }
    }
  if(count%2==0){
    cout<<"CHAT WITH HER!"<<endl;
  }
  else{
    cout<<"IGNORE HIM!"<<endl;
  }
    return 0;
}

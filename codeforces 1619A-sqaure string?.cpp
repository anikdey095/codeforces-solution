#include <iostream>
using namespace std;
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (n % 2!=0)
        {
            cout << "NO" << endl;
            continue;
        }
        long h = s.size() / 2;
 
        bool sq(true);
        for (long i = 0; i < h; i++)
        {
            if (s[i] != s[h + i])
            {
                sq = false;
                break;
            }
        }
        if(sq==1){
            cout << "YEs" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

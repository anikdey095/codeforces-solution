#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0;
        string ch;
        cin >> ch;
        for (int i = 0; i < ch.size(); i++)
        {
            ch[i] = tolower(ch[i]);
        }
        for (int i = 0; i < ch.size();i++){
            if (ch.substr(i, 3) == "yes")
            {
                count++;
            }
        }

        if (count > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

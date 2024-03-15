#include <iostream>
#include <string>
#include <set>
using namespace std;
 
int main()
{
    string s;
    getline(cin, s);
 
    set<char> uniqueChars;
    for (char c : s)
    {
        if (islower(c)) 
            uniqueChars.insert(c);
    }
 
    int n = uniqueChars.size();
    cout << n << endl;
    return 0;
}

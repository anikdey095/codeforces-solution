#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string ch;
        cin >> ch;
        if (ch == "Tetrahedron")
        {
            sum += 4;
        }
        else if (ch == "Cube")
        {
            sum += 6;
        }
        else if (ch == "Octahedron")
        {
            sum += 8;
        }
        else if (ch == "Dodecahedron")
        {
            sum += 12;
        }
        else if (ch == "Icosahedron")
        {
            sum += 20;
        }
    }
    cout << sum << endl;
    return 0;
}

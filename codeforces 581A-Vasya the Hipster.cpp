#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int m = min(a, b);
    int n = ((a + b) - (m * 2)) / 2;
    cout << m << " " << n << endl;
}

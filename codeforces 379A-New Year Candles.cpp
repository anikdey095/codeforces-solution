#include <iostream>
using namespace std;

int main()
{
    int a, b, sum = 0;
    cin >> a >> b;
    int c = a;

    while (a >= b)
    {
        sum += a / b; 
        a = a / b+a%b; 
    }

    cout << c+sum << endl;
}

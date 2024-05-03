#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        double sum = 0.0;
        int count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            sum += arr[i];
            double avg = sum / (double)(n - i);
            if (avg >= k)
                count++;
            else
                break;
        }
        cout  <<count<< endl;
    }
    return 0;
}

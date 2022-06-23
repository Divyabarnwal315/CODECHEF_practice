#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    long long sumP = (N * (N + 1)) / 2;
    long long arr[N];
    long long sum = 0;
    for (long long i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum == sumP)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

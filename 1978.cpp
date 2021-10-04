#include <iostream>
#include <vector>
using namespace std;
vector<int> arr;
int main()
{
    int n, t, m = 0, isPrime = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        arr.push_back(t);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            continue;
        for (int k = 2; k < arr[i]; k++)
        {
            if (arr[i] % k == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime != 0)
            m++;
        isPrime = 1;
    }
    cout << m << endl;
    return 0;
}
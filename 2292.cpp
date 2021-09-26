#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, k = 0, i = 0;
    cin >> n;
    while (i <= n)
    {
        k = k + i;
        if (6 * k + 1 >= n)
        {
            cout << i + 1 << endl;
            break;
        }
        i++;
    }
    return 0;
}
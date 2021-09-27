#include <iostream>
using namespace std;
int main()
{
    int n, x = 0, y = 0;
    cin >> n;
    x = n / 5; // 5의 최대수
    if (n % 5 != 0)
    {
        for (y = 1; y < 10; y++)
        {
            if (y * 3 + x * 5 == n)
                break;
            if (y * 3 + x * 5 > n)
                if (x != 0)
                    x--;
        }
    }
    if (y == 10)
        cout << -1 << endl;
    else
        cout << x + y << endl;
    return 0;
}
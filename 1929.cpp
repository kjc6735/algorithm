#include <iostream>
#include <string>

using namespace std;
int main()
{
    //무조건 홀수
    int m, n;
    cin >> m >> n;
    if (m % 2 == 0)
        m + 1;
    for (int i = m; i < n; i += 2)
    {
        // i
        for (int k = 2; k <= i; k++)
        {
            if (k != i && i % k == 0)
            {
                break;
            }
            if (k == i)
                cout << i << endl;
        }
    }
    return 0;
}
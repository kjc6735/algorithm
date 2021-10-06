#include <iostream>
#include <string>
#include <cmath>
int arr[1000001] = {
    0,
};

using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    arr[1] = 1;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (arr[i] == 1)
            continue;
        for (int k = i * 2; k <= n; k += i)
            arr[k] = 1;
    }
    for (int i = m; i <= n; i++)
    {
        if (arr[i] != 1)
            printf("%d\n", i);
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[10001];
int main()
{
    int n, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        arr[t] += 1;
    }

    for (int i = 0; i < 10001; i++)
    {
        for (int k = 0; k < arr[i]; k++)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
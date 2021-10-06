#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<long> arr;
bool comp(int a, int b)
{
    return a > b;
}

int main()
{
    long long n, m, t, idx = 0, sum = 0, idx2 = 0, result;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        arr.push_back(t);
    }
    if (arr.size() == 1)
    {
        result = arr[0] - m;
        goto end;
    }
    sort(arr.begin(), arr.end(), comp);
    arr.push_back(0);
    for (int i = 0; i < arr.size() - 1; i++)
    {
        long long gap = (arr[i] - arr[i + 1]) * (i + 1);
        sum += gap;
        if (sum >= m)
        {
            idx = i;
            break;
        }
    }
    sum -= (arr[idx] - arr[idx + 1]) * (idx + 1);
    //cout << "sum  " << sum << endl;
    m = m - sum;
    for (int i = 0; i <= m; i++)
    {
        if (i * (idx + 1) >= m)
        {
            idx2 = i;
            break;
        }
    }
    result = arr[idx] - idx2;
end:
    printf("%d\n", result);

    return 0;
}
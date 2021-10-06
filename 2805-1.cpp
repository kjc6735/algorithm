#include <iostream>
using namespace std;
long long arr[10000001];
int N, M;

long long b_search(long long *arr2)
{
    long long left = 0;
    long long right = 2000000000;
    long long mid;
    long long result;
    long long sum = 0;
    while (left <= right)
    {
        mid = (right + left) / 2;

        for (int i = 0; i < N; i++)
            if (arr[i] > mid)
                sum += (arr[i] - mid);
        cout << mid << endl;

        if (sum < M)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return mid;
}
int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    printf("%lld", b_search(arr));
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr;
int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++)
    {
        int k;
        scanf("%d", &k);
        arr.push_back(k);
    }
    sort(arr.begin(), arr.end());

    return 0;
}
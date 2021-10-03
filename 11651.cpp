#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<pair<int, int>> arr;
bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
int main()
{
    int n, a, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        arr.push_back(make_pair(a, b));
    }
    sort(arr.begin(), arr.end(), compare);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[i].first, arr[i].second);
    }
    return 0;
}
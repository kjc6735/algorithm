#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <tuple>
using namespace std;
vector<int> arr;
map<int, int> arr2;
bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first > b.first;
    return a.second > b.second;
}
int main()
{
    int n, t;
    int mid = 0, range = 0, mode = 0;
    double agv = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        arr.push_back(t);
        map<int, int>::iterator iter = arr2.find(t);
        if (iter != arr2.end())
            arr2[t] += 1;
        else
            arr2.insert(make_pair(t, 1));
    }
    vector<pair<int, int>> arr3(arr2.begin(), arr2.end());
    sort(arr.begin(), arr.end());
    sort(arr3.begin(), arr3.end(), comp);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    for (map<int, int>::iterator iter = arr2.begin(); iter != arr2.end(); iter++)
    {
        cout << "idx : " << iter->first << ", value: " << iter->second << endl;
    }

    // cout << round(agv / n) << endl;
    // cout << arr[n / 2].first << endl;
    // sort(arr.begin(), arr.end(), compare);
    // cout << arr[1].second << endl;
    // cout << arr[n - 1].first - arr[0].first << endl;
    return 0;
}
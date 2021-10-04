#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;
vector<int> arr;
map<int, int> arr2;
bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
int main()
{
    double avg = 0;
    int mid = 0, mode = 0, range = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        avg += t;
        arr.push_back(t);
        if (arr2.find(t) != arr2.end())
            arr2[t]++;
        else
            arr2[t] = 1;
    }
    vector<pair<int, int>> arr3(arr2.begin(), arr2.end());

    sort(arr.begin(), arr.end());
    sort(arr3.begin(), arr3.end(), comp);

    cout << round(avg / n) << endl;
    cout << arr[round(arr.size() / 2)] << endl;
    // cout << "arr3[0] first : " << arr3[0].first << endl;
    // cout << "arr3[0] second : " << arr3[0].second << endl;
    // cout << "arr3[1] first : " << arr3[1].first << endl;
    // cout << "arr3[1] second : " << arr3[0].second << endl;
    // for (int i = 0; i < arr3.size(); i++)
    // {
    //     cout << "arr3[" << i << "] first : " << arr3[i].first << endl;
    //     cout << "arr3[" << i << "] second : " << arr3[i].second << endl;
    //     cout << "======================================" << endl;
    // }
    if (arr3.size() >= 1 && arr3[0].second == arr3[1].second)
        cout << arr3[1].first << endl;
    else
        cout << arr3[0].first << endl;
    cout << arr.back() - arr.front() << endl;
    return 0;
}
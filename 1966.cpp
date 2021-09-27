#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t, n, m, temp, idx = 0, j;
    vector<pair<int, int>> importance;
    pair<int, int> p;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        for (int k = 0; k < n; k++)
        {
            cin >> temp;
            p = make_pair(temp, k);
            importance.push_back(p);
        }
        while (idx != importance.size())
        {
            for (j = idx + 1; j < importance.size(); j++)
            {
                if (importance[idx].first < importance[j].first)
                {
                    p = importance[idx];
                    importance.push_back(p);
                    importance.erase(importance.begin() + idx);
                    break;
                }
            }
            if (j == importance.size())
                idx++;
        }
        //찾아서 출력
        for (int i = 0; i < importance.size(); i++)
        {
            if (importance[i].second == m)
            {
                cout << i + 1 << endl;
                break;
            }
        }
        importance.clear();
        idx = 0;
    }
    return 0;
}
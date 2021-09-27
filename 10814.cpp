#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>
#include <stdio.h>

using namespace std;
vector<pair<int, string>> users;
vector<pair<int, int>> idxArr;
bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
int main()
{
    int n, age;
    char name[100];
    pair<int, char> user;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &age);
        scanf("%s", &name);
        users.push_back(make_pair(age, name));
        idxArr.push_back(make_pair(age, i));
    }
    sort(idxArr.begin(), idxArr.end(), compare);

    for (int i = 0; i < n; i++)
        printf("%d %s\n", idxArr[i].first, users[idxArr[i].second].second.c_str());
    return 0;
}

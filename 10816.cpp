#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
map<int, int> countArr;
int main()
{
    int n, m, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        if (countArr.find(t) == countArr.end())
            countArr.insert(make_pair(t, 1));
        else
            countArr.find(t)->second += 1;
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &t);
        printf("%d ", countArr.find(t)->second);
    }
    return 0;
}
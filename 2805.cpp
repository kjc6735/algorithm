#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arr;
bool comp(int a, int b)
{
    return a > b;
}

int main()
{
    int n, m, t, max = 0, idx = 0, sum = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        arr.push_back(t);
    }
    sort(arr.begin(), arr.end(), comp);

    while (sum < m){
        
    }
    
    return 0;
}
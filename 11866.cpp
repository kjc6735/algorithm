#include <iostream>
#include <vector>
using namespace std;
vector<int> arr;
int main()
{
    int n, k, t = 0, idx = 1;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &t);
        arr.push_back(i);
    }

    printf("<");
    while (arr.size() != 0)
    {
        
    }
    printf(">");

    return 0;
}
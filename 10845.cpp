#include <iostream>
#include <queue>
using namespace std;
queue<int> arr;

int main()
{
    int n;
    string str;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push")
        {
            int t;
            scanf("%d", &t);
            arr.push(t);
        }
        else if (str == "pop")
        {
            if (arr.empty())
                printf("-1\n");
            else
            {
                printf("%d\n", arr.front());
                arr.pop();
            }
        }
        else if (str == "size")
        {
            printf("%d\n", arr.size());
        }
        else if (str == "empty")
        {
            if (arr.empty())
                printf("1\n");
            else
                printf("0\n");
        }
        else if (str == "front")
        {
            if (arr.empty())
            {
                printf("-1\n");
            }
            else
                printf("%d\n", arr.front());
        }
        else if (str == "back")
        {
            if (arr.empty())
            {
                printf("-1\n");
            }
            else
                printf("%d\n", arr.back());
        }
    }
    return 0;
}
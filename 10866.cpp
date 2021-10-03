#include <iostream>
#include <deque>
using namespace std;
deque<int> arr;

int main()
{
    int n;
    string str;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push_back")
        {
            int t;
            scanf("%d", &t);
            arr.push_back(t);
        }
        else if (str == "push_front")
        {
            int t;
            scanf("%d", &t);
            arr.push_front(t);
        }
        else if (str == "pop_front")
        {
            if (arr.empty())
            {
                printf("%d\n", -1);
            }
            else
            {
                printf("%d\n", arr.front());
                arr.pop_front();
            }
        }
        else if (str == "pop_back")
        {
            if (arr.empty())
            {
                printf("%d\n", -1);
            }
            else
            {
                printf("%d\n", arr.back());
                arr.pop_back();
            }
        }
        else if (str == "size")
            printf("%d\n", arr.size());

        else if (str == "empty")
        {
            if (arr.empty())
                printf("%d\n", 1);
            else
                printf("%d\n", 0);
        }
        else if (str == "front")
        {
            if (arr.empty())
                printf("%d\n", -1);
            else
                printf("%d\n", arr.front());
        }
        else if (str == "back")
        {
            if (arr.empty())
                printf("%d\n", -1);
            else
                printf("%d\n", arr.back());
        }
    }
    return 0;
}
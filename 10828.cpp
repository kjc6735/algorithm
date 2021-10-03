#include <iostream>
#include <stack>
using namespace std;
stack<int> arr;

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
            //printf("push t : %d", t);
            arr.push(t);
        }
        else if (str == "top")
        {
            if (arr.empty())
                printf("%d\n", -1);
            else
                printf("%d\n", arr.top());
        }
        else if (str == "size")
            printf("%d\n", arr.size());
        else if (str == "pop")
        {
            if (arr.empty())
            {
                printf("%d\n", -1);
            }
            else
            {
                printf("%d\n", arr.top());
                arr.pop();
            }
        }
        else if (str == "empty")
        {
            if (arr.empty())
                printf("%d\n", 1);
            else
                printf("%d\n", 0);
        }
    }
    return 0;
}
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
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";
    // cout << endl;
    max = arr.front();
    while (max != 0)
    {

        sum += (idx + 1) * (arr[idx] - arr[idx + 1]);
        if (sum < m)
            idx++;
        else
        {
            //cout << "sum : " << sum << endl;
            break;
        }
    }
    if (sum == m)
    {
        max = arr[idx + 1];
        goto end;
    }

    sum -= ((idx + 1) * (arr[idx] - arr[idx + 1]));

    for (int i = 1; i < arr[idx] - arr[idx + 1]; i++)
    {
        sum += (idx + 1) * i;
        cout << "sum : " << sum << endl;
        cout << "m : " << m << endl;
        cout << "i : " << i << endl;

        if (sum >= m)
        {
            max = arr[idx] - i;
            //cout << "sum : " << sum << endl;
            break;
        }
    }
    //cout << "arr[" << idx << "] = " << arr[idx] << endl;
end:
    cout << max << endl;
    return 0;
}
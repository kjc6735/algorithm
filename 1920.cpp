#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> n_arr;

int main()
{
    int n, m, t, size;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        n_arr.push_back(t);
    }
    sort(n_arr.begin(), n_arr.end());
    size = n_arr.size();
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        for (int k = 0; k < 18; k++)
        {
            if (n_arr[size / 2] < t)
            {
                cout << size;
                size *= 1.5;
                cout << " " << size << endl;
            }
            else if (n_arr[size / 2] > t)
                size /= 2;
            else
            {
                cout << 1 << endl;
                break;
            }
        }
        cout << 0 << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;
vector<string> arr;
int main()
{
    int n, t = 0, sum = 0;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        arr.push_back(str);
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < arr[i].size(); k++)
        {
            if (arr[i][k] == 'O')
            {
                t++;
                sum += t;
            }
            else
            {
                t = 0;
            }
        }
        cout << sum << endl;
        sum = 0;
        t = 0;
    }
    return 0;
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, error = 0, temp_n = 0;
    string temp;
    cin >> n;
    temp = to_string(n);
    error = temp.length() * 9;

    for (int i = n - error; i <= n; i++)
    {
        temp_n = 0;
        temp = to_string(i);
        for (int k = 0; k < temp.length(); k++)
        {
            temp_n += (temp[k] - 48);
        }

        if (temp_n + i == n)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
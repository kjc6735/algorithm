#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string chess[50];
int arr[50][50] = {
    0,
};
string wb[2][8];
wb[0] = "wbwbwbwb";
wb[1] = "bwbwbwbw";

void bw(int a, int c)
{
    int count = 0;

    for (int i = a; i < a + 8; i++)
    {
        for (int k = c; k < c + 8; k++)
        {
        }
    }
}

int main()
{
    int m, n, min = 64;

    string line;

    cin >> n >> m;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cin >> chess[i];
    }
    for (int i = 0; i <= n - 8; i++)
    {
        for (int k = 0; k <= m - 8; k++)
        {
            bw(i, k);
            if (min > arr[i][k])
            {
                min = arr[i][k];
            }
            //cout << "arr [" << i << "," << k << "]" << arr[i][k] << endl;
        }
    }
    cout << min << endl;
    // for (int i = 0; i <= n - 8; i++)
    // {
    //     for (int k = 0; k <= m - 8; k++)
    //     {
    //         cout << arr[i][k] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}

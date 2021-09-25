#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string chess[50];
int arr[50][50] = {
    0,
};
string wb[2][8];

void bw(int a, int c)
{
    string bw = "BWBWBWBW";
    string wb = "WBWBWBWB";
    string BW[8] = {{bw}, {wb}, {bw}, {wb}, {bw}, {wb}, {bw}, {wb}};
    string WB[8] = {{wb}, {bw}, {wb}, {bw}, {wb}, {bw}, {wb}, {bw}};
    int countBW = 0;
    int countWB = 0;

    for (int i = a; i < a + 8; i++)
    {
        for (int k = c; k < c + 8; k++)
        {
            if (chess[i][k] != BW[i - a][k - c])
                countBW++;
            if (chess[i][k] != WB[i - a][k - c])
                countWB++;
        }
    }
    if (countBW <= countWB)
        arr[a][c] = countBW;
    else
        arr[a][c] = countWB;
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
        }
    }

    cout << min << endl;
    return 0;
}

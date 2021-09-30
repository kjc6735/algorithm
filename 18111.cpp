#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<vector<int>> arr;
vector<vector<int>> arr2;
int main()
{
    int n, m, b, d;
    int sec = 0, b_temp = 0;
    double avg = 0;
    scanf("%d %d %d", &n, &m, &b);
    for (int i = 0; i < n; i++)
    {
        arr.push_back(vector<int>());
        for (int k = 0; k < m; k++)
        {
            scanf("%d", &d);
            avg += d;
            arr[i].push_back(d);
        }
    }
    cout << avg << endl;
    avg = round(avg / (n * m));
    cout << round(2.5) << endl;
    b_temp = b;
    cout << "avg  = " << avg << endl;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            if (arr[i][k] > avg)
            {
                d = arr[i][k] - avg;
                sec += d * 2;
                b_temp += d;
            }
            else if (arr[i][k] < avg)
            {
                d = avg - arr[i][k];
                sec += d;
                b_temp -= d;
                // if (b_temp < 0)
                // {
                //     avg--;
                //     if (avg == 0)
                //     {
                //         cout << 0 << endl;
                //         return 0;
                //     }
                //     k = 0;
                //     sec = 0;
                //     i = 0;
                //     b_temp = b;
                // }
            }
        }
    }
    cout << sec << " " << avg << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int k = 0; k < m; k++)
    //     {
    //         printf("%d ", arr[i][k]);
    //     }
    //     printf("\n");
    // }

    return 0;
}
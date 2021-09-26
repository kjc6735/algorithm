#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int w, h, n, t;
    string temp;
    cin >> t;
    int f, c;
    for (int i = 0; i < t; i++)
    {
        cin >> h >> w >> n;
        f = (n - 1) % h + 1;
        c = (n - 1) / h + 1;
        cout << f;
        if (c < 10)
            cout << "0";
        cout << c << endl;
    }
    return 0;
}
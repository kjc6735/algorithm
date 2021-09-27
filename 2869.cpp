#include <iostream>
using namespace std;
int main()
{
    int a, b, v, result = 0;
    cin >> a >> b >> v;

    result = (v - b) / (a - b);
    if ((v - b) % (a - b) != 0)
        result += 1;
    cout << result << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    long double a, b;
    cout.precision(9);
    cout << fixed;
    cin >> a >> b;
    cout << a / b << endl;
    return 0;
}
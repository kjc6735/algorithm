#include <iostream>
#include <string>
#include <utility>
#include <map>
using namespace std;
map<int, int> m;
int main()
{
    m[-1] = 1;
    m[5] = 2;
    cout << m[-1] << endl;
    return 0;
}
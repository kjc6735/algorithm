#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main()
{
    string str[] = {{"abcd"}, {"test"}};
    int a = 0;
    cout << str[0][1] << endl;
    for (int i = 0; i < 3; i++)
    {
        a = i;
    }

    pair<char, char> p1 = make_pair('(', ')');
    if (p1 == make_pair('(', ')'))
    {
        cout << "true " << endl;
    }
    else
    {
        cout << "false " << endl;
    }

    return 0;
}
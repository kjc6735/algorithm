#include <iostream>
#include <string>
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
    cout << a << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, count = 0, num = 665;
    string str = "666", temp;
    cin >> x;
    while (num++, count != x)
    {
        temp = to_string(num);
        if (temp.find("666") != string::npos)
            count++;
    }
    cout << temp << endl;
    return 0;
}
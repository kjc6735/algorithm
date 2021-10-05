#include <iostream>
#include <vector>
using namespace std;
int arr[27];
int main()
{
    for (int i = 0; i < 27; i++)
        arr[i] = -1;

    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (arr[str[i] - 97] == -1)
            arr[str[i] - 97] = i;
    }

    for (int i = 0; i < 26; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
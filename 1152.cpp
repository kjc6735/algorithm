#include <iostream>
#include <string>
using namespace std;
int main()
{
    string text;

    getline(cin, text);
    int start = 0, end = text.length() - 1, count = 0;

    if (text[0] == ' ')
        start = 1;
    if (text[text.length() - 1] == ' ')
        end = text.length() - 2;
    if (text.length() == 1 && text[0] == ' ')
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = start; i <= end; i++)
        if (text[i] == ' ')
            count++;
    count += 1;
    cout << count << endl;
    return 0;
}
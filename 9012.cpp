#include <iostream>
#include <vector>
using namespace std;
vector<string> strArr;
int main()
{
    int n;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;

        for (int k = 0; k < str.length(); k++)
        {
            if (str[k] == '(')
                strArr.push_back("(");
            else if (strArr.size() >= 1 && str[k] == ')')
                strArr.pop_back();
            else
            {
                cout << "NO" << endl;
                strArr.clear();
                goto end;
            }
        }
        if (strArr.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    end:
        strArr.clear();
    }
    return 0;
}
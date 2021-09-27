#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    string str = "asf";
    int err = 1;
    vector<char> v;
    pair<char, char> a = make_pair('(', ')');
    pair<char, char> b = make_pair('[', ']');
    while (str[0] != '.' && str.length() > 0)
    {
        getline(cin, str);
        for (int i = 0; str[i] != '.'; i++)
        {
            if (str[i] == '(' || str[i] == '[')
                v.push_back(str[i]);
            if (str[i] == ')' || str[i] == ']')
            {
                if (v.size() > 0 && (a == make_pair(v.back(), str[i]) || b == make_pair(v.back(), str[i])))
                    v.pop_back();
                else
                {
                    cout << "no" << endl;
                    goto end;
                    break;
                }
            }
        }
        if (str[0] == '.')
            goto end;
        if (v.size() == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;

    end:
        v.clear();
    }

    return 0;
}
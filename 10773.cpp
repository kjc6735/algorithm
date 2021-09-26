#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int t, count, sum = 0;
    cin >> count;
    vector<int> v;
    for (int i = 0; i < count; i++)
    {
        cin >> t;
        if (t != 0)
            v.push_back(t);
        else
            v.pop_back();
    }
    for (int i : v)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
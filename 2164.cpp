#include <iostream>
#include <deque>

using namespace std;
deque<int> arr;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
        arr.push_back(i);
    while (arr.size() != 1)
    {
        arr.pop_back();
        arr.push_front(arr.back());
        arr.pop_back();
    }
    cout << arr.front() << endl;
    return 0;
}
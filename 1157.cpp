#include <iostream>
#include <string>
using namespace std;
int arr[26] = {
    0,
};
int main()
{
    string text;
    int k;
    int max = 0;
    int temp = 0;
    getline(cin, text);
    for (int i = 0; i < text.length(); i++)
    {
        k = (int)text[i];
        cout << "k is " << k << endl;
        if (k > 91)
            k -= 97;
        else
            k -= 65;
        arr[k] += 1;
        cout << k << endl;
    }
    //출력
    k = 0;
    for (int i = 0; i < 26; i++)
    {
        cout << "arr[" << i << "] =" << arr[i] << endl;
    }

    for (int i = 0; i < 26; i++)
    {
        if (max == arr[i])
            temp = arr[i];
        else if (max < arr[i])
            max = arr[i], k = i;
    }

    cout << "max" << max << " k = " << k << endl;
    if (temp == arr[k])
        cout << "?" << endl;
    else
        cout << (char)(k + 65) << endl;

    return 0;
}
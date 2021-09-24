#include <iostream>
#include <string>
using namespace std;
double arr[1000];
int main()
{
    int n;
    double sum = 0;
    string text;
    string item = "";
    cin >> n;
    cin.ignore();
    getline(cin, text);

    int idx = 0;
    int count = 0;
    //숫자로 변환하는 것..
    while (idx < text.length())
    {
        if (text[idx] != ' ')
            item += text[idx];
        else
        {
            arr[count] = stod(item);
            item = "";
            count++;
        }
        idx++;
    }
    arr[n - 1] = stod(item);
    int max = 0;
    //최대값 찾기
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]= " << arr[i] << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << max << endl;
    //평균값 구하기
    for (int i = 0; i < n; i++)
    {
        arr[i] = (arr[i] / max) * 100;
        sum += arr[i];
    }
    cout << sum / n << endl;
    return 0;
}
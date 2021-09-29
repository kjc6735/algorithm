#include <iostream>
using namespace std;

long long pow(int x, int y)
{
    long long result = 1;

    for (int i = 0; i < y; i++)
        result = result * x;
    return result;
}

int main()
{
    int n;
    long long result = 0;
    char str[100];
    scanf("%d", &n);
    scanf("%s", &str);
    for (int i = 0; i < n; i++)
        result += ((str[i] - 96) * (pow(31, i)));
    printf("%lld\n", result);
}
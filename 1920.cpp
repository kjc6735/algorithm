#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long int arr1[100001] = {
    0,
};
long long int arr2[100001] = {
    0,
};

int main()
{
    int n, m, idx = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%lld", &arr1[i]);
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        scanf("%lld", &arr2[i]);
    sort(arr1, arr1 + n);
    int left = 0, right = n - 1;
    int mid = (left + right) / 2;
    while (idx != m)
    {
        if (arr1[mid] == arr2[idx] || arr1[left] == arr2[idx] || arr1[right] == arr2[idx])
        {
            idx++;
            left = 0;
            right = n - 1;
            mid = (left + right) / 2;
            printf("1\n");
            continue;
        }
        else if (mid == left || mid == right)
        {
            idx++;
            left = 0;
            right = n - 1;
            mid = (left + right) / 2;
            printf("0\n");
            continue;
        }
        if (arr1[mid] > arr2[idx])
        {
            //cout << "mid : " << mid << "  left : " << left << "    right: " << right << endl;
            right = mid;
            mid = (left + right) / 2;
            //cout << "mid : " << mid << "  left : " << left << "    right: " << right << endl;
            //cout << "-----------------------------------------" << endl;
        }
        else if (arr1[mid] < arr2[idx])
        {
            //cout << "mid : " << mid << "  left : " << left << "    right: " << right << endl;
            left = mid;
            mid = (left + right) / 2;
            //cout << "mid : " << mid << "  left : " << left << "    right: " << right << endl;
            //cout << "-----------------------------------------" << endl;
        }
    }
    return 0;
}

/*
0 1 2 3 4
1 3 5 8 10


*/
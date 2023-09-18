
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // find the number which appears once in an array
    int arr[] = {1, 2, 3, 4, 1, 2, 3};

    // so, brute force approach is to use two loops and check for each element
    // but this will take O(n^2) time

    // how to find the length of an array
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "Number apperace once is:" << arr[i] << " ";
        }
    }

    // better approach is to use a map

    // is it same as hashing?
    // yes, it is same as hashing

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (auto i : m)
    {
        if (i.second == 1)
        {
            cout << "Number apperace once is:" << i.first << " ";
        }
    }
    // what is the time complexity of this approach
    // O(n) time and O(n) space

    // can we do optimal than this?
    // yes, we can do better than this
    // we can use XOR operator

    // 1 ^ 1 = 0
    // 1 ^ 0 = 1
    // 0 ^ 1 = 1
    // 0 ^ 0 = 0
    // 0 ^ 7 = 7

    // that means, 0 ^ x = x
    // and x ^ x = 0

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    return 0;
}
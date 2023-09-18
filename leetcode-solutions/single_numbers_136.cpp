
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // find the number which appears once in an array
    int arr[] = {5, 2, 3, 4, 5, 2, 3};

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
        // m[arr[i]]++;
        // key = Value
        m[arr[i]] = m[arr[i]] + 1;
        printf("\nKey of the map: %d And Value of the key: %d", arr[i], m[arr[i]]);

        // here we are using the property of map
        // if the key is not present in the map, then it will create a new key and assign the value 0 to it
        // and then it will increment the value by 1
        // the key value wil be the array element and the value will be the count of the element
        // so, basically Key of the map is original array element and Value of the key is the count of the element
    }

    for (auto i : m)
    {
        // printf("\nKey of the map: %d And Value of the key: %d", i.first, i.second);
        if (i.second == 1)
        {
            cout << "\nNumber apperace once is:" << i.first << " ";
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
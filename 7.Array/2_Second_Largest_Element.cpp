

#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int> &arr)
{
    // Code Here
    int n = arr.size();
    int l = arr[0];
    int sl = -1;

    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] > l)
        {
            sl = l;
            l = arr[i];
        }
        else if (arr[i] == l)
            continue;

        else if (arr[i] < l && arr[i] > sl)
        {
            sl = arr[i];
        }
    }

    return sl;
}

int secondSmallestElement(vector<int> &arr)
{
    // Code Here
    int n = arr.size();
    int smallest = arr[0];
    int secondSmallest = INT_MAX;

    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] == smallest)
            continue;

        else if (arr[i] > smallest && arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int main()
{
    vector<int> v = {1,23,43,11,56,77,77,03, 02};
    int l = secondLargestElement(v);
    int s = secondSmallestElement(v);
    cout << "Second Largest Element in Array: " << l << endl;
    cout << "Second Smallest Element in Array: " << s << endl;
}

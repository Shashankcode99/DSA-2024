

#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n)
{

    int largest = arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{
    vector<int> v = {2, 2, 4634, 12, 1, 3, 4, 43842, 1, 10000000, 0, 3};
    int size = v.size();
    int l = largestElement(v, size);

    cout << "Largest Element in Array: " << l <<endl;
}



#include <bits/stdc++.h>
using namespace std;

bool isArraySorted(vector<int> &nums)
{
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        if (nums[i + 1] < nums[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> v = {1,2,3,4,5};
    int size = v.size();
    bool isSorted = isArraySorted(v);

    cout << "Is Array Sorted: " << isSorted << endl;
}

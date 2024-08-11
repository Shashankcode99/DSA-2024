#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(vector<int> &arr)
{
    int size = arr.size();
    int pointer1 = 0;
   for (int pointer2 = 1; pointer2 < size; pointer2++)
   {
        if (arr[pointer2] != arr[pointer1])
        {
            arr[pointer1 + 1] = arr[pointer2];
            pointer1++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> v = {1, 2, 2, 3, 4, 4, 4, 5, 5, 5, 5, 5};
    int size = v.size();
    removeDuplicate(v);
}
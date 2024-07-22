#include <bits/stdc++.h>
using namespace std;

void mergeArray(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int leftPointer = start;
    int rightPointer = mid + 1;

    while (leftPointer <= mid && rightPointer <= end)
    {
        if (arr[leftPointer] <= arr[rightPointer])
        {
            temp.push_back(arr[leftPointer]);
            leftPointer++;
        }
        else
        {
            temp.push_back(arr[rightPointer]);
            rightPointer++;
        }
    }

    while (leftPointer <= mid)
    {
        temp.push_back(arr[leftPointer]);
        leftPointer++;
    }

    while (rightPointer <= end)
    {
        temp.push_back(arr[rightPointer]);
        rightPointer++;
    }

    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[i - start];
    }
}

void divideArray(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;

    int mid = (start + end) / 2;
    divideArray(arr, start, mid);
    divideArray(arr, mid + 1, end);
    mergeArray(arr, start, mid, end);
}

int main()
{
    vector<int> mainVector = {3, 5, 1, 7, 2, 12, 7};
    divideArray(mainVector, 0, mainVector.size() - 1);

    cout << "Sorted Array: " << endl;
    for (int i = 0; i < mainVector.size(); i++)
    {
        cout << mainVector[i] << " ";
    }
    cout << endl;
    return 0;
}

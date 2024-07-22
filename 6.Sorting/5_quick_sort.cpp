#include <bits/stdc++.h>
using namespace std;

int placePivotElement(vector<int> &v, int low, int high)
{
    int leftPointer = low;
    int rightPointer = high;
    int pivotElemnt = v[low];

    while (leftPointer < rightPointer)
    {

        // Increment Till You Get The Greater Element
        while (v[low] <= pivotElemnt && leftPointer <= high - 1)
        {
            leftPointer++;
        }

        // Decrement Till You Get The Samller Element
        while (v[high] > pivotElemnt && rightPointer >= low + 1)
        {
            rightPointer--;
        }

        if (rightPointer > leftPointer)
        {
            swap(v[leftPointer], v[rightPointer]);
        }
    }
    swap(v[low], v[rightPointer]);
    return rightPointer;
}

void quickSort(vector<int> &v, int low, int high)
{
    int partitionIndex = placePivotElement(v, low, high);
    quickSort(v, low, partitionIndex - 1);
    quickSort(v, partitionIndex + 1, high);
}

int main()
{
    vector<int> v = {2, 2, 4634, 12, 1, 3, 4, 842, 1, 0, 0, 3};
    int size = v.size() - 1;
    v = quickSort(v, 0, size);

    cout << "Sorted Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

}
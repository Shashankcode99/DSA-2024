#include <bits/stdc++.h>
using namespace std;
int printFactorialViaRecursion(int size, int arr[])
{
    int end = size - 1;

    for (int i = 0; i < size; i++)
    {
        if (i < end)
        {
            int temp = arr[i];
            arr[i] = arr[end];
            arr[end] = temp;
            end--;
        }
    }

    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
}

int main()
{
    int arr[] = {10,20,30,40};
    printFactorialViaRecursion(4, arr);
}
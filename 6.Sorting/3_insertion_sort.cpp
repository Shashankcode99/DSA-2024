#include <bits/stdc++.h>
using namespace std;
int insertionSort(int array[], int N)
{
    
    for (int iteration = 0; iteration < N; iteration++)
    {
        for (int arrayIteration = iteration + 1; arrayIteration > 0; arrayIteration--)
        {
            if (array[arrayIteration] < array[arrayIteration - 1])
            {
                int temp = 0;
                temp = array[arrayIteration];
                array[arrayIteration] = array[arrayIteration - 1];
                array[arrayIteration - 1] = temp;
            }
        } 
    }

    for (int it = 0; it < N; it++)
    {
        cout << array[it] << " ";
    }
}

int main()
{
    int array[] = {200, 46, 14, 52, 20, 9};

    // sizeof(array): Gives the total size in bytes of the entire array.
    //  sizeof(array[0]): Gives the size in bytes of the first element of the array.
    //  sizeof(array) / sizeof(array[0]): Calculates the number of elements in the array by dividing the total size of the array by the size of one element.

    insertionSort(array, sizeof(array) / sizeof(array[0]));
}

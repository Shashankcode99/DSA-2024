#include <bits/stdc++.h>
using namespace std;
int selectionSort(int array[], int N)
{
    int temp;
    for (int iteration = 0; iteration < N - 1; iteration++)
    {

        for (int arrayIteration = iteration + 1; arrayIteration < N; arrayIteration++)
        {

            if (array[arrayIteration] < array[iteration])
            {
                temp = array[iteration];
                array[iteration] = array[arrayIteration];
                array[arrayIteration] = temp;
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
    int array[] = {13, 46, 14, 52, 20, 9};

    // sizeof(array): Gives the total size in bytes of the entire array.
    //  sizeof(array[0]): Gives the size in bytes of the first element of the array.
    //  sizeof(array) / sizeof(array[0]): Calculates the number of elements in the array by dividing the total size of the array by the size of one element.

    selectionSort(array, sizeof(array) / sizeof(array[0]));
}

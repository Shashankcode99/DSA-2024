#include <bits/stdc++.h>
using namespace std;
int bubbleSort(int array[], int N)
{
    int temp;
    int isSwapped =0;
    for (int iteration = 0; iteration < N - 1; iteration++)
    {

        for (int arrayIteration = 0; arrayIteration < N - iteration - 1; arrayIteration++)
        {

            if (array[arrayIteration] > array[arrayIteration + 1])
            {
                temp = array[arrayIteration];
                array[arrayIteration] = array[arrayIteration + 1];
                array[arrayIteration + 1] = temp;
                isSwapped = 1;
            }
        }

        // For O(n) Complexity Check
        if(isSwapped == 0){
            break;
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

    bubbleSort(array, sizeof(array) / sizeof(array[0]));
}

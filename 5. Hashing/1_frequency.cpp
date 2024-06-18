#include <bits/stdc++.h>
using namespace std;
int frequencyCalculator(int array[], int N)
{
    unordered_map<int, int> mapper;

    for (int i = 0; i < N; i++)
    {
        mapper[array[i]] += 1;
    }

    for (auto key : mapper)
    {
        cout << key.first << "->" << key.second << endl;
    }
}

int main()
{
    int array[] = {1, 2, 4, 8, 4, 5, 6, 6, 7, 7, 7, 7};

    //sizeof(array): Gives the total size in bytes of the entire array.
    // sizeof(array[0]): Gives the size in bytes of the first element of the array.
    // sizeof(array) / sizeof(array[0]): Calculates the number of elements in the array by dividing the total size of the array by the size of one element.

    frequencyCalculator(array, sizeof(array) / sizeof(array[0]));
}

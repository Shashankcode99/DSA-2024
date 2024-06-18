#include <bits/stdc++.h>
using namespace std;
int frequencyCalculator(int array[], int N)
{
    map<int, int> mapper; // Use sorted map otherwise a higher element with same frequency can be given in output

    int highestElement = 0 , lowestElement = 0;
    int highestFrequency = 0 , lowestFrequency = N;
    for (int i = 0; i < N; i++)
    {
        mapper[array[i]] += 1;
    }

    for (auto key : mapper)
    {

        if(key.second > highestFrequency ) {
            highestFrequency = key.second;
            highestElement = key.first;
        }

         if(key.second < lowestFrequency ) {
            lowestFrequency = key.second;
            lowestElement = key.first;
        }

        cout << key.first << "->" << key.second << endl;
    }


    cout<< endl;
    cout << "Minimum Element: " << lowestElement << endl;
    cout << "Minimum Frequency: " << lowestFrequency << endl;
    cout << "Maximum Element: " << highestElement << endl;
    cout << "Maximum Frequency: " << highestFrequency << endl;



}

int main()
{
    int array[] = {1, 2, 4, 8, 4, 5, 6, 6, 7, 7, 7, 7};

    //sizeof(array): Gives the total size in bytes of the entire array.
    // sizeof(array[0]): Gives the size in bytes of the first element of the array.
    // sizeof(array) / sizeof(array[0]): Calculates the number of elements in the array by dividing the total size of the array by the size of one element.

    frequencyCalculator(array, sizeof(array) / sizeof(array[0]));
}

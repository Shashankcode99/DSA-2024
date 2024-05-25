#include <bits/stdc++.h>
using namespace std;
int counter = 1;
void printNumber(int N)
{
    if (counter > N)
        return;
    cout << counter << endl;
    counter++;
    printNumber(N);
}

int main()
{
    printNumber(5);
}
#include <bits/stdc++.h>
using namespace std;
void printNumber(int counter, int N)
{
    if (counter > N)
        return;
    cout << counter << " ";
    counter++;
    printNumber(counter, N);
}

void printNumberWithBacktracking(int count, int N)
{
    if (count < 1)
        return;

    printNumberWithBacktracking(count-1, N);
    cout << count << " ";
}
int main()
{
    int counter = 1;
    int num = 5;
    cout << "Print N To 1 Without BackTracking:" << endl;
    printNumber(counter, num);
    cout << endl;
    cout << "Print N To 1 With BackTracking:" << endl;
    printNumberWithBacktracking(num, num);
}
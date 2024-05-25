#include <bits/stdc++.h>
using namespace std;

// Normal Approach Without Backtracking
void printNumber(int N)
{
    if (N < 1)
        return;
    cout << N << " ";
    N--;
    printNumber(N);
}

// Backtracking Approach
void printNumberWithBacktracking(int counter, int N){
    if (counter > N)
        return;
    ;
    printNumberWithBacktracking(counter+1, N);
    cout << counter << " ";
}

int main()
{

    int counter  = 1;
    cout << "Print N To 1 Without BackTracking:" << endl;
    printNumber(5);
    cout<<endl;
    cout << "Print N To 1 With BackTracking:" << endl;
    printNumberWithBacktracking(counter, 10);
}
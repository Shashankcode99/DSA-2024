#include <bits/stdc++.h>
using namespace std;
int printFactorialViaRecursion(int N)
{
    if (N == 1)
        return 1;

    return N * printFactorialViaRecursion(N - 1);
}

int main()
{
    int N;
    cout << "Enter A Number:" << endl;
    cin >> N;

    int factorial = printFactorialViaRecursion(N);
    cout << factorial;
}
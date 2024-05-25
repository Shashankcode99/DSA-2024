#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    int count = 0;

    while (n > 0)
    {
        int lst_digit = n % 10;
        count++;
        n = n / 10;
    }
    cout << "Total Digit Count Is: "<<count;
}
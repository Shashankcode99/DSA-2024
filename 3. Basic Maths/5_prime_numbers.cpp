#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter A Number:" << endl;
    cin >> num;
    int count = 0;

    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }

        if ((num / i) != i && num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout<<"Prime Number"<<" ";
    }
    else
    {
        cout<<"Not A Prime Number"<<" ";
    }
}

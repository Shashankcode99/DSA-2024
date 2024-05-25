#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter A Number:"<<endl;
    cin >> num;
    vector<int> div;

    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            div.push_back(i);
        }

        if ((num / i) != i && num % i == 0)
        {
            div.push_back(num / i);
        }
    }

    sort(div.begin(), div.end());
    for (auto i : div)
    {
        cout << i << " ";
    }
}

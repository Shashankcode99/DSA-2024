#include <bits/stdc++.h>
using namespace std;
int counter = 1;
void printGfg(int N)
{
    if (counter > N)
        return;
    cout << "GFG" << endl;
    counter++;
    printGfg(N);
}

int main()
{
    printGfg(5);
}
#include <bits/stdc++.h>
using namespace std;

void GCD(int x, int y)
{
    int index=0;
    int min = x;
    int max = y;
    if(x > y){
    min = y;
    max = x; 
    }

    for (int i = min; i >= 1; i--)
    {
        int minNumFactor;
        int maxNumFactor;
    
        minNumFactor = min % i;
        maxNumFactor = max % i;

        if (minNumFactor == 0 && maxNumFactor == 0) {
            std::cout << i;
            break;
        }
    }
}

int main()
{
   GCD(15,10);
 
}

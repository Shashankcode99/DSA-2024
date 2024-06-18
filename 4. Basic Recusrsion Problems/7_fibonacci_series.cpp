#include <bits/stdc++.h>
using namespace std;
int fibonnaci(int prev, int next, int N)
{
    cout << prev << " ";

    if (N > 0)
    {
        fibonnaci(next, prev + next, N - 1);
    }
}

int main()
{
    bool output = fibonnaci(0, 1, 5);
}




// class Solution {
// public:
//     int fib(int n) {
//         if (n <=1) {
//             return ;
//         } 
//             int next = fib(n-1);
//             int prev = fib(n-2);
//             return prev+next;
//         }
// };
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    int dup = x;
    int rev = 0;
    if (dup < 0)
    {
        return false;
    }
    while (dup != 0)
    {
        int ld = dup % 10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && ld > 7))
            return false;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && ld < -8))
            return false;
        rev = rev * 10 + ld;
        dup = dup / 10;
    }
    if (rev == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    bool result = isPalindrome(10);
    std::cout << result;
}

#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string str)
{

    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {

        if (!isalnum(str[left]))
        {
            left++;
        }
        else if (!isalnum(str[right]))
        {
            right--;
        }
        else if (tolower(str[left]) != tolower(str[right]))
        {
            return false;
        }

        else
        {
            left++;
            right--;
        }
    }

    return true;
}

int main()
{
    string str = "ABCDCBAE";
    bool output = isPalindrome(str);
    cout << output;
}
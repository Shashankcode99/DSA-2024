#include <bits/stdc++.h>
using namespace std;
void printPattern1(int n)
{
    for (int outer = 0; outer < n; outer++)
    {
        for (int inner = 0; inner <= n; inner++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printPattern2(int n)
{
    for (int outer = 0; outer < n; outer++)
    {
        for (int inner = 0; inner <= outer; inner++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printPattern3(int n)
{
    for (int outer = 1; outer <= n; outer++)
    {
        for (int inner = 1; inner <= outer; inner++)
        {
            cout << inner;
        }
        cout << endl;
    }
}
void printPattern4(int n)
{
    for (int outer = 1; outer <= n; outer++)
    {
        for (int inner = 1; inner <= outer; inner++)
        {
            cout << outer;
        }
        cout << endl;
    }
}
void printPattern5(int n)
{
    for (int outer = n; outer >= 1; outer--)
    {
        for (int inner = 1; inner <= outer; inner++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printPattern6(int n)
{
    for (int outer = n; outer >= 1; outer--)
    {
        for (int inner = 1; inner <= outer; inner++)
        {
            cout << inner;
        }
        cout << endl;
    }
}

// -------IMPORTANT-------//

void printPattern7(int n)
{
    for (int outer = 1; outer <= n; outer++)
    {
        // Print space
        for (int space1 = 1; space1 <= n - outer; space1++)
        {
            cout << " ";
        }

        // Print Stars
        for (int star = 1; star <= 2 * outer - 1; star++)
        {
            cout << "*";
        }

        // Print space
        for (int space2 = 1; space2 <= n - outer; space2++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern8(int n)
{
    for (int outer = n; outer >= 1; outer--)
    {
        // Print space
        for (int space1 = 1; space1 <= n - outer; space1++)
        {
            cout << " ";
        }

        // Print Stars
        for (int star = 1; star <= 2 * outer - 1; star++)
        {
            cout << "*";
        }

        // Print space
        for (int space1 = 1; space1 <= n - outer; space1++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern9(int n)
{
    for (int outer = 1; outer <= n; outer++)
    {
        // Print space
        for (int space1 = 1; space1 <= n - outer; space1++)
        {
            cout << " ";
        }

        // Print Stars
        for (int star = 1; star <= 2 * outer - 1; star++)
        {
            cout << "*";
        }

        // Print space
        for (int space2 = 1; space2 <= n - outer; space2++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int outer = n; outer >= 1; outer--)
    {
        // Print space
        for (int space1 = 1; space1 <= n - outer; space1++)
        {
            cout << " ";
        }

        // Print Stars
        for (int star = 1; star <= 2 * outer - 1; star++)
        {
            cout << "*";
        }

        // Print space
        for (int space1 = 1; space1 <= n - outer; space1++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern10(int n)
{
    for (int outer = 1; outer <= 2 * n - 1; outer++)
    {
        int star = outer;
        if (outer > n)
        {
            star = 2 * n - outer;
        }
        for (int pat1 = 1; pat1 <= star; pat1++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printPattern11(int n)
{
    int start = 1;
    for (int outer = 1; outer <= n; outer++)
    {
        if (outer % 2 == 0)
        {
            start = 0;
        }
        else
        {
            start = 1;
        }
        for (int inner = 1; inner <= outer; inner++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void printPattern12(int n)
{
    for (int outer = 1; outer <= n; outer++)
    {
        for (int inner1 = 1; inner1 <= outer; inner1++)
        {
            cout << inner1;
        }

        for (int space = 1; space < 2 * n - 2 * outer; space++)
        {
            cout << " ";
        }
        for (int inner2 = outer; inner2 >= 1; inner2--)
        {
            cout << inner2;
        }

        cout << endl;
    }
}

void printPattern13(int n)
{
    int value = 1;
    for (int outer = 1; outer <= n; outer++)
    {
        for (int inner = 1; inner <= outer; inner++)
        {
            cout << value << " ";
            value++;
        }
        cout << endl;
    }
}

void printPattern14(int n)
{
    for (int outer = 1; outer <= n; outer++)
    {
        for (char ch = 'A'; ch <= 'A' + outer; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void printPattern15(int n)
{
    for (int outer = 1; outer <= n; outer++)
    {
        for (char ch = 'A'; ch <= 'A' + n - outer; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void printPattern16(int n)
{
    char val = 'A';
    for (int outer = 1; outer <= n; outer++)
    {
        for (int ch = 1; ch <= outer; ch++)
        {
            cout << val;
        }
        cout << endl;
        val = val + 1;
    }
}

void printPattern17(int n)
{
    for (int outer = 1; outer <= n; outer++)
    {
        for (int space1 = 1; space1 <= n - outer; space1++)
        {
            cout << ' ';
        }
        char val = 'A';
        for (char ch = 1; ch <= 2 * outer - 1; ch++)
        {
            cout << val;
            if (ch <= (2 * outer - 1) / 2)
            {
                val++;
            }
            else
            {
                val--;
            }
        }

        for (int space2 = 1; space2 <= n - outer; space2++)
        {
            cout << ' ';
        }
        cout << endl;
    }
}

void printPattern18(int n)
{
    char ch = 'E';
    for (int outer = 1; outer <= n; outer++)
    {
        char ch2 = ch;
        for (int inner = 1; inner <=outer; inner++)
        {
         cout << ch2;
         ch2++;
        }

       ch--;
       cout << endl;
    }
}


void printPattern19(int n)
{
    for (int outer = 1; outer <= n/2; outer++)
    {
        for (int star1 = 1; star1 <= n/2 - outer + 1; star1++)
        {
            cout << '*';
        }
        for (char space = 1; space <= 2 * outer - 2; space++)
        {
            cout << " ";
        }
        for (int star2 = 1; star2 <= n/2 - outer + 1 ; star2++)
        {
            cout << '*';
        }
        cout << endl;
    }

    for (int outer = 1; outer <= n/2; outer++)
    {
       for (int star1 = 1; star1 <= outer; star1++)
        {
            cout << '*';
        }
        for (char space = 1; space <= n-(2*outer); space++)
        {
            cout << " ";
        }
        for (int star2 = 1; star2 <= outer; star2++)
        {
            cout << '*';
        }
        cout << endl;
    }
}

void printPattern20(int n)
{
    for (int outer = 1; outer <= n; outer++)
    {
        if (outer <= (n + 1) / 2)
        {
            for (int star1 = 1; star1 <= outer; star1++)
            {
                cout << '*';
            }
            for (int space = 1; space <= (n+1) - (outer * 2); space++)
            {
                cout << " ";
            }
             for (int star1 = 1; star1 <= outer; star1++)
            {
                cout << '*';
            }
            cout << endl;
        }
        else {
            for (int star1 = 1; star1 <= n - outer + 1; star1++)
            {
                cout << '*';
            }
            for (int space = 1; space <= (outer*2) - (n+1) ; space++)
            {
                cout << " ";
            }
             for (int star2 = 1; star2 <=  n - outer + 1; star2++)
            {
                cout << '*';
            }
            cout << endl;
        }
    }
}

void printPattern21(int n)
{
    for (int outer = 1; outer <= n; outer++)
    {
        for (int inner = 1; inner <= n; inner++)
        {
            if (outer == 1 || outer == n)
            {
                cout << "*";
            }
            else
            {
                if (inner == 1 || inner == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the value :";
    cin >> n;
    printPattern21(n);
}

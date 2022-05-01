#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(void)
{
    int testCase = 0;
    cin >> testCase;
    int* M = new int[testCase];
    int* N = new int[testCase];
    int* X = new int[testCase];
    int* Y = new int[testCase];

    for (int i = 0; i < testCase; i++)
    {
        cin >> M[i] >> N[i] >> X[i] >> Y[i];
    }

    for (int i = 0; i < testCase; i++)
    {
        int x, y, year;
        int cycle = M[i] * N[i] / gcd(M[i], N[i]);

        if (X[i] > Y[i])
        {
            x = Y[i];
            y = Y[i];
            year = Y[i];
            while (x != (X[i]%M[i]) && year <= cycle)
            {
                x = (x + N[i]) % M[i];
                year += N[i];
            }
        }
        if (X[i] < Y[i])
        {
            x = X[i];
            y = X[i];
            year = X[i];
            while (y != (Y[i] % N[i]) && year <= cycle)
            {
                y = (y + M[i]) % N[i];
                year += M[i];
            }
        }
        if (X[i] == Y[i])
        {
            year = X[i];
            cout << year << "\n";
            continue;
        }

        if (year > cycle)
            cout << -1 << endl;
        else
            cout << year << endl;
    }
    return 0;
}
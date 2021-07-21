#include <bits/stdc++.h>
using namespace std;

void solve(int A, int B)
{
    //let x = a
    long long x = A;
    long long setBitsA = __builtin_popcountll(A);
    cout << "set bits in A = " << setBitsA << " set bits in B = " << B << endl;
    if (setBitsA < B)
    {
        int i = 0;
        // cout << (x & (1 << 3)) << endl;
        // cout << (x | (1 << 2));
        while (__builtin_popcountll(x) != B && i < 10)
        {
            if ((x & (1 << i)) == 0)
            {
                cout << x << endl;
                x |= (1 << i);
                cout << "x = " << x << " popcount x = " << __builtin_popcountll(x) << endl;
            }
            i++;
        }
        cout << x;
    }
    else if (setBitsA > B)
    {
        // cout << "evide";
        int i = 0;
        cout << (x & (1 << 1)) << endl;
        cout << (x & ~(1 << 0));
        while (__builtin_popcountll(x) != B && i < 10)
        {
            if ((x & (1 << i)) != 0)
            {
                x &= ~(1 << i);
                cout << "x = " << x << " popcount x = " << __builtin_popcountll(x) << endl;
            }
            i++;
        }
    }
}

int main()
{
    solve(4, 6);
}
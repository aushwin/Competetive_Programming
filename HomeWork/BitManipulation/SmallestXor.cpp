#include <bits/stdc++.h>
using namespace std;

int solve(int A, int B)
{
    int setBits = __builtin_popcount(B);
    int i = 1;
    while (true)
    {
        int x = A ^ i;
        if (__builtin_popcount(x) == setBits)
            break;
        i++;
    }
    return i;
}

int main()
{
    cout << solve(3, 3);
}
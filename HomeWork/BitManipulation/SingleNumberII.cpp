#include <iostream>
#include <vector>
using namespace std;

int solve(const vector<int> &A)
{
    int result = 0;
    for (int i = 0; i < 32; i++)
    {
        int x = 1 << i;
        int sum = 0;
        for (int j = 0; j < A.size(); j++)
        {
            if (A[j] & x)
                sum++;
        }
        if (sum % 3 != 0)
        {
            result |= x;
        }
    }
    return result;
}

int main()
{
    vector<int> v = {1, 2, 4, 3, 3, 2, 2, 3, 1, 1};
    cout << solve(v);
}
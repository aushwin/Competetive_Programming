#include <iostream>
using namespace std;

string solve(string A, int B)

{
    int n = B % A.size();
    while (n--)
    {
        char temp = A[A.size() - 1];
        for (int i = 0; i < A.size(); i++)
        {
            A[A.size() - 1 - i] = A[A.size() - i - 2];
        }
        A[0] = temp;
    }
    cout << A;
    return A;
}

int main()
{
    string s = solve("academy", 7);
}
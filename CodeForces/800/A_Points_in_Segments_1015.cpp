#include <iostream>
using namespace std;

int main()
{
    int n, m; //testcase , upperbound
    cin >> n >> m;
    int ar[m] = {0};
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        --l;
        --r;
        for (int i = l; i <= r; i++)
            ar[i] = 1;
    }
    int sum = 0;
    for (auto x : ar)
        sum += x;
    cout << m - sum << endl;
    for (int i = 0; i < m; i++)
    {
        if (ar[i] == 0)
            cout << i + 1 << " ";
    }
}
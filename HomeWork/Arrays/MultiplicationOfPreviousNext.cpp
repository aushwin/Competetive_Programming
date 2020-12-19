#include <iostream>
#include <vector>

using namespace std;

vector<int> solve(vector<int> &a)
{
    int n = a.size() - 1;
    vector<int> v;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            v.push_back(a[i] * a[i + 1]);
        }
        else if (i == n)
        {
            v.push_back(a[i] * a[i - 1]);
        }
        else
        {
            v.push_back(a[i - 1] * a[i + 1]);
        }
    }
    return v;
}

int main()
{
    vector<int> a{1, 2, 3, 4, 5};
    for (auto x : a)
        cout << x << " ";
    cout << "\n";
    vector<int> v = solve(a);
    for (auto x : v)
        cout << x << " ";
}

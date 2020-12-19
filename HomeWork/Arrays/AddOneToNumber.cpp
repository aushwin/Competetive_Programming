#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int> &a)
{
    int n = a.size() - 1; // size of the array
    int i = 0;
    while (a[n - i] + 1 == 10 && i <= n)
    {
        a[n - i] = 0;
        i++;
    }
    a[n - i] += 1;
    if (a[0] == 0)
        a.erase(a.begin());

    return a;
}

int main()
{
    vector<int> a{1, 9, 9, 9, 9, 9, 9};
    for (auto x : a)
        cout << x << " ";
    cout << "\n";
    vector<int> v = plusOne(a);
    for (auto x : a)
        cout << x << " ";
}

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> solve(int a)
{
    vector<vector<int>> v;
    for (int i = 1; i <= a; i++)
    {
        vector<int> t;
        for (int j = 1; j <= i; j++)
        {
            t.push_back(j);
        }
        v.push_back(t);
    }
    return v;
}

int main()
{
    vector<vector<int>> v = solve(4);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}

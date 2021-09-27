#include <bits/stdc++.h>
using namespace std;

string removePlus(string S)
{
    S.erase(remove(S.begin(), S.end(), '+'), S.end());
    return S;
}

int main()
{
    string s;
    cin >> s;
    s = removePlus(s);
    sort(s.begin(), s.end());
    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            s.insert(i, "+");
        }
    }
    cout << s;
}
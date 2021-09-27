#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    string s, t;
    cin >> s >> t;
    int count = 0;
    string s1 = s, s2 = t;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 != s2)
    {
        cout << -1;
        return 0;
    }
    for (int i = 0; i < n;)
    {
        // cout << "\ni =" << i;
        if (s[i] == t[i])
        {
            i++;
            continue;
        }
        if (s[i] != t[i])
        {
            char ltr = t[i];
            // cout << "\n letter to be swaped = " << ltr << endl;
            for (int j = i; j < n;)
            {
                // cout << "\nj =" << j;
                while (s[j] != ltr)
                {
                    j++;
                }
                char temp = s[j - 1];
                s[j - 1] = s[j];
                s[j] = temp;
                v.push_back(j);
                break;
            }
            count++;
        }
    }
    cout << count << endl;
    for (auto x : v)
        cout << x << " ";
}
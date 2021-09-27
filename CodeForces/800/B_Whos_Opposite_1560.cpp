#include <iostream>
#include <map>
#include <cstdlib>
using namespace std;

bool checkInMap(int x, map<int, int> mp)
{
    for (auto itr = mp.find(x); itr != mp.end(); itr++)
    {
        // cout << itr->first << '\t' << itr->second << '\n';
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> opposite;
        int a, b, c;
        cin >> a >> b >> c;
        opposite.insert(pair<int, int>(a, b));
        opposite.insert(pair<int, int>(b, a));
        int diff = abs(a - b);
        int i = 1, flag = 0;

        while (true)
        {

            int x = i + diff;
            if (diff == 1)
            {
                flag = 0;
                break;
            }
            if (!checkInMap(x, opposite) && !checkInMap(i, opposite))
            {
                opposite.insert(pair<int, int>(i, x));
                opposite.insert(pair<int, int>(x, i));
                // cout << endl
                //      << "new values added" << endl;
            }
            else if (!(i == a && x == b || x == a || i == b))
            {
                flag = 0;
                break;
            };

            if (checkInMap(c, opposite))
            {
                flag = 1;
                break;
            }
            i++;
        }
        if (flag)
            cout << opposite.at(c) << endl;
        else
            cout << "-1" << endl;
    }
}
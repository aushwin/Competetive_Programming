#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int aCount = 0, bCount = 0, cCount = 0;
        for (char x : s)
        {
            if (x == 'A')
            {
                aCount++;
            }
            else if (x == 'B')
            {
                bCount++;
            }
            else
            {
                cCount++;
            }
        }
        if (bCount - aCount < 0)
        {
            cout << "NO" << endl;
            // return 0;
        }
        if (bCount - aCount == 0 && cCount == 0)
        {
            cout << "YES" << endl;
            // return 0;
        }
        else if (bCount - aCount == 0 && cCount != 0)
        {
            cout << "NO" << endl;
        }
        if (bCount - aCount > 0)
        {
            if (bCount - cCount - aCount == 0)
            {
                cout << "YES" << endl;
                // return 0;
            }
            else
            {
                cout << "NO" << endl;
                // return  0;
            }
        }
        // cout << "\nA = " << aCount << "B = " << bCount << "C = " << cCount << endl;
    }
}
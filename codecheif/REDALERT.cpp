#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d, h;
        cin >> n >> d >> h;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int waterLevel = 0;
        int flg = 0;
        for (int x : ar)
        {
            if (x == 0)
            {
                waterLevel -= d;
                if (waterLevel < 0)
                    waterLevel = 0;
            }
            else
            {
                waterLevel += x;
            }
            // cout << "waterlevel = " << waterLevel << "\n"
            //  << "X = " << x << endl;
            if (waterLevel > h)
            {
                cout << "YES" << '\n';
                flg = 1;
                break;
            }
        }
        if (flg == 0)
            cout << "NO" << '\n';
    }
}
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, x, y; //x minute to vaccinate child | y minute to vaccinate elderly
        cin >> n >> p >> x >> y;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int minutes = 0;

        for (int i = 0; i < p; i++)
        {
            if (ar[i] == 0)
                minutes += x;
            else if (ar[i] == 1)
                minutes += y;
        }

        cout
            << minutes << endl;
    }
}
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ar[3], d;
        cin >> ar[0] >> ar[1] >> ar[2] >> d;
        int sum = ar[0] + ar[1] + ar[2];
        if (sum <= d)
            cout << '1' << endl;
        else
        {
            sort(ar, ar + 3, greater<int>());
            int count = 0;
            if (ar[0] + ar[1] >= d)
            {
                if (ar[1] + ar[2] <= d)
                {
                    cout << "2" << endl;
                }
                if (ar[1] + ar[2] > d)
                {
                    cout << "3" << endl;
                }
            }
        }
    }
}
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, l, r; //d days ago , not less than l days and nomore than r days
        cin >> d >> l >> r;
        if (d < l)
            cout << "Too Early" << endl;
        else if (d >= l && d <= r)
            cout << "Take second dose now" << endl;
        else if (d > r)
            cout << "Too Late" << endl;
    }
}
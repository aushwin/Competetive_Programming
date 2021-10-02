#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = a + b + c;
        if (sum <= d)
            cout << '1' << endl;
        else
        {
            if (sum % d == 0)

                cout << sum / d << endl;
            else
                cout << (sum / d) + 1 << endl;
        }
    }
}
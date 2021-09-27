#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c; //n dishes ,a fruits ,b vegetables and c fishes
        cin >> n >> a >> b >> c;
        int count = 0;
        while (a != 0)
        {
            if (b == 0)
                break;
            else
            {
                a--;
                b--;
            }
            count++;
        }
        while (c != 0)
        {
            if (b == 0)
                break;
            else
            {
                c--;
                b--;
            }
            count++;
        }
        if (count >= n)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
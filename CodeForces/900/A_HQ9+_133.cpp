#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s.find('H') != string::npos || s.find('Q') != string::npos || s.find('9') != string::npos)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
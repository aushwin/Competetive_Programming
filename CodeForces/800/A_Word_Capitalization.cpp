#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ascii = s[0];
    // cout << endl
    //      << "Ascii " << ascii << endl;
    if (ascii >= 97)
    {
        char charAscii = ascii - 32;
        // cout << "Character " << charAscii << endl;
        s[0] = charAscii;
    }
    cout << s;
}

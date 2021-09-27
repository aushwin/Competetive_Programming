#include <iostream>
#include <set>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> charSet(begin(s), end(s));

    if (charSet.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m; //songs , total size
    vector<long long> ar, car, diffarr;
    cin >> n >> m;
    while (n--)
    {
        long long s, cs;
        cin >> s >> cs;
        long long diff = s - cs;
        ar.push_back(s);
        car.push_back(cs);
        diffarr.push_back(diff);
    }
    long long count = 0;
    long long sumOfCompressed = 0;
    long long sumOfNonCompressed = 0;
    for (long long x : ar)
        sumOfNonCompressed += x;
    for (long long x : car)
        sumOfCompressed += x;
    if (sumOfCompressed > m)
    {
        cout << "-1";
        return 0;
    }
    sort(diffarr.begin(), diffarr.end(), greater<long long>());
    // cout << "sum of nonCompressed = " << sumOfNonCompressed << endl;
    // for (auto x : car)
    //     cout << x << " ";
    // cout << endl;
    long long i = 0;

    while (sumOfNonCompressed > m)
    {
        sumOfNonCompressed -= diffarr[i];
        i++;
        count++;
    }
    cout << count;
}
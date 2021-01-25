#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int> &a)
{
    int n = a.size() - 1; // size of the array
    int i = 0;
    while (a[n - i] + 1 == 10 && i < n )
    {
        a[n - i] = 0;
        i++;
    }
    if(a[n-i] + 1 ==10 && n>0){
        a[n-i]=0;
        a.insert(a.begin(),1);
    }else  a[n - i] += 1;
    int leadingZero = 0;
        for(auto x : a){
                if(x!=0)break;
                leadingZero++;
        }
        if(leadingZero != 0 ) a.erase(a.begin(),a.begin()+leadingZero);
    return a;}

int main()
{
    vector<int> a{9};
    for (auto x : a)
        cout << x << " ";
    cout << "\n";
    vector<int> v = plusOne(a);
    for (auto x : a)
        cout << x << " ";
}

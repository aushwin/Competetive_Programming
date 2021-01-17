#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int solve(vector<int> &A)

{
    sort(A.begin(),A.end(),greater<int>());
    // for(auto x : A) cout<<x<<' ';
    // cout<<'\n';
    int minCount=0;
    for(int i = 1;i<A.size();i++){
        minCount += A[0] - A[i];
    }
    cout<<minCount;
    return 0;
}

int main()
{
    vector<int> ar = {2,4,1,3,2};
    int s = solve(ar);
}
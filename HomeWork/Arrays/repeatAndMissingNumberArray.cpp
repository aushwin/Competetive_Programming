#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

typedef long long ll;
vector<int> repeatedNumber(vector<int> &A){
vector<int> v;
        ll sum = 0;
        ll sumSquare = 0;
        ll length = A.size();
        for(int i=0;i<length;i++){
                sum += (ll)A[i];
                sumSquare += (ll)A[i]*A[i];
        }
        ll totalSum = (length *(length + 1)) / 2l;
        ll totalSumSquare = (length * (length + 1) * (2*length + 1)) /6l;
        // cout<<"totalSum ="<<totalSum<<" totalSumSquare = "<<totalSumSquare<<"\n"<<"sum = "<<sum<<" sumSquare = "<<sumSquare<<"\n";
        ll xPlusy = (totalSumSquare - sumSquare) / (totalSum - sum);
        ll xMinusy = totalSum - sum;
        // cout<<"x + y "<<xPlusy<<" x - y "<<xMinusy<<"\n";
        ll missingNumber =( xPlusy + xMinusy ) / 2;
        ll repeatingNumber = xPlusy - missingNumber;
        // cout<<"Missing number = "<<missingNumber<<" repeating Number"<<repeatingNumber<<"\n";
        v.push_back((int)repeatingNumber); v.push_back((int)missingNumber);
        for(auto x:v) cout<<x<<" ";
        return v;}

int main() {
        vector<int> v = {1,2,3,3,5};
        auto x = repeatedNumber(v);
}

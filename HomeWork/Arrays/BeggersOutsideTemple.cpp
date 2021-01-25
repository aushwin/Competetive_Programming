#include<iostream>
#include<vector>
using namespace std;

vector<int> solve(int A,vector<vector<int>> &B){
        vector<int> v(A,0);
        for(auto x : B){
                v[x[0]-1]+=x[2];
                if(x[1]==A) continue;
                v[x[1]] -=x[2];
                }
        for(int i=1;i<A;i++){
                v[i] +=v[i-1];
        }
        for(auto x : v) cout<<x<<" ";
        cout<<"\n";

        return v;
}
int main(){
        vector<vector<int>> v ={{1,2,10},{2,3,20},{2,5,25}};
        solve(5 , v);
}

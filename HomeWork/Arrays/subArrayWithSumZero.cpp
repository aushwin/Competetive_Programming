#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long ;
int solve(vector<int> &B) {
        vector<ll> A(B.size(),0);
        for(int i=0;i<B.size();i++){
            A[i] =(ll)B[i];
            
        }
         for(auto x:A) cout<<x<<" ";
        cout<<endl;

     for(int i=1;i<B.size()-1;i++){
                A[i] += (ll) A[i-1];
        }
for(auto x:A) cout<<x<<" ";
        cout<<endl;

        sort(A.begin(),A.end());
        for(auto x:A) cout<<x<<" ";
        cout<<endl;
        auto it = find(A.begin(),A.end(),0); //created prefix sum array ... if 0 found return 1;
        if(it != A.end()) return 1;
        else {
        for(int i=0;i<A.size();i++){ // if adjacent elements in sorted array is same return 1;
                if(A[i]==A[i+1]) return 1;
        }
        }
        return 0;
    
}


int main(){
        vector<int> v = {5,17,-22,11};
        int a = solve(v);
        cout<<a;

}

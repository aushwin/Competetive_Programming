#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int solve(vector<int> &A){
        for(auto x : A)
                cout<<x<<" ";
        int flag = A[0]%2;
        int count = 1;
        for(int i = 0; i < A.size()-1 ; i++){
                if(flag==0 && A[i+1]%2!=0) { // o means even || modulo 2 ! = means odd
                        flag = 1;
                        count++;
                }

                if(flag==1 && A[i+1]%2==0){ //1 means odd || modulo 2 == means even
                        flag = 0;
                        count++;
                }
        }

        cout<<"count = "<<count;
        return 0;
}

int main(){
        vector<int> v ={12,10,28,37,43,40,14,12,48};
        int ans = solve(v);
}

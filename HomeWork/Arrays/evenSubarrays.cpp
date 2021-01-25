#include<iostream>
#include<vector>
#include<string>
using namespace std;

string solve(vector<int> &A){
        if(A.size() % 2 !=0) return "NO";
        else if((A.size() / 2) % 2 != 0 ) return "NO";
        else {
                if(A[0]%2==0&&A[A.size()-1]%2==0){
                        if(A[(A.size() / 2) -1]%2==0 && A[(A.size()/2)]%2==0){
                                return "YES";
                        }
                }
        }
        return  "NO";
}

int main() {
        vector<int> v ={2,4,8,7,6};
        cout<<solve(v);
}

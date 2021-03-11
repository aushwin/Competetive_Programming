#include<iostream>
#include<vector>
using namespace std;

void Solution(vector<vector<int>> &A){
        //printing esisting vector
        for(auto x : A){
                for(auto y : x) cout<<y<<" ";
                cout<<"\n";
        }
        int n = A.size();
        for(int i = 0 ; i < n/2 ; i++)
                for(int j = i ; j < n - i - 1 ; j++){
                        int temp = A[i][j];
                        A[i][j] = A[n - 1 - j][i];
                        A[n - 1 - j][i] = A[n - 1 - i][n - 1 - j]; 
                        A[n - 1 - i][n - 1 - j] = A[j][n - 1 - i];
                        A[j][n - 1 - i] = temp;
                }
        //printing the rotated array
        cout<<endl<<endl;
        for(auto x : A){
                for(auto y : x) cout<<y<<" ";
                cout<<"\n";
        }
}

int main(){
        vector<vector<int>> v = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12} , {13,14,15,16}};
        Solution(v);

}

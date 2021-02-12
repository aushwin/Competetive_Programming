#include<iostream>
#include<vector>

using namespace std;

int trap(const vector<int> &A){
        //orginal aray
        for(auto x : A) cout<<x<<" ";
        cout<<endl;
        vector<int> leftMax , rightMax;
        leftMax.push_back(A[0]);
        rightMax.push_back(A[A.size()-1]);
        for(int i = 1 , j = A.size()-2 ;i<A.size(); i++ , j--){
                if(leftMax[i-1]< A[i]) leftMax.push_back(A[i]);
                 else leftMax.push_back(leftMax[i-1]);
                if(rightMax[i-1] < A[j] ) rightMax.push_back(A[j]);
                 else rightMax.push_back(rightMax[i-1]);
                }
        // leftmax
        for(auto x : leftMax) cout<<x<<" ";
        cout<<endl;
        // rightmax
        for(auto x : rightMax) cout<<x<<" ";
        cout<<endl;
        
        int sum = 0 ;
        for(int i = 0 ;i<A.size(); i++){
                sum += min(leftMax[i] , rightMax[i]) - A[i] ;
        }
        cout<<"sum = "<<sum;

        return 0;
}

int main(){
        vector<int> v = {0,1,0,2,1,0,1,3,2,1,2,1};
        cout<<endl<<trap(v);
}

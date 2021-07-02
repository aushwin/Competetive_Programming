#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &A) {
    int i = A.size() - 1 ;
    while(A[i]+1==10 || i>=0){
            if(A[i]+1==10){
                A[i] = 0 ;
                i--;
            }
            else{
                A[i] +=1 ;
                break;
            }
        }
    // if(A[0]== 0 && A.size()-1==0) A[0]=1;
    if(i<0) A.insert(A.begin(),1);
    while(A[0]==0){
        A.erase(A.begin());
    }
    return A;
}

int main(){
    //pass args to plusOne function
}
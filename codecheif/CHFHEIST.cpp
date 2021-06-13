#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int D,d,P,Q;
        cin>>D>>d>>P>>Q;
        //to find number of q
        int numOfQ = 0,dDays=0;
        for(int j = 0 ; j<D ;){
            for(int i=0; i<d && j<D ;i++,j++){
            numOfQ += dDays;
            cout<<"Number of Q for "<<j<<" = "<<numOfQ<<endl;
        }
        dDays++;
        }
        cout<<numOfQ;
        
    }
}
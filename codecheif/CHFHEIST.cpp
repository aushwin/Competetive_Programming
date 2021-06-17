#include<iostream>


int main(){
    int t; std::cin>>t;
    while(t--){
        int D,d,P,Q;
        std::cin>>D>>d>>P>>Q;
        //to find number of q
        int numOfQ = 0,dDays=0;
        for(int j = 0 ; j<D ;){
            for(int i=0; i<d && j<D ;i++,j++){
            numOfQ += dDays;
            std::cout<<"Number of Q for "<<j<<" = "<<numOfQ<<std::endl;
        }
        dDays++;
        }
        std::cout<<numOfQ;
        
    }
}
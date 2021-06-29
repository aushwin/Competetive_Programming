#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &v) {
    int maxVal = INT16_MAX;
    vector<int> sieve (maxVal,true);
    sieve[0] = false;
    sieve[1]=false;
    for(int p=2;p*p<=maxVal;p++){
        for(int i=p*p;i<maxVal;i+=p){
            if(sieve[i])
                sieve[i]=false;
        }
    }
    int count=0;
    for(int i = 0;i<v.size()-1;i++){
        int val = v[i];
        for(int j=i+1; j<v.size();j++){
            val += v[j];

            if(sieve[val]) count++;
        }

    }
    

    return count;
    
}


int main(){
    vector<int> v = { 10, 2, 7, 11, 5, 7, 17, 8, 9, 11, 14, 2, 7, 1, 8};
    cout<<solve(v);
}
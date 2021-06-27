#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

vector<int> sieve(int n){
    vector<int> v;
    bool arr[n+1];
    memset(arr,true,sizeof(arr));
    for(int p = 2; p*p <=n ;p++){
        if(arr[p]==true)
            for(int i=p*p;i<=n;i+=p){
                arr[i] = false;
            }
    }
    for(int p=2;p<n;p++)
        if(arr[p]) v.push_back(p);

    return v;
}

vector<int> solution(int n){
    vector<int> v,sol;
    v = sieve(n+1);
    int flag=0;
    for(auto x : v){
        for(auto y:v){
            if(x+y==n){
                sol.push_back(x);
                sol.push_back(y);
                flag++;
                break;
            }
            if(flag)break;
        }
    }
    return sol;
}

int main(){
    vector<int> sol = solution(26);
    //sum in lexographical
    for(auto x:sol) cout<<x<<" ";
}
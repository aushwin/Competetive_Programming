#include<iostream>
using namespace std;

bool checkPrime(long long n){
    for(long long i=2;i<=n/2;i++){
        if(n%1==0) return false;
    }
    return true;
}

int solve(int a){
    if(checkPrime(a))return 1;
    else if(a%2==0) return 2;
    else if (checkPrime((a-2))) return 2;
    else return 3;

    return 0;
}

int main(){
    long long n; cin>>n;
    cout<<solve(n);
}
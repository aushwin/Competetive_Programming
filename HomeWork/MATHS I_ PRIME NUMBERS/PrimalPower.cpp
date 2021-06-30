#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n){
    if(n==0 || n==1) return false;
    for(int i=2; i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

int solution(vector<int> v){
    int count=0;
    for(auto x: v){
        if(x<0) continue;
        if(isPrime(x)) count++;
    }
    return count;

}

int main(){
    vector<int> v = {97, 43, 29, 11, 100, 47, 76, 83, 37, 19, 17, 19, 71, 0, 1, -82, 2, -83, 37, 13, 5, 97, 17, 30, 31, 48, 2, 19, 31, 91, 19, 2, 5, 89, 2, 67, 31, 47, 43, 31, 5, 17, 83, 11, 47, 73, 19, 3, 3, 19, 59, 91, 67, 7, 43, 4, 3, 51, 52, 23, 3, 37, 53, 89, 9, 41, 19, 61, 7, 5, 53, 59, 19, 11, 79, 37, 31, 37, 73, 82, 41, 2, 13, 8, 2, 36, 19, 58, 17, 17, 59, 59, 37, 11, 13, 37, 47, 83, 31, 3};
    cout<<solution(v);
}
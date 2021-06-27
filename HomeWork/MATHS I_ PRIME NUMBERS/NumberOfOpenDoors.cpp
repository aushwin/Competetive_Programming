#include<iostream>
#include<cstring>
using namespace std;

int solution(int n){
    bool arr[n+1];
    memset(arr,true,sizeof(arr));
    for(int p=2;p*p<n;p++){
        if(arr[p]==true);
            for(int i=p*p;i<=n;i+=p)
                arr[i]=false;
    }
    arr[1]=false;
    int count=0;
    //size
    for(int i=0;i<n;i++){
        if(!arr[i]) cout<<i<<" ";
    }
    return count;

}

int main(){
    int r = solution(10);
}

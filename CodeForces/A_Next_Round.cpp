#include<iostream>
using namespace std;

int main(){ 
    int n , k ;
    cin>>n>>k;
    int ar[n];
    for(int i = 0 ; i<n ;i++)
        cin>>ar[i];
    int ele = ar[k-1];
    int count= 0;
    for(int i=0;i<n;i++){
      
            if(ar[i]>=ele && ar[i]>0){
                count++;
            }
    }
    cout<<count;
}
#include<iostream>
#include<algorithm>
using namespace std;

int prefixSumMaxElement(int arr[],int n){

    for(int i=0;i<n;i++){
        arr[i+1] +=arr[i];
    }
    
    // cout<<"Prefix sum array";
    // for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    int *max = std::max_element(arr,arr+n);
    return *max;
}


int main() {
    int n  , q; cin>>n>>q;
    int ar[n] = {0};
    while(q--){
        int strtIndex , endIndex , value;
        cin>>strtIndex>>endIndex>>value;
        ar[strtIndex-1] += value;
        if(!(endIndex>=n)) ar[endIndex] += -value;
    }
    // cout<<"Array before prefixing";
    // for(int i=0;i<n;i++)cout<<ar[i]<<" ";
    // cout<<endl;
    int maxValue = prefixSumMaxElement(ar,n);
    // cout<<endl;
    cout<<maxValue;
}
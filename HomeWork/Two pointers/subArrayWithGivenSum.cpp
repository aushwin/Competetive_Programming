#include<iostream>
#include<vector>
using namespace std;

// int sum(vector<int> v,int s,int n){
//     int sum=0;
//     for(int i = s ;i <=n;i++){
//         sum +=v[i];
//     }
//     // cout<<"sum :"<<sum<<endl;
//     return sum;
// }

// vector<int> insert(vector<int> a , int strt  , int end){
//     vector<int> v;
//     for(int i = strt;i<=end;i++){
//         v.push_back(a[i]);
//     }
//     return v;
// }

vector<int> solve(vector<int> &a, int b) {
    vector<int> v;
    int i=0,j=0;
    int sum=a[i];
    cout<<"sum before entering loop :"<<sum<<endl;
    while(j<=a.size()-1){
       if(sum<b){
           j++;
           sum+=a[j];
           cout<<"sum :"<<sum<<endl;
       }
       else if(sum>b){
           sum-=a[i];
           i++;
           cout<<"sum :"<<sum<<endl;
       }
       else if(sum==b){
           for(int start =i;start<=j;start++){
               v.push_back(a[start]);
           }
           return v;
       }
        
    }
    v.push_back(-1);
    return v;
}


int main(){
    vector<int> v ={ 1, 1000000000};
    v = solve(v,1000000000);
    for(auto x : v)cout<<x<<" ";
}
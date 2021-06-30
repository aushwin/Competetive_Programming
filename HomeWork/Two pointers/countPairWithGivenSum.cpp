#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &a, int b) {
    int count = 0;
    for(int i=0 ,j=a.size()-1;i<=j;){
        if(a[i]+a[j]>b) j--;
        else if(a[i]+a[j]<b) i++;
        else if(a[i]+a[j] ==b){
            count ++;
            cout<<"i :"<<i<<" j :"<<j<<" count :"<<count<<" sum : "<<a[i]+a[j]<<endl;
            j--;
            i++;
        }

    }
    cout<<count;
    return count;
}


int main(){
    vector<int> v = {17, 36, 48, 51, 59, 76, 87, 89, 97, 99, 107, 129, 165, 174, 186, 194, 211, 215, 222, 223, 225, 230, 249, 266, 292, 311, 337, 347, 349, 351, 376, 384, 386, 396, 412, 425, 454, 457, 483, 484, 496};
    solve(v,446);

}
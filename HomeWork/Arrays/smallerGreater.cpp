#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int solve(vector<int> A){
        sort(A.begin(),A.end());
        for(auto x : A)
                cout<<x<<" ";
        cout<<"\n";
        int count = 0;
        for(int i=0;i<A.size();i++){
                if(A[0]<A[i]&&A[A.size()-1]>A[i]){
                        count++;
                }
        }
        cout<<count;
        return 0;
}

int main(){
        vector<int> v = {947, 871, 859, 471, 763, 766, 379, 746, 485, 966, 10, 350, 341, 22, 706, 702, 717, 967, 641, 712, 10, 954, 751, 250, 777, 214, 820, 276, 708, 509, 123, 73, 593, 790, 797, 678, 320, 865, 392, 428, 611, 813, 655, 195, 102, 902, 919, 171, 706, 841, 873, 98, 128, 728, 878, 701, 874, 158, 548, 214, 414, 600, 869, 936, 841, 221, 87, 255, 233, 627, 487, 53, 270, 162, 517, 576, 240, 681, 172, 148, 86, 778, 205, 741, 483, 11, 795, 188, 450};
        int n = solve(v);
}

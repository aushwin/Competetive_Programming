#include<iostream>
#include<vector>

using namespace std;

string solve(vector<int> &A){
        //array content
        for(auto x : A) cout<<x<<" ";
        cout<<endl;
        //array length
        cout<<"Array Length = "<<A.size()<<endl;
        //even division 
        int n = A.size();
        if(A[0]%2==0 &&A[n-1]%2==0 && n % 2 ==0) return "YES";
        else return "NO";
     }


int main() {
        vector<int> v = { 978, 847, 95, 729, 778, 586, 188, 782, 813, 870, 871, 940, 312, 693, 580, 101, 760, 837, 564, 633, 680, 155, 241, 374, 682, 290, 850, 601, 433, 922, 773, 959, 530, 290, 990, 50, 516, 409, 868, 131, 664, 851, 721, 880, 20, 450, 745, 387, 787, 823, 392, 242, 674, 347, 65, 135, 819, 324, 651, 678, 139, 940} ;
        cout<<solve(v);
}

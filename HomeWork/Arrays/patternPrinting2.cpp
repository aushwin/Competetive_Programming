#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> solve(int a) {
        vector<vector<int>> v;
        for(int i=1;i<=a;i++){
               vector<int> t;
               for(int j = i,k=0 ; j>=1 ; k++){
                       if(a-k>i) t.push_back(0);
                       else {t.push_back(j);
                               j--;
                       }
               }
               v.push_back(t);
        }

        return v;
}

int main() {
        auto y = solve(4);
        for(auto x : y){
              for(auto a : x) cout<<a<<" ";
              cout<<"\n";
        }
}

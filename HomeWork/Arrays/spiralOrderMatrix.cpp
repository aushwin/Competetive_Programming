#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generateMatrix(int A) {
        vector<vector<int>> v(A,vector<int>(A,0));
        int n = A;
        int val = 1 ;
        for(int layer = 0; layer < (n+1) / 2 ; layer ++){
                for(int ptr = layer; ptr< n - layer;ptr++){
                        v[layer][ptr] = val++;
                }

                for(int ptr = layer + 1 ;ptr < n - layer;ptr ++){
                        v[ptr][n-layer-1] = val++;
                }

                for(int ptr = n - layer -2 ; ptr>=layer;ptr--){
                        v[n-layer-1][ptr] = val++;
                }

                for(int ptr = n - layer - 2;ptr >layer;ptr -- ){
                        v[ptr][layer] = val++;
                }


        
        }
        return v;
}



int main() {
        vector<vector<int>> v = generateMatrix(4);
        for(auto x : v){
                for(auto y : x) cout<<y<<" ";
                cout<<"\n";
        }

}

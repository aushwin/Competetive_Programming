#include<iostream>
using namespace std;

int main() {
        int n , h , x; cin>>n>>h>>x;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
                cin>>arr[i];
                if(arr[i] + x >=h) {
                        cout<<"YES";
                        return 0 ;
                }
        }
        cout<<"NO";
        return 0 ;

}

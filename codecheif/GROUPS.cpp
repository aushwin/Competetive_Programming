#include<iostream>
using namespace std;
int main(){
        int t; cin>>t;
        while(t--){
                string s;
                cin>>s;
                int grpCount = 0;
                int flg=0;
                for(int i = 0 ;i<s.length()-1;i++){
                        flg = s[i] - '0';
                        if(flg==1 && s[i+1] == '0') grpCount++;

                }
                cout<<grpCount<<endl;
        }
}

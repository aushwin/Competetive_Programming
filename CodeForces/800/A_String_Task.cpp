#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int main() { 
    string s; getline(cin,s);
    char s_arr[s.length() + 1];
    transform(s.begin() , s.end() , s.begin(),::tolower);
    char vow[] = {'a','e','i','o','u','y'};
    strcpy(s_arr , s.c_str());
    vector<char> v ; 
    for(auto x : s_arr)
     v.push_back(x);
    v.push_back('\0');
    //  cout<<"Evide verunund"<<" "<<v.size();
    for(int i=0; i<v.size();i++){
        auto x = find(begin(vow),end(vow),v[i])!=end(vow);
        if(find(begin(vow),end(vow),v[i])!=end(vow)){
            // cout<<"ifill keri "<<"\n";
            v.erase(v.begin()+i);
            i--;
        }
    }

    for(int i=0;i<v.size();i++){
       if(v[i]=='\0'){
            v.erase(v.begin()+i);
            i=0;
       }
    }
    int limit = v.size();
    for(int i=0;i<limit*2;i++){
        v.insert(v.begin() + i , '.');
        i++;
    }


    for(auto x : v)
     cout<<x;

    
    


}
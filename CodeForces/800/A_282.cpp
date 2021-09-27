#include<iostream>
using namespace std;

int main() {
	int t; cin>>t;
	int count = 0;
	while(t--){
		string s;
		cin>>s;
		if(s[1]=='-') count--;
		else count ++;

	}
	cout<<count;
}

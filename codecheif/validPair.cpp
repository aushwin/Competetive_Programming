#include<iostream>
#include<algorithm>
using namespace std;

int  main() {
	int ar[3];
	for(int i=0;i<ar;i++)
		cin>>ar[i];
	sort(ar,ar+3);
	for(auto x:ar) cout<<x<<" ";
	cout<<endl;	
}

#include<iostream>
using namespace std;

int main() {
	int t ; cin>>t;
	int ar[1000];
	for(int i=0,count=1;i<1000;i++,count++){
		while(count%3==0||count%10==3){
			count++;
		}
		ar[i]=count;
	}
	while(t--){
		int x ; cin>>x;
		--x;
		cout<<ar[x]<<endl;
	}

}

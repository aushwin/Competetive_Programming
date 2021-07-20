#include<iostream>
using namespace std;

int numSetBits(int A){
	int count = 0;
	while(A){
		count++;
		A &= A-1;
		cout<<"A ="<<A<<endl;
	}

	return count;
}

int main(){
	cout<<numSetBits(11);
}

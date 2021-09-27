#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	int ar[5][5];
	int row , col;
	for(int r=0;r<5;r++){
	 for(int c=0;c<5;c++){
		cin>>ar[r][c];	
		if(ar[r][c]==1)
		{	row = r;
			col = c;
		}
	 }
	}
	cout<<abs(2-row) + abs(2-col);
	
}

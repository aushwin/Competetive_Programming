#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int solve(string A) {
        vector<int> left(A.size(),0);
        vector<int> right(A.size(),0);
        left[0] = (int) A[0] - '0';
        right[A.size()-1] = (int) A[A.size()-1] - '0';
        //left prefix sum 
        int maxCount = 0;
        int temp = 0 , oneCount = 0;
        //Counting max_count and max ones
        for(int i = 0 ;i<A.size();i++){
                if(A[i]=='1'){
                        oneCount++;
                        temp++;
                }
                else {
                        maxCount = max(temp , maxCount);
                        temp = 0;
                }
        } 
        maxCount = max(maxCount , temp);
        for(int i=1;i<A.size();i++){
                if(A[i]=='1'){
                left[i] = left[i-1] + (A[i] - '0');
                }
                else{ left[i] = 0;
                }
        }
        //right prefix sum
        cout<<"Sum of all 1's = "<<oneCount<<endl;
        cout<<"Max one Count = "<<maxCount<<endl;
       for (int i = A.size() - 2; i >= 0; i--) { 
		if (A[i] == '1') 
			right[i] = right[i + 1] + 1; 

		else
			right[i] = 0; 
	} 
        //printing
        for(auto x : left)
                cout<<x<<" ";
        cout<<endl;
        for(auto x : right) cout<<x<<" ";
        cout<<endl;
        for(int i=1 ; i<A.size()-1;i++){
                if(A[i] == '0'){
                        int sum = left[i-1] + right[i+1];
                        cout<<"sum = "<<sum<<endl;
                        if(sum < oneCount) maxCount =max(maxCount, sum+1);
                        else  maxCount = max(maxCount ,sum);
                }
        }
        cout<<endl<<endl;
        return maxCount;
}

int main() {
        cout<<solve("01");

}

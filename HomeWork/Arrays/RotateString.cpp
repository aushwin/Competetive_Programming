#include <iostream>
#include <string>
using namespace std;

string solve(string A, int B)

{
    // int n = B % A.size();
    // while (n--)
    // {
    //     char temp = A[A.size() - 1];
    //     for (int i = 0; i < A.size(); i++)
    //     {
    //         A[A.size() - 1 - i] = A[A.size() - i - 2];
    //     }
    //     A[0] = temp;
    // }
    // cout << A;
    // return A;
    int n = B % A.size();
    int sz = A.size();
    // cout<<"array size = " << A.size()<<"\n";
    char s[A.size()]="";
    // cout<<"A.size() - 1 -  (B % A.size()); i<A.size() "<<A.size() - 1 -  n;
        for (int j = 0 ,i = A.size()  - n; i<A.size() ;i++,j++){
            s[j] = A[i];
        }
        for (int i= n , j=0 ;i<A.size();i++,j++ ){
            s[i] = A[j];
        }
        A = s;
        A.resize(sz);
    //    cout<<A;

    return A;
    
}

int main()
{
    string s = solve("scaler",2 );
}
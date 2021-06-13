#include<iostream>
using namespace std; int main()

               {

int x = -1; try

               {

if (x < 0) {

throw x;

}

else

{

cout<<x;

}

}

catch (int x )

{

cout << "Exception occurred: Thrown value is " << x << endl;

}

return 0;

}

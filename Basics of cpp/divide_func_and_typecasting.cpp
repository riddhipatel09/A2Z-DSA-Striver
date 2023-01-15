
#include <iostream>

using namespace std;

float fun_divide(int a, int b){
    return a/(float)b; //here b was of int type and we did type casting from int to float datatype
}

int main()
{
    int m,d;
    cout<<"enter m ";
    cin>>m;
    cout<<"enter d ";
    cin>>d;
    cout<<fun_divide(m,d); //here it is not mandatory to take arguments name as a and b. only datatype of arguments matters and it must be same as that of called function parameters.
    
    
    
return 0;
}

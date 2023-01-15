#include <iostream>

using namespace std;

float func_mult(float m, float d){
    return m*d;
}

int main()
{
   float a,b;
   cout<<"a";
   cin>>a;
   cout<<"b";
   cin>>b;
//   float result= func_mult(int m, int d);      // error: expected primary-expression before ‘int’
   //reason: arguments ma variable nu declaration karyu che etle
   
   float result = func_mult(a,b);
   cout<<result <<endl<< typeid(result).name();
    return 0;
}

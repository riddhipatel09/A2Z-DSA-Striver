#include <iostream>

using namespace std;

string param_name = "Tirth";  //here param_name and a are global variables of string datatype
string a = "helllllooooo"; 

int sum(int a, int b) //here a and b are parameters of function sum(which returns int)
{
   
    cout<<a<<b;
    
    cout <<"'tirht'";
    string n = "hellp"; //here n is local variable of function sum so we cannot access it outside of function sum
    int i = 100;
    
        return a+b;
};

// SCOPE is between two curly braces

int main()
{
    int riddhi = 55;
    int num = 12;
    int b;
    cout<<"enter b:";
    cin>>b;
    int result = sum(10,b); //int type result named variable in which we are assigning....we are calling sum named function and passing arguments 10 and b
    cout << result;
    return 0;
}










******************************** 2 *****************************

#include <iostream>

using namespace std;

int max_of_four(int a, int b, int c, int d){
    int max = a;
    if(max<b){
        max = b;
    }
    if(max<c){
        max = c;
    }    
    if(max<d){
        max = d;
        }
        
    return max;
}
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max_of_four(a,b,c,d);
    
    
    return 0;
}
   

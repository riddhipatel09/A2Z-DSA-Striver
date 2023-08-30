#include <iostream>

using namespace std;



int main(){
    
    string name = "riddhi";
    
    string *ptr = &name;
    string **pt = &ptr;
    string ***var = &pt;
    
    cout << "address of name: " << &name << endl;
    cout << "value stored in ptr: " << ptr << endl;
    cout << "add of ptr is: " << &ptr << endl;
    cout << "add of ptr using var: " << *var << endl;
    
    return 0;
}

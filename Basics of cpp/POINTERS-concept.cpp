/******************************************************************************
ADDRESS pointer var ma store thay che.
*******************************************************************************/

#include <iostream>

using namespace std;

void changeVarVal(int *var){
    // changes given variable's value.aiya calling func na var ni value change krva mate e variable nu ADDRESS pass krvu pdse.
    // aiya calling func na var ni value change krva mate e variable nu ADDRESS pass krvu pdse.
    
    // main fun na myVar ma 12 store krelo chhe to aapne myVar na ADDRESS par jai ne 12 ne bare kadhi ne 50 nakhvana chhe
    // ena mate aapne de-referencing operator(*) no use krsu.
    cout << "value of myVar using de-referencing operator in changeVarVal func: " << *var <<endl;
    *var = 50;
}

int main()
{
    int myVar=12;
    int *a = &myVar;
    cout << "myVar addr: " << &myVar << endl;
    cout << "a: " << a <<endl;
    cout << "value of myVar: " << *a <<endl;
    
    // aa jagya ee ADDRESS pass krvu parameter nu
    changeVarVal(&myVar);
    
    cout << "new value of myVar: " << myVar;
  
    return 0;
}

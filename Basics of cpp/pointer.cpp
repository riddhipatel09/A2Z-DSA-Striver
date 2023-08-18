include <stdio.h>
#include <cstdio>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void fnc(int *a, int *b) {
    int d=*a,c=*b;
    *a=d+c;
    *b=abs(d-c);
     
    
}

int main() {
    int a, b;
    cin>>a>>b;
    fnc(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
    

    return 0;

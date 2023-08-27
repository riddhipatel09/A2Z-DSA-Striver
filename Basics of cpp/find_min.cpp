#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool find_min(int a, int b){
    return a < b;
}
 
int main(){
    cout << min({8,5,546,9,1,2}, find_min);
    return 0;
}

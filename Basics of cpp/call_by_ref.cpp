#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void changedVal(vector<int> &v){
    cout << "func v: " << &v << endl;     // 0x61fee0 (adress remains same when we call by refrence)
    for(auto &ele : v){                   // this will change the values in original vector.
        ele = ele * 2;
    }

}
int main()
{
    vector<int> v = {1, 2, 3, 4};

    cout << "main v: " << &v << endl;     // 0x61fee0
    
    for(auto ele : v){
        cout << ele << " ";
    }
    cout << endl;
    changedVal(v);
    for(auto ele : v){
        cout << ele << " ";
    }
    
    return 0;
}

// DOUBLE THE ARR ELEMENTS CODE USING *CALL BY REFERENCE*

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void multi(int *arr, int size)
{
    cout << endl << "func arr: " << arr << endl;
    for (int i = 0; i < size; i++)                               // func address will be as same as the main address bcz call by ref
    {
        arr[i] = 2 * arr[i];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    multi(arr, size);
    cout << endl << "main arr: " << arr << endl;
    for(int i = 0; i < size; i++){
    cout << arr[i] << endl;
    }
    return 0;
}

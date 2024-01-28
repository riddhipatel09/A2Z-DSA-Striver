#include<bits/stdc++.h>
using namespace std;
void f(int i,int arr[], int n){
    if(i>=n/2)
       return;
    SWAP(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}

int main(){
  
  // Here, let’s take the value of n to be 3.
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[n];
  f(0, arr, n);
  for(int i = 0; i < n; i++) cout << arr[n] <<" ";
  return 0;
}

/*Time complexity: O(nlogn) 
Reason: At each step, we divide the whole array, for that logn and we assume n steps are taken to get sorted array, so overall time complexity will be nlogn

Space complexity: O(n)  
Reason: We are using a temporary array to store elements in sorted order.

Auxiliary Space Complexity: O(n)
*/


#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
  vector<int> temp;
  int left=low;
  int right=mid+1;

//storing elements in the temporary array in a sorted manner
  while(left<=mid && right<=high){
    if(arr[left]<=arr[right]){
      temp.push_back(arr[left]);
      left++;
    }
    else{
      temp.push_back(arr[right]);
      right++;
    }
  }

// if elements on the left half are still left 
  while(left<=mid){
    temp.push_back(arr[left]);
    left++;
  }

//  if elements on the right half are still left
  while(right<=high){
    temp.push_back(arr[right]);
    right++;
  }

// transfering all elements from temporary to arr  
   for(int i=low;i<=high;i++){
    arr[i]=temp[i-low];
   }
}



void mergeSort(vector<int> &arr,int low,int high){
  if(low>=high) return;
  int mid=(low+high)/2;
  mergeSort(arr,low,mid);
  mergeSort(arr,mid+1,high);
  merge(arr,low,mid,high);
}


int main(){
  int n;
  cin >> n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  mergeSort(arr,0,n-1);
  for(int i=0; i <n; i++){
    cout<<arr[i] <<" ";
  }

  return 0;
}

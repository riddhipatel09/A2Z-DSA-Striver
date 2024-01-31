/*Worst Case Time complexity: O(n2) 
Best Case – This case occurs when the pivot is the middle element or near to middle element of the array.
Recurrence :
F(n) = 2F(n/2)
Time Complexity for the best and average case: O(N*logN)

Space Complexity: O(1) + O(N) auxiliary stack space.
*/


#include<bits/stdc++.h> // Including the entire standard library
using namespace std;

// Function to partition the array and return the pivot index
int partition(vector<int> &arr, int low, int high) {
  int pivot = arr[low]; // Selecting the pivot element
  int i = low; // Index for the smaller element
  int j = high; // Index for the larger element

  // Partitioning the array
  while (i < j) {
    // Finding element on left side to swap
    while (arr[i] <= pivot && i <= high - 1) {
      i++;
    }
    // Finding element on right side to swap
    while (arr[j] > pivot && j >= low + 1) {
      j--;
    }
    // Swapping elements if they are out of order
    if (i < j) {
      swap(arr[i], arr[j]);
    }
  }

  // Placing the pivot element in its correct position
  swap(arr[low], arr[j]);
  return j; // Returning the pivot index
}

// Function to perform QuickSort recursively
void quickSort(vector<int> &arr, int low, int high) {
  if (low < high) {
    // Partitioning the array and recursively sorting the subarrays
    int pIndex = partition(arr, low, high);
    quickSort(arr, low, pIndex - 1);
    quickSort(arr, pIndex + 1, high);
  }
}

// Main function
int main() {
  int n;
  cin >> n; // Input the size of the array
  vector<int> arr(n); // Declaring a vector to store the array elements

  // Inputting the elements of the array
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Sorting the array using QuickSort algorithm
  quickSort(arr, 0, n - 1);

  // Printing the sorted array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0; // Indicating successful completion of the program
}

/*The first line of the input contains ,where  is the number of integers.The next line contains  space-separated integers.

Q::::)--->>>reverse the numbers inputted!!

Print the  integers of the array in the reverse order, space-separated on a single line.

Sample Input

4
1 4 3 2
Sample Output

2 3 4 1
*/
#include<iostream>
using namespace std;
int main() {
    
    int N,i; 
    cin>>N;
    int arr[N];
    
    for(i=0;i<N;i++){
        cin>>arr[i];
    }  
    
    for(i=N;i>0;i--){
        cout<<arr[i-1]<<" ";
    }
    return 0;
}

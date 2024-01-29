//Time Complexity: O(N) { Precisely, O(N/2) as we compare the elements N/2 times and swap them}.
//Space Complexity: O(1) { The elements of the given array are swapped in place so no extra space is required}.

#include <iostream>
using namespace std;

bool palindrome(int i, string& s){
    
    // Base Condition
    // If i exceeds half of the string means all the elements 
    // are compared, we return true.
    if(i>=s.length()/2) return true;
    
    // If the start is not equal to the end, not the palindrome.
    if(s[i]!=s[s.length()-i-1]) return false;
    
    // If both characters are the same, increment i and check start+1 and end-1.
    return palindrome(i+1,s);
}

int main() {
	
	// Example string.
	string s = "madam";
	cout<<palindrome(0,s);
	cout<<endl;
	return 0;
}

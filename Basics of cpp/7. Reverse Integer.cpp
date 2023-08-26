// https://leetcode.com/problems/reverse-integer/submissions/1032069401/
// https://takeuforward.org/c-programs/reverse-a-number-in-c/

// Time Complexity: O(n), where n is the length of the given number
// Space Complexity: O(1)

// Iterative:

class Solution {
public:
    int reverse(int x) {
        int current = 0;  // Initialize a variable to store the reversed number.
        
        while (x) {  // Continue looping until x becomes 0.
            int lastdigit = x % 10;  // Get the last digit of the current number.
            x = x / 10;  // Remove the last digit from the current number.
            
            // Check for integer overflow/underflow before updating the 'current' value.
            if (current < INT_MIN / 10 || current > INT_MAX / 10) {
                return 0;  // Return 0 if reversing causes overflow or underflow.
            }
            
            current = (current * 10) + lastdigit;  // Add the last digit to the reversed number.
        }
        
        return current;  // Return the final reversed number.
    }
};


// RECURSION APPROACH - using INT_MAIN and INT_MAX to check for int overflow condition
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	
	int reverse_recursion(int num, long long res){
		if (num == 0){ 
			return res;
		}
        if (res < INT_MIN/10 || res > INT_MAX/10){
            return 0;
        }
		res = (res*10) + (num % 10);
		return reverse_recursion(num/10,res);
	}
	
    int reverse(int x) {
    	return reverse_recursion(x,0);
    }
};

int main(){
	Solution obj;
	int num,ans;
	cout << "Enter i/p number: ";
	cin >> num;
	ans = obj.reverse(num);
	cout << ans;
	return 0;
}

// RECURSION APPROACH - using pow(2,31) to check for int overflow condition (Slower)
class Solution {
public:
	
	int reverse_recursion(int num, long long res){

    // Base Case of recursion
		if (num == 0){ 
			return res;
		}
      // Check for int overflow condition - return 0 if overflow
        if (res*10 < (pow(2,31) * (-1)) || res*10 > pow(2,31)){
            return 0;
        }
		res = (res*10) + (num % 10);

    // return the final res value while returning from end of the recursion to top
		return reverse_recursion(num/10,res);
	}

  int reverse(int x) {
      // call recursion function
    	return reverse_recursion(x,0);
    }
};

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // iterate over the map:
    /* for(auto it : mp){
            cout << it.first << "->" << it.second << endl;
        }
    */

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetch:
        cout << mp[number] << endl;
    }
    return 0;
}
Input: 
7
1 2 3 1 3 2 12
5
1 2 3 4 12

Output: 
2
2
2
0
1

Note: We can similarly perform character hashing using the map data structure.

The syntax will be the following:


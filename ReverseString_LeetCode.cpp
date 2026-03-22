/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 

Constraints:

1 <= s.length <= 105
s[i] is a printable ascii character.
*/

                                    // SOLUTION
class Solution {
public:

    void f(vector<char>&s, int i, int j){

        if(i >= j) return;

    swap(s[i], s[j]);
    f(s, i+1, j-1);
    
    }
    void reverseString(vector<char>& s) {
        f(s, 0, s.size()-1);
    }
};
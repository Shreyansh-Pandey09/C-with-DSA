/*
Given an alphanumeric string s, return the second largest numerical digit that appears in s, or -1 if it does not exist.

An alphanumeric string is a string consisting of lowercase English letters and digits.

 

Example 1:

Input: s = "dfa12321afd"
Output: 2
Explanation: The digits that appear in s are [1, 2, 3]. The second largest digit is 2.
Example 2:

Input: s = "abc1111"
Output: -1
Explanation: The digits that appear in s are [1]. There is no second largest digit. 
 

Constraints:

1 <= s.length <= 500
s consists of only lowercase English letters and digits.
*/

                                                            //SOLUTION

class Solution {
public:
    int secondHighest(string s) {
        int n=s.size();
        int maxi=-1;
        for(int i=0; i<n; i++){
            if(isdigit(s[i])){
                int num=s[i]-'0';
                if(num>maxi){
                    maxi=num;
                }
            }
        }
        int slargest=-1;
        for(int i=0; i<n; i++){
            if(isdigit(s[i])){
                int num=s[i]-'0';
                if(num>slargest && num<maxi){
                    slargest=num;
                }
            }
        }
        return slargest;
    }
};
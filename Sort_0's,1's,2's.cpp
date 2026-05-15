/*
Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.
Note: You need to solve this problem without utilizing the built-in sort function.

Examples:

Input: arr[] = [0, 1, 2, 0, 1, 2]
Output: [0, 0, 1, 1, 2, 2]
Explanation: 0s, 1s and 2s are segregated into ascending order.
Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]
Explanation: 0s, 1s and 2s are segregated into ascending order.
Follow up: Could you come up with a one-pass algorithm using only constant extra space?

Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 2
*/

                                                            // SOLUTION
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n = arr.size();
        int cout0=0, cout1=0, cout2=0;
        for(int i=0; i<n; i++){
            if(arr[i]==0) cout0++;
            else if(arr[i]==1) cout1++;
            else cout2++;
        }
        
        for(int i=0; i<cout0; i++) arr[i]=0;
        for(int i=cout0; i<cout0+cout1; i++) arr[i]=1;
        for(int i=cout0+cout1; i<n; i++) arr[i]=2;
    }
};
/*
Rotate Array by One
Difficulty: BasicAccuracy: 69.6%Submissions: 366K+Points: 1Average Time: 20m
Given an array arr, rotate the array by one position in clockwise direction.

Examples:

Input: arr[] = [1, 2, 3, 4, 5]
Output: [5, 1, 2, 3, 4]
Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.
Input: arr[] = [9, 8, 7, 6, 4, 2, 1, 3]
Output: [3, 9, 8, 7, 6, 4, 2, 1]
Explanation: After rotating clock-wise 3 comes in first position.
Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 105
*/

                                                        // SOLUTION
// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n=arr.size()-1;
        int temp=arr[n];
        
        for(int i=n; i>=0; i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        
    }
};
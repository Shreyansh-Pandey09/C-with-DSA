/*
Max Consecutive Bit
Difficulty: EasyAccuracy: 49.84%Submissions: 37K+Points: 2
Given an array arr[] consisting of only 0’s and 1’s, return count of the maximum number of consecutive 1’s or 0’s present in the array. 

Examples:

Input: arr[] = [0, 1, 0, 1, 1, 1, 1]
Output: 4
Explanation: The maximum number of consecutive 1’s in the array is 4 from index 3-6.
Input: arr[] = [0, 0, 1, 0, 1, 0]
Output: 2
Explanation: The maximum number of consecutive 0’s in the array is 2 from index 0-1.
Input: arr[] = [0, 0, 0, 0]
Output: 4
Explanation: The maximum number of consecutive 0’s in the array is 4.
Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 1
*/

                                                        // SOLUTION
class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int n=arr.size();
        int maxi=1;
        int count=1;
    
        for(int i=1; i<n; i++){
            if(arr[i]==arr[i-1]){
                count++;
            }
            else{
                count=1;
            }
            maxi=max(count, maxi);
        }
        return maxi;
    }
};
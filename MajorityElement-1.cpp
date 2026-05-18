/*
Given an array arr[]. Find the majority element in the array. If no majority element exists, return -1.

Note: A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.

Examples:

Input: arr[] = [1, 1, 2, 1, 3, 5, 1]
Output: 1
Explanation: Since, 1 is present more than 7/2 times, so it is the majority element.
Input: arr[] = [7]
Output: 7
Explanation: Since, 7 is single element and present more than 1/2 times, so it is the majority element.
Input: arr[] = [2, 13]
Output: -1
Explanation: Since, no element is present more than 2/2 times, so there is no majority element.
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105

*/

                                                            // SOLUTION
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
    int n=arr.size();
    map<int,int>mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;
    }
};
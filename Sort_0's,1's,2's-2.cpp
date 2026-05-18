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
        int n=arr.size();
        int low=0, mid=0, high=n-1;
        
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};

/*

0 to low-1 : 0s
low to mid-1 : 1s
mid to high : unknown
high+1 to n-1 : 2s

a[mid] == 0, swap(a[low], a[mid]) and low++, mid++
a[mid] == 1, mid++  
a[mid] == 2, swap(a[mid], a[high]) and high--

*/
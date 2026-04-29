/*
Intersection of Two Sorted Arrays
Difficulty: EasyAccuracy: 47.82%Submissions: 24K+Points: 2Average Time: 10m
Given two sorted arrays a[] and b[], where each array may contain duplicate elements, return the elements in the intersection of the two arrays in sorted order.

Note: Intersection of two arrays can be defined as the set containing distinct common elements that are present in both of the arrays.

Examples:

Input: a[] = [1, 1, 2, 2, 2, 4], b[] = [2, 2, 4, 4]
Output: [2, 4]
Explanation: Distinct common elements in both the arrays are: 2 and 4.
Input: a[] = [1, 2], b[] = [3, 4]
Output: []
Explanation: No common elements.
Input: a[] = [1, 2, 3], b[] = [1, 2, 3]
Output: [1, 2, 3]
Explanation: All elements are common.
Constraints:
1 ≤ a.size(), b.size() ≤ 105
-109 ≤ a[i], b[i] ≤ 109
*/

                                                                //SOLUTION
class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // code here
        int n1 = a.size();
        int n2 = b.size();
        vector<int> ans;
        int i=0; int j=0;
        
        while(i<n1 && j<n2){
            if(a[i]==b[j]){
                if(ans.empty() || ans.back()!=a[i]){
                    ans.push_back(a[i]);
                }
                i++;
                j++;
            }
            else if(a[i]<b[j]) i++;
            else j++;
        }
        return ans;
    }
};
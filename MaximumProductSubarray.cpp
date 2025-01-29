/*
Given an array arr[] that contains positive and negative integers (may contain 0 as well). Find the maximum product that we can get in a subarray of arr[].

Note: It is guaranteed that the output fits in a 32-bit integer.

Examples

Input: arr[] = [-2, 6, -3, -10, 0, 2]
Output: 180
Explanation: The subarray with maximum product is {6, -3, -10} with product = 6 * (-3) * (-10) = 180.
Input: arr[] = [-1, -3, -10, 0, 6]
Output: 30
Explanation: The subarray with maximum product is {-3, -10} with product = (-3) * (-10) = 30.
Input: arr[] = [2, 3, 4] 
Output: 24 
Explanation: For an array with all positive elements, the result is product of all elements. 
Constraints:
1 ≤ arr.size() ≤ 106
-10  ≤  arr[i]  ≤  10

Company Tags
Morgan StanleyAmazonMicrosoftOYO RoomsD-E-ShawGoogle
Topic Tags
ArraysDynamic ProgrammingData StructuresAlgorithms
Related Interview Experiences
Morgan Stanley Interview Set 11 Campus
Related Articles
Maximum Product Subarray Set 3Maximum Product Subarray
Expected Complexities
Time Complexity: O(n)Auxiliary Space: O(1)

  */

class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int n=arr.size();
        int res=INT_MIN;
        int p,s;
        p=s=1;
        for(int i=0;i<n;i++)
        {
            if(p==0)p=1;
            if(s==0)s=1;
            p*=arr[i];
            s*=arr[n-i-1];
            res=max({res,p,s});
        }
        return res;
    }
};

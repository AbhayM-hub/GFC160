/*
Majority Element II
Difficulty: MediumAccuracy: 48.1%Submissions: 122K+Points: 4
You are given an array of integer arr[] where each number represents a vote to a candidate. Return the candidates that have votes greater than one-third of the total votes, If there's not a majority vote, return an empty array. 

Note: The answer should be returned in an increasing format.

Examples:

Input: arr[] = [2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6]
Output: [5, 6]
Explanation: 5 and 6 occur more n/3 times.
Input: arr[] = [1, 2, 3, 4, 5]
Output: []
Explanation: o candidate occur more than n/3 times.
Constraint:
1 <= arr.size() <= 106
-109 <= arr[i] <= 109

Topic Tags
Arrays
Related Articles
Find All Array Elements Occurring More Than %e2%8c%8an 3%e2%8c%8b Times
Expected Complexities
Time Complexity: O(n)Auxiliary Space: O(1)

  */

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto i:arr)
        {
            mp[i]++;
        }
        int x=arr.size()/3;
        for(auto i:mp)
        {
            if(i.second>x)
            {
                ans.push_back(i.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

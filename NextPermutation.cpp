/*
Given an array of integers arr[] representing a permutation, implement the next permutation that rearranges the numbers into the lexicographically next greater permutation. If no such permutation exists, rearrange the numbers into the lowest possible order (i.e., sorted in ascending order). 

Note - A permutation of an array of integers refers to a specific arrangement of its elements in a sequence or linear order.

Examples:

Input: arr = [2, 4, 1, 7, 5, 0]
Output: [2, 4, 5, 0, 1, 7]
Explanation: The next permutation of the given array is {2, 4, 5, 0, 1, 7}.
Input: arr = [3, 2, 1]
Output: [1, 2, 3]
Explanation: As arr[] is the last permutation, the next permutation is the lowest one.
Input: arr = [3, 4, 2, 5, 1]
Output: [3, 4, 5, 1, 2]
Explanation: The next permutation of the given array is {3, 4, 5, 1, 2}.
Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 105

Company Tags
InfosysFlipkartAmazonMicrosoftFactSetHikeMakeMyTripGoogleQualcommSalesforce
Topic Tags
Arrayspermutationconstructive algoData Structures
Related Interview Experiences
Qualcomm Interview Experience Set 7 Off CampusMakemytrip Interview Experience Set 11 Developer PositionAmazon Interview Experience Set 413 Sdet 1 Campus InternshipFlipkart Interview Experience Sde 2
Related Articles
Find Next Greater Number Set DigitsNext Permutation
Expected Complexities
Time Complexity: O(n)Auxiliary Space: O(1)

*/

//Inbuilt function using
class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        next_permutation(arr.begin(),arr.end());
        
    }
};



//solve
class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n=arr.size();
      int i=n-2;
      while(i>=0 && arr[i]>=arr[i+1])
        {
          i--;
        }
      if(i>=0)
      {
        int j=n-1;
        while(j>=0 && arr[j]<arr[i])
          {
            j--;
          }
        swap(arr[i].arr[j]);
    }
      reverse(arr.begin()+i+1,arr.end());
    }
};

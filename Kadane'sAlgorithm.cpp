/*
Given an integer array arr[]. You need to find the maximum sum of a subarray.

Examples:

Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
Output: 11
Explanation: The subarray {7, -1, 2, 3} has the largest sum 11.
Input: arr[] = [-2, -4]
Output: -2
Explanation: The subarray {-2} has the largest sum -2.
Input: arr[] = [5, 4, 1, 7, 8]
Output: 25
Explanation: The subarray {5, 4, 1, 7, 8} has the largest sum 25.
Constraints:
1 ≤ arr.size() ≤ 105
-109 ≤ arr[i] ≤ 104

Company Tags
ZohoFlipkartMorgan StanleyAccoliteAmazonMicrosoftSamsungSnapdeal24*7 Innovation LabsCitrixD-E-ShawFactSetHikeHousing.comMetLifeOla CabsOraclePayuTeradataVisaWalmartAdobeGoogleArcesium
Topic Tags
ArraysDynamic ProgrammingData StructuresAlgorithms
Related Interview Experiences
Oracle Interview Experience Set 45 For 3 Years ExperiencedZoho Interview Experience Set 18 On CampusHike Interview Experience Set 5Ola Interview Experience Set 10 DsAccolite Interview Experience Set 3 On CampusMicrosoft Interview Experience Set 151 Sde 2 3 5 Years ExperienceMicrosoft Interview Experience For Internship 4Adobe Shecodes Product Interview Experience For Internship 2020
Related Articles
Largest Sum Contiguous Subarray
Expected Complexities
Time Complexity: O(n)Auxiliary Space: O(1)
*/

class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        long sm=0,mx=INT_MIN;
        for(auto i:arr)
        {
            sm+=i;
            mx=max(sm,mx);
            if(sm<0) sm=0;
            
        }
        return mx;
    }
};

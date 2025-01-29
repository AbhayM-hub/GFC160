/*
Stock Buy and Sell – Multiple Transaction Allowed
Difficulty: MediumAccuracy: 13.43%Submissions: 152K+Points: 4
The cost of stock on each day is given in an array price[]. Each day you may decide to either buy or sell the stock i at price[i], you can even buy and sell the stock on the same day. Find the maximum profit that you can get.

Note: A stock can only be sold if it has been bought previously and multiple stocks cannot be held on any given day.

Examples:

Input: prices[] = [100, 180, 260, 310, 40, 535, 695]
Output: 865
Explanation: Buy the stock on day 0 and sell it on day 3 => 310 – 100 = 210. Buy the stock on day 4 and sell it on day 6 => 695 – 40 = 655. Maximum Profit = 210 + 655 = 865.


Input: prices[] = [4, 2, 2, 2, 4]
Output: 2
Explanation: Buy the stock on day 3 and sell it on day 4 => 4 – 2 = 2. Maximum Profit = 2.
Constraints:
1 <= prices.size() <= 105
0 <= prices[i] <= 104

Company Tags
PaytmFlipkartMorgan StanleyAccoliteAmazonMicrosoftSamsungD-E-ShawHikeMakeMyTripOla CabsOracleWalmartGoldman SachsDirectiIntuitSAP LabsQuikrFacebookSalesforcePubmaticSapientSwiggy
Topic Tags
Related Interview Experiences
Ola Interview Experience Set 7 For Sde 1Accolite Interview Experience Set 4 On CampusDirecti Interview Set 1Intuit Interview Set 4 SseOne97paytm Interview ExperiencePaytm Interview Experience Set 4 Walk In DriveWalmart Lab Interview Experience Set 8 Off Campus 3 Years ExperienceMakemytrip Interview Experience Set 7 On Campus
Related Articles
Stock Buy Sell
Expected Complexities
Time Complexity: O(n)Auxiliary Space: O(1)
*/


class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n=prices.size();
        long profit=0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]>prices[i-1])
            {
                profit += (prices[i]-prices[i-1]);
            }
        }
        return profit;
    }
    
};

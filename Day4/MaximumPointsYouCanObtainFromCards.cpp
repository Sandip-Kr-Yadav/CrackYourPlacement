//https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k)
    {
        int n=cardPoints.size();
        int winSum=0;
        for(int i=n-k;i<n;i++)
            winSum+=cardPoints[i];
        int curSum=winSum;
        for(int i=n-k,j=0;k>0;k--)
        {
            curSum=(curSum-cardPoints[i])+cardPoints[j];
            winSum=max(curSum,winSum);
            i=(i+1)%n;
            j++;
        }
        return winSum;
    }
};
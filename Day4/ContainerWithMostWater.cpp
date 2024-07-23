//https://leetcode.com/problems/container-with-most-water/description/

class Solution {
public:
    int maxArea(vector<int>& h)
    { 
        int n=h.size();
        int i=0,j=n-1;
        int ar=0,mar=0;
        while(i<=j)
        {
            if(h[i]<h[j])
            {
                ar=(j-i)*min(h[i],h[j]);
                mar=max(ar,mar);
                i++;
                continue;
            }
            else
            {
                ar=(j-i)*min(h[i],h[j]);
                mar=max(ar,mar);
                j--;
                continue;
            }
        }
        return mar;
    }
};
//https://leetcode.com/problems/find-the-duplicate-number/description/

class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int n=nums.size(),i;
        vector<int> v(n,0);
        for(i=0;i<n;i++)
        {
            if(v[nums[i]]==0)
            {
                v[nums[i]]=1;
            }
            else
            return nums[i];
        }   
        return nums[i-1];
    }
};
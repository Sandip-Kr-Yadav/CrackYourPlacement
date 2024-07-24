//https://leetcode.com/problems/3sum/description/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> vv;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int j=i+1,k=n-1;
            while(j<k)
            {
                int sum=nums[i];
                sum+=nums[j];
                sum+=nums[k];
                if(j>i+1 && nums[j]==nums[j-1])
                {
                    j++;
                    continue;
                }
                if(k<n-1 && nums[k]==nums[k+1])
                {
                    k--;
                    continue;
                }
                if(sum>0)
                {k--;}
                else if(sum<0)
                    {j++;}
                else{
                    vv.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
            }    
        }
        return vv;
    }
};
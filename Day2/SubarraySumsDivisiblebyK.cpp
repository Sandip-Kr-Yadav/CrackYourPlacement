//https://leetcode.com/problems/subarray-sums-divisible-by-k/description/

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0;
        int presum=0;
        unordered_map<int,int> m;
        m[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            presum+=nums[i];
            int mode=presum % k;
            if(mode<0)
                mode+=k;
            count+=m[mode];
            m[mode]+=1;
        }
        return count;
    }
};
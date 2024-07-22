//https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            int x=abs(nums[i])-1;
            nums[x]*=-1;
            if(nums[x]>0)
                v.push_back(abs(nums[i]));
        }
        return v;
    }
};
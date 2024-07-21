//https://leetcode.com/problems/majority-element/description/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cur=nums[0],count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(cur==nums[i])
                count++;
            else{
                count--;
                if(count==0)
                {
                    cur=nums[i];
                    count++;
                }
            }
        }
        return cur;
    }
};
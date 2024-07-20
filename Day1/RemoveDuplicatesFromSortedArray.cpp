//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int i=1,j=0;i<nums.size();i++,j++)
        {
           if(nums[j]==nums[i])
           {
            nums[j]=INT_MAX;
            count++;
           }
        }
        sort(nums.begin(),nums.end());
        return nums.size()-count;
    }
};
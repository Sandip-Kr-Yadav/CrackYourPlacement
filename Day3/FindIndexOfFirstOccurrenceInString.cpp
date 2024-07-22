//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

class Solution {
public:
    int strStr(string haystack, string needle)
    {
        int s1=haystack.length(),s2=needle.length();
        if(s1==s2 && haystack.compare(needle)==0)
         return 0;
        for(int i=0;i<s1;i++)
        {
            if(haystack.compare(i,s2,needle)==0)
                return i;
        }
        return -1;
    }
};
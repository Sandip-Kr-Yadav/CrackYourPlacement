//https://leetcode.com/problems/valid-palindrome-ii/description/

class Solution {
public:
    bool again(string s,int l,int r)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        while(l<r)
        {
            if(s[l]!=s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        bool ans=true;
        int j=s.length()-1;
        for(int i=0;i<j;i++)
        {
            if(s[i]!=s[j])
            {
                ans=again(s,i+1,j);
                if(!ans)
                    ans=again(s,i,j-1);
                break;
            }
            j--;
        }
        return ans;
        
    }
};
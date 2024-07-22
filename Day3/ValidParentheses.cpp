//https://leetcode.com/problems/valid-parentheses/description/

class Solution {
public:
    bool isValid(string s)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==']')
            {
                if(st.empty() || st.top()!='[')
                    return false; 
                st.pop();
            }
            else if(s[i]==')')
            {
                if(st.empty() || st.top()!='(')
                    return false;
                st.pop();
            }
            else if(s[i]=='}' )
            {
                if(st.empty() || st.top()!='{')
                    return false;
                st.pop();
            }
            else
                st.push(s[i]);
        }
        if(st.empty())
            return true;
        return false;
    }
};
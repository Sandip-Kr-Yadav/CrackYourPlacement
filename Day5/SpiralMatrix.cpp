// https://leetcode.com/problems/spiral-matrix/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        int top=0,bottom=matrix.size()-1,left=0,right=matrix[0].size()-1;
        vector<int> v;
        while(top<=bottom && left<=right)
        {
            for(int j=left;j<=right;j++)
            {
                v.push_back(matrix[top][j]);
            }
            top++;
            for(int j=top;j<=bottom;j++)
            {
                v.push_back(matrix[j][right]);
            }
            right--;
            if(top<=bottom)
            {
                for(int j=right;j>=left;j--)
                {
                    v.push_back(matrix[bottom][j]);
                }
            bottom--;
            }
            if(left<=right)
            {
                for(int j=bottom;j>=top;j--)
                {
                    v.push_back(matrix[j][left]);
                }
                left++;
            }
        }
        return v;
    }
};
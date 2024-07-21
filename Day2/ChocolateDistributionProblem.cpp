//https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
        long long diff=LLONG_MAX;
        for(int j=0, i=m-1;i<n;i++,j++)
        {
            diff=min(diff,a[i]-a[j]);
        }
        return diff;
    }   
};
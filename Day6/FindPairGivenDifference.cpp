//https://www.geeksforgeeks.org/problems/find-pair-given-difference1559/1

class Solution {
    public int findPair(int n, int x, int[] arr) {
        // code here
        Arrays.sort(arr);
        
        for(int i = 0; i < n; i++) {
            int left = i+1;
            int right = n-1;
            
            int target = x + arr[i];
            
            while(left <= right) {
                int mid = (left+right)/2;
                
                if(target > arr[mid]) {
                    left = mid + 1;
                } else if(target < arr[mid]) {
                    right = mid - 1;
                } else {
                    return 1;
                }
            }
        }
        
        return -1;
    }
}
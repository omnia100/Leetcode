class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int tmp;
        k = k % n;
        
        for (int i = 0; i<n/2; i++)
        {
            tmp = nums[i];
            nums[i] = nums[n-i-1];
            nums[n-i-1] = tmp;
        }
        
        for (int i = 0; i<k/2; i++)
        {
            tmp = nums[i];
            nums[i] = nums[k-i-1];
            nums[k-i-1] = tmp;
        }
        
        for (int i = 0; i<(n-k)/2; i++)
        {
            tmp = nums[i+k];
            nums[i+k] = nums[n-i-1];
            nums[n-i-1] = tmp;
        }
        
    }
};
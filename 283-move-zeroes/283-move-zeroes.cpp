class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int to = 0;
        int from = 0;
        int cnt = 0;
        int n = nums.size();
        while(from != n){
            if(nums[from] != 0) {
                nums[to] = nums[from];
                to++;
            }
            else cnt++;
            from++;
        }
        while(cnt>0){
            nums[n-cnt]=0;
            cnt--;
        }
    }
};
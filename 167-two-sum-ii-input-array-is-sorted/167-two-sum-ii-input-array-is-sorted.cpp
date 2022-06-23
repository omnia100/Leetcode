class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int>mp;
        int n = numbers.size();
        
        for(int i = 0; i<n; i++){
            
            if(mp.count(target-numbers[i]))
            {
                return{mp[target-numbers[i]]+1, i+1};
            }
            mp[numbers[i]] = i;
        
        }
        return {};
    }
};
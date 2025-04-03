class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapss;
        
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            
            
            if (mapss.find(diff) != mapss.end()) {
                return {mapss[diff], i}; 
            }

           
            mapss[nums[i]] = i;
        }

        return {};  
    }
};

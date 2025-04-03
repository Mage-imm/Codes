class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> mapss;
        for(int i = 0;i<nums.size();i++)
        {
            mapss[nums[i]] = true;
        }
        vector<int> countt(nums.size(), 0);
        int i = 0;
        int maxStreak = 0;
        int j = 0;
       while (i < nums.size()) {
            int currentNum = nums[i];

            
            if (!mapss.count(currentNum - 1)) {
                int count = 0;

                while (mapss.count(currentNum)) { 
                    count++;  
                    mapss.erase(currentNum); 
                    currentNum++;  
                }

                maxStreak = std::max(maxStreak, count);
            }

            i++;  
        }

        return maxStreak;
    }        
};

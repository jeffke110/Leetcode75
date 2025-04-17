class Solution {
    public:
        int longestSubarray(vector<int>& nums) {
            int trailing = 0;
            int maxOnes = 0;
            int kCount = 0;
    
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == 0){
                    kCount++;
                }
                while(kCount > 1){
                    if(nums[trailing] == 0){
                        kCount--;
                    }
                    trailing++;
                }
                maxOnes = std::max(maxOnes, i - trailing);
            }
            return maxOnes;
        }
    };
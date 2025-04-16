class Solution {
    public:
        int longestOnes(vector<int>& nums, int k) {
            int trailing = 0;
            int kCount = 0;
            int max = 0;
    
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == 0){ kCount++; }
                while(kCount > k){
                    if(nums[trailing] == 0){
                        kCount--;
                    }
                    trailing++;
                }
                int currentCount = (i - trailing + 1);
                max = std::max(max, currentCount);
            }
            return max;
        }
    };
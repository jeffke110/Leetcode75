class Solution {
    public:
        double findMaxAverage(vector<int>& nums, int k) {
            double maxValue = 0;
            double currentSum = 0;
            for(int i = 0; i < k; i++){
                currentSum += nums[i];
            }
            maxValue = currentSum / k;
    
            for(int i = k; i < nums.size(); i++){
                currentSum -= nums[i - k];
                currentSum += nums[i];
                maxValue = std::max(currentSum / k, maxValue);
            }
    
            return maxValue;
    
        }
    };
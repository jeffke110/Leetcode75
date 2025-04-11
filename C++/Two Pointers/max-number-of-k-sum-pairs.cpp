class Solution {
    public:
        int maxOperations(vector<int>& nums, int k) {
            std::unordered_map<int, int> sumMap;
            int maxOperationCount = 0;
    
            for(int num : nums){
                if(sumMap[num] != 0){
                   maxOperationCount++;
                   sumMap[num]--;
                }else{
                    sumMap[k - num]++;
                }
            }
            return maxOperationCount;
        }
    };
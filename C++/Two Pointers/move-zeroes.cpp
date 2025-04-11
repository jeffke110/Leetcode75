class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int movePos = 0;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] != 0){
                    nums[movePos++] = nums[i];
                }
            }
            for(int i = movePos; i < nums.size(); i++){
                nums[movePos++] = 0;
            }
        }
    };
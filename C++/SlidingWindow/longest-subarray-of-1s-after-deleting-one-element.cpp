#include <iostream>
#include <vector>


class Solution {
public:
    int longestSubarray(std::vector<int>& nums) {
        int trailing = 0;
        int zeroCheck = 0;
        int max = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                zeroCheck++;
            }
            while(zeroCheck > 1){
                if(nums[trailing] == 0){
                    zeroCheck--;
                }
                trailing++;
            }
            max = std::max(max, i - trailing);

        }

        return max;
    }
};

int main(){
    Solution test;
    std::vector<int> numVec = {0,1,1,1,0,1,1,0,1};
    std::cout << test.longestSubarray(numVec) << std::endl;

}
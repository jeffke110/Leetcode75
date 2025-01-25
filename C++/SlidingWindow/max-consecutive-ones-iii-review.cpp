
#include <iostream>
#include <vector>
#include <algorithm>



class Solution {
public:
    int longestOnes(std::vector<int>& nums, int k) {
        int trailing = 0;
        int max = 0;
        int zeroCount = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                zeroCount++;
            }

            while(zeroCount > k){
                if(nums[trailing] == 0){
                    zeroCount--;
                }
                trailing++;
            }
            max = std::max(max, i - trailing + 1);
        }
        return max;

    }

};

int main(){
    Solution test;
    std::vector<int> numVec = {1, 1, 1, 1, 0, 0, 0, 0, 1, 1};
    std::cout << test.longestOnes(numVec, 2) << std::endl;

    return 0;
}
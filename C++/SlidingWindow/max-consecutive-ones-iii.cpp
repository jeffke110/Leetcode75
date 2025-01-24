#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
    int longestOnes(std::vector<int>& nums, int k) {
        int trailing = 0;
        int kCount = 0;
        int max = 0;
        for(size_t i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                kCount++;
            }
            while(kCount > k){
                if(nums[trailing] == 0){
                    kCount--;
                }
                trailing++;
            }
            int output = (i - trailing + 1);
            max = std::max(max, output);

        }
        return max;
    }
};

int main(){
    Solution test;
    std::vector<int> input = {1,1,1,1,0,0};
    std::cout << test.longestOnes(input, 3) << std::endl;
    return 0;
}

struct hell {

    void hello(){

    }
};
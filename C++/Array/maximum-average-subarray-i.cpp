#include <iostream>
#include <vector>
#include <climits>

class Solution {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
        double currentSum = 0;
        for(int i = 0; i < k; i++){   //first k 
            currentSum += nums[i];
        }
        double max = currentSum;
        int trailing = 0;
        for(long unsigned int i = k; i < nums.size(); i++){
            currentSum -= (nums[trailing]);
            currentSum += (nums[i]);
            if(currentSum > max){
                max = currentSum;
            }
            trailing++;
        }
        return max / k;
    }
};

int main(){
    Solution test;
    std::vector<int> numsVector= {1,2,3,4};
    std::cout << test.findMaxAverage(numsVector, 2) << std::endl;
}
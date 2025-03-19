#include <iostream>
#include <string>
#include <vector>
#include <sstream>

//product-of-array-except-self

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> output(n, 1);
        //Left Product Calulation

        int leftProduct = 1;
        for (int i = 0; i <n; i++) {
            output[i] *= leftProduct;
            leftProduct *= nums[i];
        }
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; --i) {
            output[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return output;

    }
};
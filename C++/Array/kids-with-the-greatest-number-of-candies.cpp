#include <iostream>
#include <vector>
#include <algorithm>

//kids-with-the-greatest-number-of-candies

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);  
}

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        int maxCandies = *std::max_element(candies.begin(), candies.end());
        std::vector<bool> output;
        for (const auto& candy : candies) {
            if (candy + extraCandies >= maxCandies) {
                output.push_back(true);
            }
            else {
                output.push_back(false);
            }
        }
        return output;
    }
};
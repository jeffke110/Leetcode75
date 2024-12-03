#include <iostream>
#include <vector>
#include <algorithm>

/*
There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.
*/

class Solution {

public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies){
        std::vector<bool> output;
        auto max_iter = std::max_element(candies.begin(), candies.end());
        int max_int = *max_iter;
        for(const auto element : candies){
            if(element + extraCandies >= max_int){
                output.push_back(true);
            }else{
                output.push_back(false);
            }
        }
        return output;
    }
};

int main(){
    Solution testObject;
    std::vector<int> int_vector{3,4,5,6};
    std::vector<bool> output = testObject.kidsWithCandies(int_vector, 2);
    for(const auto element : output){ //false, true, true, true
        std::cout << element << std::endl;
    }
}
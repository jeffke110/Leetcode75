#include <iostream>
#include <vector>

/*
You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

Example 1:

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true
Example 2:

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false
 

*/

class Solution{
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        int last_element = flowerbed.size() - 1;
        int index = 0;

        while(index < flowerbed.size()){
            if(flowerbed[index] == 0){
                bool checkLeft = (index == 0) || (flowerbed[index-1] == 0);
                bool checkRight = (index == last_element) || (flowerbed[index+1] == 0);
                if(checkLeft && checkRight){
                    n--;
                    flowerbed[index] = 1;
                }
            }
            index++;
        }
        return n<=0;
}
};

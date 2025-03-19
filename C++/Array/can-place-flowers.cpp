#include <iostream>
#include <vector>

//can-place-flowers

class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        int newFlowers = n;
        for (size_t i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0) {
                if ((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
                    flowerbed[i] = 1;
                    newFlowers--;
                }
            }
        }
        return newFlowers <= 0;
    }
};
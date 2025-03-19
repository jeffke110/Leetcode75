#include <iostream>
#include <string>
#include <unordered_set>

//reverse-vowels-of-a-string

class Solution {
public:
    std::string reverseVowels(std::string s) {
        std::unordered_set<char> vowels{ 'a', 'e', 'i', 'o', 'u',
                                       'A', 'E', 'I', 'O', 'U' };
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            while (left < right && vowels.find(s[left]) == vowels.end()) {
                left++;
                std::cout << "left" << std::endl;
            }
            while (right > left && vowels.find(s[right]) == vowels.end()) {
                right--;
                std::cout << "right" << std::endl;
            }
            if (left < right) {
                std::swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};
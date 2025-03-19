#include <iostream>
#include <string>

//Merge Strings Alternatively
class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {

        std::string output;
        int index = 0;
        int maxLength = std::max(word1.size(), word2.size());
        while (index < maxLength) {
            if (index < word1.size()) {
                output.push_back(word1[index]);
            }
            if (index < word2.size()) {
                output.push_back(word2[index]);
            }
            index++;
        }
        return output;
    }
};
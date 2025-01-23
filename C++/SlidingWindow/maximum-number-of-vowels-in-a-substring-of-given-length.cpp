#include <iostream>
#include <string>
#include <unordered_set>
class Solution {
public:
    int maxVowels(std::string s, int k) {
        std::unordered_set<char> vowelSet = {'a', 'e', 'i', 'o', 'u'};
        int currentVowelCount = 0;
        for(int i = 0; i < k; i ++){
            if(vowelSet.find(s[i]) != vowelSet.end()){
                currentVowelCount++;
            }
        }
        int max = currentVowelCount;
        int trailing = 0;
        for(unsigned long int i = k; i < s.size(); i++){
            if(vowelSet.find(s[trailing]) != vowelSet.end()){
                currentVowelCount--;
            }
            if(vowelSet.find(s[i]) != vowelSet.end()){
                currentVowelCount++;
            }
            if(currentVowelCount > max){
                max = currentVowelCount;
            }
            trailing++;
        }
        return max;
    }
};

int main(){
    Solution test;
    std::cout << test.maxVowels("hello", 2) << std::endl;
}
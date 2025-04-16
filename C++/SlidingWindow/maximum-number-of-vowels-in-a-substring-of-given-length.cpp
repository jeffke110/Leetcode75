class Solution {
    public:
        int maxVowels(string s, int k) {
            std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
            int currenVowelCount = 0;
            int maxVowelCount = 0;
            for(int i = 0; i < k; i++){
                if(vowels.count(s[i])){
                    currenVowelCount++;
                }
            }
            maxVowelCount = currenVowelCount;
        
            for(int i = k; i < s.size(); i++){
                if(vowels.count(s[i-k])){
                    currenVowelCount--;
                }          
                if(vowels.count(s[i])){
                    currenVowelCount++;
                }
                maxVowelCount = std::max(maxVowelCount, currenVowelCount);
            }
            return maxVowelCount;
        }
    };
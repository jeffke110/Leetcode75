class Solution {
    public:
        bool closeStrings(string word1, string word2) {
            if (word1.size() != word2.size()) return false;
    
            unordered_map<char, int> freq1, freq2;
    
            for (char c : word1) freq1[c]++;
            for (char c : word2) freq2[c]++;
    
            unordered_set<char> chars1, chars2;
            vector<int> counts1, counts2;
    
            for (const auto& [ch, count] : freq1) {
                chars1.insert(ch);
                counts1.push_back(count);
            }
    
            for (const auto& [ch, count] : freq2) {
                chars2.insert(ch);
                counts2.push_back(count);
            }
    
            sort(counts1.begin(), counts1.end());
            sort(counts2.begin(), counts2.end());
    
            return chars1 == chars2 && counts1 == counts2;
        }
    };
    
class Solution {
    public:
        bool isSubsequence(string s, string t) {
            int subPos = 0;
            for(int i = 0; i < t.size(); i++){
                if(s[subPos] == t[i]){
                    subPos++;
                }
            }
    
            return subPos == s.size();
    
        }
    };
class Solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) {
            std::unordered_map<int, int> occuranceMap;
            for(int num : arr){
                occuranceMap[num]++;
            }
            std::unordered_set<int> occuranceSet;
            for(auto [ key, value ] : occuranceMap){
                if(occuranceSet.count(value)){
                    return false;
                }else{
                    occuranceSet.insert(value);
                }
            }
            return true;
        }
    };
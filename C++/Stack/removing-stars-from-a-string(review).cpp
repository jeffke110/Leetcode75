#include <iostream>
#include <string>
#include <stack>
/*
Input: s = "leet**cod*e"
Output: "lecoe"
*/
class Solution {
public:
    std::string removeStars(std::string s) {
        std::stack<char> charStack;
        for(const auto& c : s){
            if(!charStack.empty() && c == '*'){
                charStack.pop();
            }else{
                charStack.push(c);
            }
        }
        std::string output;
        while(!charStack.empty()){
            output.insert(output.begin(), charStack.top());
            charStack.pop();
        }  
        return output;

    }
};
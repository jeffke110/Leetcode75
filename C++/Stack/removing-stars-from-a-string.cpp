#include <iostream>
#include <string>
#include <stack>

class Solution {
public:
    std::string removeStars(std::string s) {
        std::stack<char> characterStack;
        for(const auto& character : s){
            if(character != '*'){
                characterStack.push(character);
            }else if(character == '*'){
                characterStack.pop();
            }
        }
        std::string output;
        while(!characterStack.empty()){
            output.insert(output.begin(), characterStack.top());
            characterStack.pop();
        }
        return output;
    }
};
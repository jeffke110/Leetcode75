#include <iostream>
#include <vector>
#include <stack>

class Solution {
public:
    std::vector<int> asteroidCollision(std::vector<int>& asteroids) {
        std::stack<int> asteroidStack;
        for(const auto& asteroid : asteroids){
            bool destroyed = false;

            while(!asteroidStack.empty() && asteroid < 0 && asteroidStack.top() > 0){
                if(asteroidStack.top() < -asteroid){
                    asteroidStack.pop();
                    continue;
                }else if(asteroidStack.top() == -asteroid){
                    asteroidStack.pop();
                }
                destroyed = true;
                break;
            }

            if(!destroyed){
                asteroidStack.push(asteroid);
            }
        }


        std::vector<int> outputVector;
        while(!asteroidStack.empty()){
            outputVector.insert(outputVector.begin(), asteroidStack.top());
            asteroidStack.pop();
        }
        return outputVector;
    }
};
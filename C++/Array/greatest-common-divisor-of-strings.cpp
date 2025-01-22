#include <iostream>
#include <string>

/*
1071. Greatest Common Divisor of Strings
For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).
Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.
*/

class Solution {
    public:
    int gcdfunction(int one, int two){
        while(two != 0){
            int remainder = one % two;
            one = two;
            two = remainder;
        }
        return one;
    }
    std::string gcdOfStrings(std::string str1, std::string str2){
        if(str1 + str2 != str2 + str1){
            return "";
        }
        int length = gcdfunction(str1.size(), str2.size());
        return str1.substr(0, length);
    }
};
int main(){
    Solution test;
    std::string testOne = "ABABAB";
    std::string tesTwo = "ABAB";
    std::cout << test.gcdfunction(8, 6) << std::endl; //return 2
    std::cout << test.gcdOfStrings(testOne, tesTwo) << std::endl; //return "AB"

}
//https://www.youtube.com/watch?v=9FLRHejWAo8
/*
⠀⠀⠀⠀⠀⠀⢀⣠⣴⣶⣾⣿⣿⠿⠓⠒⠒⠒⠒⠤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢀⣤⣾⣿⣿⣿⣿⡿⠋⠀⣀⡀⠀⠀⠀⠀⠀⣀⣉⠢⡀⠀⠀⠀⠀⠀⠀
⠀⢀⣴⣿⣿⣿⣿⣿⣿⠏⠀⣰⣿⣿⣿⣿⣦⡀⠀⣾⣿⣿⣷⡜⢆⠀⠀⠀⠀⠀
⣠⣿⣿⣿⣿⣿⣿⣿⡏⠀⢰⣿⣿⣿⣿⣿⣿⣷⡀⣿⣿⣿⣿⣿⡌⣆⠀⠀⠀⠀
⠙⠻⠿⢿⣿⣿⣿⣿⠁⠀⢸⣿⣿⣿⣿⣿⣿⣿⣇⢹⣿⣿⣿⣿⣷⠸⣄⣠⣤⡀
⠀⠀⠀⠀⣿⣿⣿⡿⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⡿⠀⢻⣿⣿⣿⣿⠀⣿⣿⣿⣷
⠀⠀⠀⠀⣿⣿⣿⣇⠀⠀⠀⠘⢿⣿⣿⣿⣿⣿⠇⠀⠀⠙⠿⠿⠋⠀⣿⣿⣿⣿
⠀⠀⠀⢸⣿⣿⣿⣿⠀⠀⠀⠀⠈⠙⠻⠿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡏
⠀⠀⠀⢻⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣄⠀⠀⠀⢀⣿⣿⡟⠀
⠀⠀⠀⣨⣿⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀⠀⠀⣼⣿⠏⠀⠀
⢀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠁⠀⢀⣼⣿⣿⠀⠀⠀
⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣀⡀⠀⠀⠀⠀⣀⣠⣴⣿⣿⣿⣿⠀⠀⠀
⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀
⠀⠈⠉⠉⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠉⠁⠀⠈⢹⣿⣿⣿⣿⣄⠀⠀
⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣤⣤⣶⣿⣿⣿⣿⣿⣿⠇⠀
⠀⠀⣠⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣄⠀
⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇
⠀⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠉⠉⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇
⠀⠀⠙⠻⠿⣿⣿⣿⣿⠿⠿⠟⠛⠁⠀⠀⠀⠀⠀⠉⠛⠿⠿⣿⣿⣿⡿⠿⠛⠀

*/
#include<iostream>
#include<string>
#include<vector>

/*
1768. Merge Strings Alternately
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, 
starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.
Return the merged string.
*/

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2){
        int maxWordSize = std::max(word1.size(), word2.size());
        std::string output;
        int i = 0;
        while(i < maxWordSize){
            if(i < word1.size()){
                output.push_back(word1[i]);
            }
            if(i < word2.size()){
                output.push_back(word2[i]);
            }
            i++;
        }
        return output;
    }
};
int main(){
    std::string testStringOne = "hello";
    std::string testStringTwo = "coding";
    Solution test = Solution();
    std::string testOutput = test.mergeAlternately(testStringOne, testStringTwo);
    //should be "hceoldliong"
    std::cout << testOutput << std::endl;
    //https://www.youtube.com/watch?v=Oc7Cin_87H4
    /*
    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣶⡾⠿⠿⠿⢿⣶⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣶⡿⠛⠉⠀⠀⠀⡀⠀⠀⡈⠙⢿⣆⠀⠀⠀⠀⣠⣤⣤⣄⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⠟⠁⠀⠀⠀⠀⡐⠁⡀⠀⣤⠀⠑⡌⣿⡆⢀⣤⣾⣿⣋⠙⠻⣿⣶⣦⣤⡀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡿⠋⠀⠀⠀⠀⠀⠀⠁⠀⣿⢾⠟⣷⠀⢸⣸⣿⣿⣯⣥⣀⣉⡙⣦⠀⠀⠈⠛⣿⣆⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⡟⠁⠀⠀⠀⠀⠀⠀⠀⢆⠀⢛⡠⠤⠚⠚⠉⠉⠉⠁⠀⠉⣉⣉⣛⣿⡄⠀⠀⠀⠘⣿⡄⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⡟⠀⠀⠀⠀⠀⠀⠀⢀⣤⠞⠋⠁⠀⠀⠀⠀⢀⣠⣴⣶⣿⣿⣿⣿⣿⠿⠷⠤⠤⠀⢠⣿⠃⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡿⠀⠀⠀⠀⠀⠀⣠⠞⠉⠀⠀⠀⠀⠀⣠⠴⠚⠉⢉⠹⣿⡿⠿⠛⠉⠀⠀⠀⠀⠀⢀⣾⡟⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣠⣤⣿⠁⠀⠀⠀⠀⣠⠞⠁⠀⠀⢀⣠⠤⢒⠉⠀⠀⠀⠀⣿⣧⣸⣇⣀⣀⡀⠀⠀⠤⠤⣴⣿⠟⠁⠀⠀
⠀⠀⠀⠀⠀⢠⣾⠟⠉⡝⠀⠀⠀⢀⣼⣷⠖⠒⠒⠋⠉⠀⠀⣿⣷⠀⠀⠀⠀⡹⠛⠉⠉⠉⠙⠻⢷⣄⣀⣠⣿⡇⠀⠀⠀⠀
⠀⠀⠀⠀⢠⣿⠃⠀⠀⠀⠀⠀⢀⣾⣿⣿⣆⠀⠀⠀⠀⠀⠀⠹⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⠟⠋⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠸⣿⠀⢀⣤⠖⠒⠒⠚⢿⣿⣿⣿⣶⣤⠀⠀⢀⡀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠻⣷⡟⠁⠀⠠⢄⡀⠈⠻⣿⣿⣿⠟⠀⠀⣾⣿⣷⣦⣄⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⣠⣿⠏⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣿⡀⠀⠀⠀⠀⠻⡄⠀⠈⠙⠋⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣷⣦⣤⣤⣤⣶⣾⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢹⣧⡀⠀⠀⠀⠐⠁⠀⠀⠀⠀⠀⠀⠀⠀⠈⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠙⢿⣦⣤⣄⣀⣤⣤⣤⡀⠀⠀⠀⠀⠀⠀⠀⡟⠻⠟⠛⢿⡿⣿⠟⢩⣿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣙⣿⣿⣿⣿⣿⣿⣦⣄⡀⠀⠀⠀⠀⣇⠀⣀⡴⢋⡴⢋⣴⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣠⣶⡿⠛⠉⠁⠀⠀⠀⠀⢈⣿⠻⣶⢦⣤⣤⣨⣭⡥⢶⡻⣷⣿⠏⠀⠀⠀⢀⣀⣤⣤⣤⣤⣀⠀⠀⠀⠀
⠀⠀⠀⢠⣶⡿⠿⠿⠷⢤⣀⠀⠀⠀⣀⣤⠖⠋⠁⠀⢹⠀⠀⠀⠳⡄⢀⣀⣱⡌⠻⣿⣶⣤⣴⣿⠟⠋⠉⠙⠛⢿⣷⣄⠀⠀
⠀⢀⣤⣿⠟⠀⠀⠀⠀⠀⠈⠑⢦⣾⠟⠁⠀⠀⠀⠀⢸⠀⠀⣠⠤⠬⢍⡁⠀⠀⠀⣟⠙⢿⣿⠃⠀⠀⠀⠀⠀⠀⢻⢿⣿⡄
⢀⣾⠏⠀⢀⠀⠀⠀⠀⠀⠀⠀⣸⡏⠀⠀⠀⠀⠀⣠⠏⠀⣸⠃⠀⠀⠀⢱⠀⠀⠀⢻⡀⢸⣿⠀⠀⠀⠀⠀⠀⠀⡞⢀⣿⡿
⣼⡏⠀⢰⡏⠀⣠⡆⠀⠀⠀⠀⠘⡏⠲⠦⠤⠴⠚⠁⠀⠀⠸⡄⠀⠀⠀⡸⠀⠀⠀⠀⠱⣾⡿⠀⠀⠀⠀⠀⠀⡸⠁⣼⣿⠃
⢿⡇⠀⠈⠀⠀⠟⠀⠀⠀⡀⠀⠀⣿⣄⣀⠀⠀⠀⠀⠀⠀⠀⠉⠓⠒⠋⠀⠀⠀⠀⠀⢰⣿⠃⠀⠀⠀⠀⠀⢰⢁⣾⡿⠃⠀
⠘⣿⣄⠀⠀⠀⠀⠀⠀⣰⣥⣤⡾⠟⠛⠻⣷⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⡟⠀⠀⠀⠀⠀⠠⢃⣿⡿⠃⠀⠀
⠀⠈⠻⢿⣦⣄⣀⣀⣀⣠⡾⠋⠀⠀⠀⢰⠏⠙⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⢿⣿⣦⣀⣀⣀⣴⢁⣼⣿⠃⠀⠀⠀
⠀⠀⠀⠀⠈⠉⢻⣿⠏⡟⠀⠀⠀⠀⠀⡜⠀⠀⣿⣇⣀⠀⠀⢀⣀⣀⣤⣴⣾⡿⠋⠁⠀⠈⠛⠛⠛⠻⠿⣿⡿⠃⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣾⡏⢀⠇⠀⠀⠀⠀⠀⠃⠀⢸⣿⡟⠛⠿⠿⠟⠛⠛⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢰⣿⠀⢸⠀⠀⠀⠀⠀⠀⠀⣠⣾⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢸⣿⡀⣾⠀⠀⠀⠀⠀⠀⠀⣿⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠈⠻⣷⣿⣦⠀⠀⠀⠀⢀⣴⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠿⢷⣶⡾⠿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
    */
}


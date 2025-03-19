
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

//reverse-words-in-a-string

class Solution {
public:
   std::string reverseWords(std::string s) {

	   std::vector<std::string> words;
	   std::istringstream iss(s);
	   std::string word;

	   while (iss >> word) {
		   words.push_back(std::move(word));
	   }

	   std::reverse(words.begin(), words.end());
	   std::string output;

	   std::ostringstream oss;

	   for (size_t i = 0; i < words.size(); i++) {
		   if (i > 0) oss << " ";
		   oss << words[i];
	   }
	   return oss.str();
   }
};
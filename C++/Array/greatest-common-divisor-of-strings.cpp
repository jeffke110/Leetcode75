
#include <iostream>
#include <string>

//greatest-common-divisor-of-strings

/*
Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"
*/


int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);  
}
class Solution {
public:
    std::string gcdOfStrings(std::string str1, std::string str2) {
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        int gcdIndex = gcd(str1.size(), str2.size());
        return str1.substr(0, gcdIndex);
    }
};
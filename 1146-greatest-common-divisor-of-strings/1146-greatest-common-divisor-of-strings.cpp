class Solution {
public:
// GCD approach :
      string gcdOfStrings(string str1, string str2) {
        // Checking if they have non-zero GCD string.
        if(str1 + str2 != str2 + str1) return "";

        // Now getting the GCD of the two lengths & returning that substr 
        int gcdLength = gcd(str1.size(), str2.size()); // gcd is an inbuilt function.
        return str1.substr(0, gcdLength);
      }
};
// This is Brute Force approach :
    // bool valid(string str1, string str2, int k) {
    //     int len1 = str1.size(), len2 = str2.size();
    //     if (len1 % k > 0 || len2 % k > 0) {
    //         return false;
    //     } else {
    //         string base = str1.substr(0, k);
    //         int n1 = len1 / k, n2 = len2 / k;
    //         return str1 == joinWords(base, n1) && str2 == joinWords(base, n2);
    //     }
    // }
    // string joinWords(string str, int k) {
    //     string ans = "";
    //     for (int i = 0; i < k; ++i) {
    //         ans += str;
    //     }
    //     return ans;
    // }
    // string gcdOfStrings(string str1, string str2) {
    //     int len1 = str1.length(), len2 = str2.length();
    //     for(int i = min(len1, len2); i >= 1; --i) {
    //         if(valid(str1, str2, i)) {
    //             return str1.substr(0, i);
    //         }
    //     }
    //     return "";
    // }
// };
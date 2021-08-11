#include <unordered_set>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_set<char> map;
        int leftIndex = 0;
        int result = 0;
        
        for (int rightIndex = 0; rightIndex < s.size(); ++rightIndex) {
            while (map.find(s[rightIndex]) != map.end()) {
                map.erase(s[leftIndex]);
                leftIndex += 1;
            }
            map.insert(s[rightIndex]);
            result = std::max(result, rightIndex - leftIndex + 1);
        }
        
        return result;
    }
};

#include <limits>

class Solution {
public:
    bool isPalindrome(int x) {
        int answer = 0;
        int copy = x;

        if (x < 0) {
            return false;
        }
        while (x != 0) {
            if (answer > std::numeric_limits<int>::max() / 10 || answer < std::numeric_limits<int>::min() / 10) {
                return 0;
            }
            answer = answer * 10 + x % 10;
            x = x / 10;
        }
        
        return answer == copy;
    }
};
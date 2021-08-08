#include <unordered_map>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> registered;
        int missing = 0;
        int index = 0;
        
        for (const auto& number : nums) {
            missing = target - number;
            if (auto it = registered.find(missing); it != registered.end()) {
                return {index, it->second};
            }
            registered.insert(std::make_pair(number, index));
            missing = 0;
            ++index;
        }
        
        return {};
    }
};

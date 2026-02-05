#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int value = target-nums[i];
            if (map.contains(value))
                return {map[value], i};

            map[nums[i]] = i;
        }
        return {};
    }
};

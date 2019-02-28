// O(n)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> lookup;
        for (int i = 0; i < nums.size(); ++i) {
            if (lookup.count(target - nums[i])) {
                return {lookup[target - nums[i]], i};
            }
            lookup[nums[i]] = i;
        }
        return {};
    }
};

//或者

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> record;

        for (int i = 0; i < nums.size(); ++i) {
            auto item = record.find(target - nums[i]);
            if (item != record.end()) {
                return {item->second, i};
            }

            record[nums[i]] = i;
        }
        return {};
    }
};

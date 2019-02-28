// O(n)
//derived from 0001_twosum

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> record;

        for (int i = 0; i < numbers.size(); ++i) {
            auto item = record.find(target - numbers[i]);
            if (item != record.end()){
                return {item->second + 1, i + 1};
            }
            record[numbers[i]] = i;
        }
        return {};
    }
};

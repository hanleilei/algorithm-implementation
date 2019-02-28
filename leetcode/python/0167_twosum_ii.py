# O(n) derived from 0001_twosum.py

class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        d = dict()

        for k, v in enumerate(numbers):
            if target - v in d:
                return [d[target - v] + 1, k + 1]
            d[v] = k

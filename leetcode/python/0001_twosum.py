# o(n)

# best solution in dict

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = dict()
        for k, v in enumerate(nums):
            if target - v in d:
                return [d[target - v], k]
            d[v] = k

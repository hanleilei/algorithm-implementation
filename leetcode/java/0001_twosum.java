// O(n)

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] result = new int[2];
        Map map = new HashMap();

        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(target - nums[i])) {
                result[1] = i;
                result[0] = Integer.valueOf(map.get(target - nums[i]).toString());
                return result;
            }
            map.put(nums[i], i);
        }
        return result;
    }
}

// or less code:

class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(nums[i])) {
                return new int[]{map.get(nums[i]),i};
            } else {
                map.put(target - nums[i],i);
            }
        }
        return null;
    }
}

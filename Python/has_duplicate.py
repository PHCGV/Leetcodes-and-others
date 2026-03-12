from rpds import List
class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        map = {}
        for i in nums:
            if i in map:
                map[i] += 1
                if map[i] == 2:
                    return True
            else: map[i] = 1
        return False
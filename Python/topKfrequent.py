from typing import List
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}

        for num in nums:
            if  num in freq:
                freq[num] += 1
            else: 
                freq[num] = 1
        
        sorted_nums = sorted(freq.items(), key=lambda x: x[1], reverse=True)
        result = []
        for i in range(k):
            result.append(sorted_nums[i][0])
        return result
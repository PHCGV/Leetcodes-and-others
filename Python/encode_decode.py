from typing import List
class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded = ""
        for string in strs:
            encoded +=  str(len(string)) + "#" +  string 
        return encoded

    def decode(self, s: str) -> List[str]:
        decoded = []
        i = 0
        while i < len(s):
            j = i
            while s[j] != "#":
                j += 1
            size = int(s[i:j])

            start = j + 1
            end = start + size

            word = s[start:end]
            decoded.append(word)

            i = end
        return decoded
class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()

        palindrome = "".join(char for char in s if char.isalnum())

        return palindrome == palindrome[::-1]
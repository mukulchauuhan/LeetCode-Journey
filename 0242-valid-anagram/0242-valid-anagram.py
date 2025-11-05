class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # if len(s) != len(t):
        #     return False
        # for ch in s:
        #     if ch in t:
        #         t = t.replace(ch,"", 1)
        #     else:
        #         return False
        # return True

        # Sorting Based
        # return sorted(s) == sorted(t)
        if len(s) != len(t):
            return False
        freq = {}
        for ch in s:
            freq[ch] = freq.get(ch, 0)+1
        for ch in t:
            if ch not in freq:
                return False
            freq[ch] -= 1
            if freq[ch] < 0:
                return False
        return True
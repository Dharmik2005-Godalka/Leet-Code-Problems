class Solution:
    def longestNiceSubstring(self, s: str) -> str:
        n = len(s)
        ans = ""

        for i in range(n):
            chars = set()

            for j in range(i, n):
                chars.add(s[j])

                nice = True

                for ch in chars:
                    if ch.lower() not in chars or ch.upper() not in chars:
                        nice = False
                        break

                if nice and (j - i + 1) > len(ans):
                    ans = s[i:j + 1]

        return ans
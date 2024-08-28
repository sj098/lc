class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        dic = {'(':')', '[':']', '{':'}'}
        if s[0] == ')' or s[0] == ']' or s[0] == '}':
            return False
        for x in s:
            if x in dic.keys():
                stack.append(x)
            elif x in dic.values():
                if not stack or dic[stack.pop()] != x:
                    return False
        return not stack 

       
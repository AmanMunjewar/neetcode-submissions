class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_dic = {}
        t_dic = {}

        for i in s:
            if i in s_dic:
                s_dic[i] += 1
            else:
                s_dic[i] = 0

        for i in t:
            if i in t_dic:
                t_dic[i] += 1
            else:
                t_dic[i] = 0
        
        return s_dic == t_dic
class Solution(object):
    def separateDigits(self, nums):
        l=[]
        r=[]
        for i in nums:
            while i>0:
                r.insert(0,i%10)
                i=i/10
            l=l+r
            r=[]
        return l
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        
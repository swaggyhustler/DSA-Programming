class Solution(object):
    def passThePillow(self, n, time):
        """
        :type n: int
        :type time: int
        :rtype: int
        """
        if (time/(n-1))%2:
            return n-(time%(n-1))
        else:
            return (time%(n-1))+1
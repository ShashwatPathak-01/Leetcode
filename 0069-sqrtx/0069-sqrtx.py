class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """

        if x==0:
            return 0
        low,high=1,x
        while(low<=high):
            mid=(low+high)//2
            num=mid*mid
            if(num>x):
                high=mid-1
            elif num<x:
                low=mid+1
            else:
                return mid

        return high
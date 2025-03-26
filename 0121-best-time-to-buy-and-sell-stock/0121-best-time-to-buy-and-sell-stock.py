class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        max_profit=0
        min_num=prices[0]
        for i in range(1,len(prices),1):
            if(prices[i]<=min_num):
                min_num=prices[i]
            else:
                x=prices[i]-min_num
                max_profit=max(x,max_profit)
        return max_profit
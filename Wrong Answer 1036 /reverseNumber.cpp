class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        sign=False
        if x<0:
            x=abs(x)
            sign=True
        res=0
        while(x!=0):
            digit=x%10
            res=res*10+digit
            x/=10
        if res>=-2**31 and res<=(2**31)-1:
            if(sign):
                return -1*res
            else:
                return res
        else:
            return 0

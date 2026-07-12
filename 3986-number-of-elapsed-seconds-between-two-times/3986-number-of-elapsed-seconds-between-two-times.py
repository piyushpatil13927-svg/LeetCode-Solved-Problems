class Solution(object):
    def secondsBetweenTimes(self, startTime, endTime):
        def to_seconds(t):
            h,m,s = map(int,t.split(":"))
            return h * 3600+m*60+s
        return to_seconds(endTime)-to_seconds(startTime)
        """
        :type startTime: str
        :type endTime: str
        :rtype: int
        """
        
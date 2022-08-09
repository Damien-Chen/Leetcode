class Solution:
    def numFactoredBinaryTrees(self, arr: List[int]) -> int:
       # sort the array in ascending order
       # arr = [2,4,5,10]
        arr.sort() # arr = [2,4,5,10]
        MOD = 10**9 + 7
       # create a dictionary and initialize it
        dp = {}
        for n in arr:
            dp[n] = 1 # dp = {2:1, 4:1, 5:1, 10:1}
    
       # loop through each number
        for i, n in enumerate(arr):
            for j in range(i):
                if not(n % arr[j]) and n // arr[j] in dp:
                    dp[n] += dp[arr[j]] * dp[n // arr[j]]
                    dp[n] %= MOD
        # sum of value in the dp dictionary
        return sum(dp.values()) % MOD
            
    
        
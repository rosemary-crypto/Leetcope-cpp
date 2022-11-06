class Solution {
public:
    std::map<int, int> memo;
    int climbStairs(int n) {
        memo[0] = 1;
        memo[1] = 1;
        if(memo[n]!=0){return memo[n];}
        memo[n] = climbStairs(n-1)+climbStairs(n-2);
        return memo[n];
    }
};

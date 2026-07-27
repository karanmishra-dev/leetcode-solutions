class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int array_sum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        int natural_sum=n*(n+1)/2;
        return natural_sum-array_sum;
    }
};
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        //here we are considering two cases applying normal kadane and taking circular array case 
        //circular max sum=totalsum-minSubarraySum
        //normal kadane as we usually find 
        int normal=nums[0];
        int globalMax=nums[0];
        int minSubarraySum=nums[0];
        int globalMin=nums[0];
        int ans=nums[0];
        int totalSum=nums[0];
        for(int i=1;i<n;i++){
            totalSum+=nums[i];
            normal=max(normal+nums[i],nums[i]);
            globalMax=max(normal,globalMax);
            minSubarraySum=min(minSubarraySum+nums[i],nums[i]);
            globalMin=min(globalMin,minSubarraySum);
        }
        if(globalMax<0) return globalMax;
        ans=max(ans,max(globalMax,totalSum-globalMin));
        return ans;
    }
};
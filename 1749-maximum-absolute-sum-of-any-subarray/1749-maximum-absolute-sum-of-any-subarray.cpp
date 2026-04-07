class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return abs(nums[0]);
        int max_subarray_sum=nums[0];
        int min_subarray_sum=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++){
            int prevmax=max_subarray_sum;
            int prevmin=min_subarray_sum;
            max_subarray_sum=max(prevmax+nums[i],nums[i]);
            min_subarray_sum=min(prevmin+nums[i],nums[i]);
            ans=max(ans,max(max_subarray_sum,abs(min_subarray_sum)));
        }
        return ans;
    }
};
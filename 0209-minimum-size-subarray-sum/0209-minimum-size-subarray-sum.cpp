class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int min_len=INT_MAX;
        int lo=0;
        int hi=0;
        int sum=0;
        while(hi<n){
            sum+=nums[hi];
            while(sum>=target){
                min_len=min(min_len,hi-lo+1);
                sum-=nums[lo];
                lo++;
            }
            hi++;
        }
        return min_len==INT_MAX ? 0:min_len;
    }
};
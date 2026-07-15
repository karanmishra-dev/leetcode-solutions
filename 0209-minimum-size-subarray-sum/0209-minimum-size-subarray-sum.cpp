class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int lo=0;
        int min_len=INT_MAX;
        int sum=0;
        for(int hi=0;hi<n;hi++){
            sum+=nums[hi];
            while(sum>=target){
                min_len=min(min_len,hi-lo+1);
                lo++;
                sum-=nums[lo-1];
            }
        }
        return min_len==INT_MAX?0:min_len;
    }
};
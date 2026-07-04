class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int lo=0;
        int hi=k-1;
        long long sum=0;
        long long ans=0;
        unordered_map<int,int>mp;
        for(int i=lo;i<=hi;i++){
            sum+=nums[i];
            mp[nums[i]]++;
        }
        while(hi<n){
            if(mp.size()==k) ans=max(ans,sum);
            if(hi==n-1) break;
            mp[nums[lo]]--;
            if(mp[nums[lo]]==0) mp.erase(nums[lo]);
            lo++;
            hi++;
            sum+=nums[hi]-nums[lo-1];
            mp[nums[hi]]++;
        }
        return ans;
    }
};
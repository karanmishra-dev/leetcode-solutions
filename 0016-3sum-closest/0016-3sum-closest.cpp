class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int real_sum=nums[0]+nums[1]+nums[2];
        int dis=abs(real_sum-target);
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                int d=abs(sum-target);
                if(d<dis){
                    dis=d;
                    real_sum=sum;
                }
                if(sum==target) return sum;
                else if(sum<target) j++;
                else k--;
            }
        }
        return real_sum;
    }
};
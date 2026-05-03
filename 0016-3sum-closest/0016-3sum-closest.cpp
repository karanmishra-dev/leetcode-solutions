class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int real_sum;
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                int d=abs(sum-target);
                if(d<diff){
                    diff=d;
                    real_sum=sum;
                }
                if(sum<target) j++;
                else k--;
            }
        }
        return real_sum;
    }
};
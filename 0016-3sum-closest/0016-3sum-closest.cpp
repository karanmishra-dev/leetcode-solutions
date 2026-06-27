class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int real_sum=0;
        int dis=INT_MAX;
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                int d=abs(sum-target);
                if(sum==target) return sum;
                else if(sum<target){
                    if(d<=dis){
                        dis=d;
                        real_sum=sum;
                        
                    }
                    j++;
                }
                else{
                    if(d<=dis){
                        dis=d;
                        real_sum=sum;
                    }
                    k--;
                }
            }
        }
        return real_sum;
    }
};
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        unordered_map<int,int>mp;
        mp[0]=-1;//at index 1 diff cannot be 0 since either 0 or 1 will be present there
        int zero=0;
        int one=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) zero++;
            else one++;
            int diff=zero-one;
            if(diff==0){
                res=max(res,i+1);
                continue;
            }
            if(mp.find(diff)==mp.end()) mp[diff]=i;
            else{
                int idx=mp[diff];
                int len=i-idx;
                res=max(res,len);
            }
        }
        return res;
    }
};
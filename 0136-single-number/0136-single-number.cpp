class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int c:nums) ans^=c;
        return ans;
    }
};
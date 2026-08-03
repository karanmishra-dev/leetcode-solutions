class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int count=0;
        for(int x:nums){
            if(x==1){
                count++;
                maxi=max(maxi,count);
            }
            else count=0;
        }
        return maxi;
    }
};
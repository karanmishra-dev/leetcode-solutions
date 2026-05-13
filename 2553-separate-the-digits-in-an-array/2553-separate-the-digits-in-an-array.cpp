class Solution {
public:
    void digit(int n,vector<int>&ans){
        vector<int>temp;
        while(n>0){
            int d=n%10;
            temp.push_back(d);
            n/=10;
        }
        reverse(temp.begin(),temp.end());
        for(int x:temp) ans.push_back(x);
    }
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            digit(nums[i],ans);
        }
        return ans;
    }
};
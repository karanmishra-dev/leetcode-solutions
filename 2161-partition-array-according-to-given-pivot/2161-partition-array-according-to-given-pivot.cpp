class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>greater,smaller,equal;
        for(int x:nums){
            if(x>pivot) greater.push_back(x);
            else if(x<pivot) smaller.push_back(x);
            else equal.push_back(x);
        }
        vector<int>ans;
        for(int x:smaller) ans.push_back(x);
        for(int x:equal) ans.push_back(x);
        for(int x:greater) ans.push_back(x);
        return ans;
    }
};
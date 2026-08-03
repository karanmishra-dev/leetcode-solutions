class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        int less=0,equal=0,greater;
        for(int x:nums){
            if(x<pivot) less++;
            if(x==pivot) equal++;
        }
        int i=0;
        int j=less;
        int k=less+equal;
        vector<int>ans(n);
        for(int x:nums){
            if(x<pivot) ans[i++]=x;
            else if(x==pivot) ans[j++]=x;
            else ans[k++]=x;
        }
        return ans;
    }
};
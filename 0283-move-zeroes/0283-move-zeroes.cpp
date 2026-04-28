class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                idx=i;
                break;
            }
        }
        if(idx!=-1){
            int i=idx;
            int j=i+1;
            while(i<n && j<n){
                if(nums[i]==0 && nums[j]!=0){
                    swap(nums[i],nums[j]);
                    i++;
                    j++;
                }
                else j++;
            }
        }
    }
};
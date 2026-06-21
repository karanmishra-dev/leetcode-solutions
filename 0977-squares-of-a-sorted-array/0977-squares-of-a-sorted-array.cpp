class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int i=0;
        int j=n-1;
        int k=n-1;
        while(i<=j){
            if(nums[i]*nums[i]<nums[j]*nums[j]){
                ans[k]=nums[j]*nums[j];
                j--;
                k--;
            }
            else{
                ans[k]=nums[i]*nums[i];
                i++;
                k--;
            }
        }
        return ans;

        //ONE WAY IS TO SPLIT ARRAY IN NEG AND POS ARRAY
        // vector<int>neg;
        // vector<int>pos;
        // for(int num:nums){
        //     if(num<0) neg.push_back(num);
        //     else pos.push_back(num);
        // }
        // if(neg.size()==0){
        //     for(int i=0;i<pos.size();i++)pos[i]=pos[i]*pos[i];
        //     return pos;
        // }
        // if(pos.size()==0){
        //     for(int i=0;i<neg.size();i++) neg[i]=neg[i]*neg[i];
        //     reverse(neg.begin(),neg.end());
        //     return neg;
        // }
        // for(int i=0;i<neg.size();i++) neg[i]=neg[i]*neg[i];
        // reverse(neg.begin(),neg.end());
        // for(int i=0;i<pos.size();i++) pos[i]=pos[i]*pos[i];
        // int i=0;
        // int j=0;
        // vector<int>res(neg.size()+pos.size());
        // int k=0;
        // while(i<neg.size() && j<pos.size()){
        //     if(neg[i]<=pos[j]) res[k++]=neg[i++];
        //     else res[k++]=pos[j++];
        // }
        // while(i<neg.size()) res[k++]=neg[i++];
        // while(j<pos.size()) res[k++]=pos[j++];
        // return res;
    }
};
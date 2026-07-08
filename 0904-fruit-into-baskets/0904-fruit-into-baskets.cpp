class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int lo=0;
        int maxi=INT_MIN;
        unordered_map<int,int>mp;
        for(int hi=0;hi<n;hi++){
            mp[fruits[hi]]++;
            while(mp.size()>2){
                mp[fruits[lo]]--;
                if(mp[fruits[lo]]==0) mp.erase(fruits[lo]);
                lo++;
            }
            maxi=max(maxi,hi-lo+1);
        }
        return maxi;
    }
};
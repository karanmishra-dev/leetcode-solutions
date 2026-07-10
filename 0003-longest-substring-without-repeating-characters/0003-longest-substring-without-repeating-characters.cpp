class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(s=="") return 0;
        int lo=0;
        unordered_map<char,int>mp;
        int max_len=INT_MIN;
        for(int hi=0;hi<n;hi++){
            mp[s[hi]]++;
            int k=hi-lo+1;
            while(mp.size()<k){
                mp[s[lo]]--;
                if(mp[s[lo]]==0) mp.erase(s[lo]);
                lo++;
                k=hi-lo+1;
            }
            max_len=max(max_len,k);
        }
        return max_len;
    }
};
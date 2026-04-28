class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        vector<int>freq(128,0);
        for(int x:s) freq[x]++;
        for(int i=0;i<n;i++) if(freq[s[i]]==1) return i;
        return -1;
    }
};
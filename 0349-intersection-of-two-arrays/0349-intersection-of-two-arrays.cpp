class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0;
        int j=0;
        vector<int>ans;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                ans.push_back(a[i]);
                while(i+1<a.size() && a[i]==a[i+1]) i++;
                while(j+1<b.size() && b[j]==b[j+1]) j++;
                i++;
                j++;
            }
            else{
                if(a[i]<b[j]) i++;
                else j++;
            }
        }
        return ans;
    }
};
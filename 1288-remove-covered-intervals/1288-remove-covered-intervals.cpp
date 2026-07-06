class Solution {
public:
    static bool sort_fun(vector<int>&a,vector<int>&b){
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),sort_fun);
        int count=0;
        int max_end=-1;
        for(auto &it:intervals){
            if(it[1]>max_end){
                count++;
                max_end=it[1];
            }
        }
        return count;
    }
};
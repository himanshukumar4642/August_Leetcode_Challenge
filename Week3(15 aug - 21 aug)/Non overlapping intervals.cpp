class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [] (vector<int> i, vector<int> j) {return i[1] < j[1];});
        int ans=0,pichhlaBdaEnd=INT_MIN;
        for(vector<int> i:intervals){
            if(pichhlaBdaEnd > i[0]) ans++;
            else if(pichhlaBdaEnd < i[1]) pichhlaBdaEnd=i[1];
        }
        return ans;

    }
};

class Solution {
public:
    vector<vector<int>> rects;
    Solution(vector<vector<int>>& rects):rects(rects) {
        rects=rects;
    }
    
    vector<int> pick() {
        int areaSum=0;
        vector<int> ans;
        for(vector<int> v:rects){
            int area=(v[2]-v[0]+1)*(v[3]-v[1]+1);
            areaSum+=area;
            if(rand()%areaSum<area) ans=v;
        }
        int x=rand()%(ans[2]-ans[0]+1)+ans[0];
        int y=rand()%(ans[3]-ans[1]+1)+ans[1];
        return {x,y};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(rects);
 * vector<int> param_1 = obj->pick();
 */

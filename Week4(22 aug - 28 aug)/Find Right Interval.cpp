class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& in) {
        int n=in.size();
        if(n==0) return {};
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<n;i++) mp[in[i][0]]=i;
        for(auto i:in){
            auto itr=mp.lower_bound(i[1]);
            if(itr==mp.end()) ans.push_back(-1);
            else ans.push_back(itr->second);
        }
        return ans;
    }
};

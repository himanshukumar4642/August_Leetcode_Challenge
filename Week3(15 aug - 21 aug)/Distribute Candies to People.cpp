#define pb push_back  
class Solution {
public:
    vector<int> distributeCandies(int c, int n) {
        if(n==0||c==0) return {};
        vector<int> ans(n,0);
        int i=0;
        while(c>0){
            if(c>=(i+1)) {ans[i%n]+=i+1;c-=i+1;}
            else{
                ans[i%n]+=c;
                c=0;
            }
            i++;
        }
        return ans;
    }
};

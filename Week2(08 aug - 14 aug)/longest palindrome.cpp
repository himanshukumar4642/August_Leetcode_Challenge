class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(char c:s){
            m[c]++;
        }
        int ans=0;
        for(int i=0;i<m.size();i++){
            if(m[i]%2) ans+=m[i]-1;
            else ans+=m[i];
        }
        for(int i=m.size()-1;i>=0;i--){
            if(m[i]%2) {ans+=1;break;}
        }
        return ans;
    }
};

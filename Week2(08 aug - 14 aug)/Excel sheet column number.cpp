class Solution {
public:
    int titleToNumber(string s) {
        int res=0;
        int n=s.length();
        if(n==0) return 0;
        for(int i=0;i<n;i++){
            res+=(((s[i]%'A')+1)*pow(26,n-i-1));
        }
        return res;
    }
};

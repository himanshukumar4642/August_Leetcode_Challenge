class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int u=0;
        for(int i=0;i<n;i++) if(isupper(word[i])) u++;
        return (u==0 || (u==1 && isupper(word[0])) || u==n);
    }
};
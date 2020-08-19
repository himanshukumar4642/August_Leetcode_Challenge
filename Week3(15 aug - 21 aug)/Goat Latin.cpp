class Solution {
public:
    string toGoatLatin(string s) {
        vector<string> v;
        if(s=="") return s;
        stringstream ss(s);
        string word="";
        while(ss>>word) v.push_back(word);
        int cnt=1;
        string ans="";
        for(string x:v){
            if(x[0]=='a'||x[0]=='e'||x[0]=='i'||x[0]=='o'||x[0]=='u'||x[0]=='A'||x[0]=='E'||x[0]=='I'||x[0]=='O'||x[0]=='U') x+="ma";
            else{
                char c=x[0];
                x.erase(0,1);
                x+=c;
                x+="ma";
            }
            for(int i=1;i<=cnt;i++) x+="a";
            if(cnt<=v.size()-1) ans+=x+" ";
            else ans+=x;
            cnt++;
            
        }
        return ans;
    }
};

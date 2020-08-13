set<string> AllCombinations(string s,int c){
    set<string> ss;
    int tb=1<<s.length();
    string temp="";
    for(int b=1;b<tb;b++){
        int n=b,i=0;
        while(n){
            if(n&1) temp+=s[i];
            i++;n>>=1;
        }
        if(temp.length()==c) ss.insert(temp);
        temp="";
    }
    return ss;
}
class CombinationIterator {
public:
    set<string> ss;
    set<string>::iterator itr;
    CombinationIterator(string s, int c) {
        ss=AllCombinations(s,c);
        itr=ss.begin();
    }
    
    string next() {
        return *(itr++);
    }
    
    bool hasNext() {
        return itr!=ss.end();
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

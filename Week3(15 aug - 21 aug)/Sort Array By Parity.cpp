class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        if(a.size()==0) return a;
        int i=0,j=a.size()-1;
        while(i<j){
            if(a[i]%2) swap(a[j--],a[i]);
            else i++;
        }
        return a;
    }
};

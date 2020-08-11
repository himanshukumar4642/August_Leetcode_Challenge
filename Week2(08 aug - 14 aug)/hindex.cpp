class Solution {
public:
    int hIndex(vector<int>& c) {
        int n=c.size();
        sort(c.rbegin(),c.rend());
        int h=0;
        for(int i=0;i<n;i++)
            if(c[i]>=i+1)
                h=i+1;
        return h;
    }
};

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int r=grid.size(),c=grid[0].size();
        int a[]={0,-1,0,1};
        int b[]={-1,0,1,0};
        queue<pair<int,int>> q;
        int zc=0,fc=0,rc=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==0) zc++;
                else if(grid[i][j]==1) fc++;
                else q.push({i,j});
            }
        }
        int ans=-1;
        if(zc==r*c) return 0;
        while(!q.empty()){
            int s=q.size();
            ans++;
            while(s--){
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                for(int k=0;k<4;k++){
                    int x=i+a[k];
                    int y=j+b[k];
                    if(x>=0 && y>=0 && x<r && y<c && grid[x][y]==1){
                        grid[x][y]=2;
                        fc--;
                        q.push({x,y});
                    }
                }
            }
        }
        if(fc!=0) return -1;
        return ans;
    }
};

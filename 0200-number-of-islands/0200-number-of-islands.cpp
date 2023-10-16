class Solution {
public:

    void calc_land(vector<vector<char>>&grid,int i,int j,vector<vector<int>>&v1,int n,int m)
     {
         if(i<n && j<m and i>=0 and j>=0 and  v1[i][j]==-1 and grid[i][j]=='1')
          {
              v1[i][j]=0;

              calc_land(grid,i+1,j,v1,n,m);
              calc_land(grid,i,j+1,v1,n,m);
              calc_land(grid,i-1,j,v1,n,m);
              calc_land(grid,i,j-1,v1,n,m);
          }

          else
             return;
     }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>>v1(grid.size(),vector<int>(grid[0].size(),-1));

         int n=grid.size();
         int m=grid[0].size();
          int tot=0;
         for(int i=0;i<n;i++)
          {
              for(int j=0;j<m;j++)
               {
                   if(grid[i][j]=='1' and v1[i][j]==-1)
                    {
                      calc_land(grid,i,j,v1,n,m);

                       tot+=1;
                    }
               }
          }
          return tot;
    }
};
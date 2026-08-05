class Solution {
public:
    void dfs(int row, int col, vector<vector<int>>& grid,int m,int n,int color, vector<vector<bool>> &visited, vector<vector<int>> &result){

        visited[row][col] = true;

        int delRow[] = {0,-1,0,1};
        int delCol[] = {-1,0,1,0};
        bool border = false;
        for(int i=0; i<4; i++){
            int newRow = row+delRow[i];
            int newCol = col+delCol[i];
            // check border
            if(newRow<0 || newRow>=m || newCol<0 || newCol>=n){ // out of bondary
                border = true;
            }else if(grid[newRow][newCol] != grid[row][col]){
                border = true;
            }else if(!visited[newRow][newCol] && grid[row][col]==grid[newRow][newCol]) {
                dfs(newRow,newCol,grid,m,n,color,visited,result);
            }
            if(border){ // is connected component
                result[row][col] = color;
            }
        }
    }

    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {

        int m = grid.size();// row
        int n = grid[0].size();// col
        

        vector<vector<int>> result = grid;
        vector<vector<bool>> visited(m, vector<bool>(n,false));
        // unordered_set<pair<int,int>> visited;
        dfs(row,col,grid,m,n,color,visited,result);
        return result;
        
    }
};
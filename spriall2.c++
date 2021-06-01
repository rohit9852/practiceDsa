  vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>mat(n,vector<int>(n,0));
        int i=0,j=0,r=n,c=n,count=1;
        while(i<r && j<c){
            for(int x=j;x<c;x++)mat[i][x]=count++;
            for(int x=i+1;x<r;x++)mat[x][c-1]=count++;
            for(int x=c-2;x>=j && i!=r-1;x--)mat[r-1][x]=count++;
            for(int x=r-2;x>i && j!=c-1;x--)mat[x][j]=count++;;
            i++;j++;r--;c--;
        }
        return mat;
    }
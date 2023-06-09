int n, color;
void help(vector<vector<int>>&image , int i  , int j )
{
    if(i<0 or i>=image.size() or j<0 or j>=image[0].size()) return ;
    if(image[i][j]!=color) return ;
    if(image[i][j]==n) return ;
    image[i][j]=n;
    help(image , i+1 , j);
    help(image , i-1 , j);
    help(image , i , j+1);
    help(image , i , j-1);
    // help(image , i+1 , j+1);
    // help(image , i-1 , j-1);
    // help(image , i-1 , j+1);
    // help(image , i+1 , j-1);
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
n=newColor;
color=image[x][y];
help(image , x , y );
return image;
}

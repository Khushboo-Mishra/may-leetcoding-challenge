class Solution {
public:
    void floodFillHelper(vector<vector<int>>& image, int sr, int sc, int newColor, int oldColor)
    {
        if(sr>=image.size()|| sr<0 || sc>=image[0].size() || sc<0 || image[sr][sc]==newColor)
            return;
            
        if(image[sr][sc]==oldColor){
          image[sr][sc] = newColor;
          floodFillHelper(image, sr+1, sc, newColor, oldColor);
          floodFillHelper(image, sr-1, sc, newColor, oldColor);
          floodFillHelper(image, sr, sc+1, newColor, oldColor);
          floodFillHelper(image, sr, sc-1, newColor, oldColor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        if(image[sr][sc]==newColor)
        {
            return image;
        }
        
        floodFillHelper(image, sr, sc, newColor, image[sr][sc]);
        return image;
    }
};

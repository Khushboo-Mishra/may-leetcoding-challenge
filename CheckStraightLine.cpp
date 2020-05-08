class Solution {
public:
    bool sameLineHelper(vector<int> p1, vector<int> p2, vector<int> p3)
    {
		return (p2[1] - p1[1]) * (p3[0] - p1[0]) == (p3[1] - p1[1]) * (p2[0] - p1[0]);
    }
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()<=2)
            return true;
        for(int i=0;i<coordinates.size()-2;i++)
        {
            if(!sameLineHelper(coordinates[i],coordinates[i+1],coordinates[i+2]))
                return false;
        }
        return true;
    }
};

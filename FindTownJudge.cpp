class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        if(N==1 && trust.size()==0)
            return 1;
        
        map<int,set<pair<int,int>>> m;
        map<int,bool> t;
        
        for(int i=0;i<trust.size();i++)
        {
           m[trust[i][1]].insert(make_pair(trust[i][0],trust[i][1]));
           t[trust[i][0]] = true;
        }
        for(auto it = m.begin(); it!=m.end(); ++it)
        {
            if(it->second.size()==N-1 && (t.find(it->first)==t.end()))
                return it->first;
        }
        return -1;
    }
};

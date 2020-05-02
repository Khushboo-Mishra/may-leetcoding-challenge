class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char,int> jewel;
        int answer=0;
        for(int i=0;i<J.length();i++)
        {
            jewel[J[i]]=1; //maintaining a Map of all the characters which are a jewel.
        }
        for(int i=0;i<S.length();i++)
        {
            if(jewel.find(S[i])!=jewel.end())
            {
                answer++;  //searching if the current character is a jewel and increasing the count.
            }
        }
        return answer;
    }
};

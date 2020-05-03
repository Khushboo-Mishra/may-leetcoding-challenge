class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       map<char,int> ransom_notes; 
       map<char,int> magazines; 

       for(int i=0;i<ransomNote.length();i++)
       {
           if(ransom_notes.find(ransomNote[i])!=ransom_notes.end())
               ransom_notes[ransomNote[i]]++;
           else
               ransom_notes[ransomNote[i]] =1;
       }
        for(int i=0;i<magazine.length();i++)
       {
           if(magazines.find(magazine[i])!=magazines.end())
               magazines[magazine[i]]++;
           else
               magazines[magazine[i]] =1;
       }
        for(auto it = ransom_notes.begin(); it!=ransom_notes.end(); ++it)
        {
            if(!(it->second <= magazines[it->first]))
                return false;
        }
        return true;
    }
};

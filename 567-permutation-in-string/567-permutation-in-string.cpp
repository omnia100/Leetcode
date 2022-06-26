class Solution {
public:
    
    bool eqVec(vector<int> v1, vector<int> v2)
    {
        for(int i = 0; i<26 ;i++)
        {
            if (v1[i]!=v2[i]) return false;
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(26,0);
        int n1=s1.size();
        int n2=s2.size();
        int st = 0;
        for(int i=0; i<n1; i++) freq1[s1[i]-'a']++;
        
        while(st+n1 <= n2)
        {
            vector<int> freq2(26,0);
            for(int i=0; i<n1; i++){
                freq2[s2[st+i]-'a']++;
            }
            if (eqVec(freq1,freq2)) return true;
            else st++;
            
        }
        return false;
    }
    
    
    
};
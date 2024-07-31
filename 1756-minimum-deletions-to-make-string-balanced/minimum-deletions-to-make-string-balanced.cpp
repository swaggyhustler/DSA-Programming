class Solution {
public:
    int minimumDeletions(string s) {
        int ans=0, countB=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='b'){
                countB++;
            }else{
                ans=min(ans+1, countB);
            }
        }
        return ans;
    }
};
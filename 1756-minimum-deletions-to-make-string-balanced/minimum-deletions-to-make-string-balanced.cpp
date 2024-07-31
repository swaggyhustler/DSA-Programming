class Solution {
public:
    int minimumDeletions(string s) {
        int count=0, b=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='b'){
                b++;
            }else{
                if(b>0){
                    count++;
                    b--;
                }
            }
        }
        return count;
    }
};
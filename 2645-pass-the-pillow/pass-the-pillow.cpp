class Solution {
public:
    int passThePillow(int n, int time) {
        if(time<n){
            return time+1;
        }else{
            int rem=time%(n-1);
            if(((time/(n-1))%2)){
                return n-rem;
            }else{
                return rem+1;
            }
        }
    }
};
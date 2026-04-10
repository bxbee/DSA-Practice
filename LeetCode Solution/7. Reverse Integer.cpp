class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while(x!=0){
            int rem = x%10;
            
           
            x/=10;
            rev = rev*10+rem;
            if(INT_MAX/10<rev || INT_MIN/10>rev){
                return 0;
            }
            


        }
        return rev;
        
    }
};

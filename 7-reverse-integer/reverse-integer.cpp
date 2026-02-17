class Solution {
public:
    int reverse(int x) {
       
    int revnm =0;
   while(x != 0)
    {
        
        int ld = x % 10 ;
        if(revnm>INT_MAX/10 || revnm < INT_MIN/10)
           return 0;

        revnm = (revnm *10) + ld;
        x = x/10;
    
    }
    return revnm; 
    }
};
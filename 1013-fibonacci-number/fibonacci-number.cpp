class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        int prev=0,curr=1;
        int sum=0 ;
        for(int i=2;i<=n;i++)
        {
            sum = prev +curr;
            cout<<sum;
            prev=curr;
            curr = sum;
            
        }
        return sum;
    }
    
};
class Solution {
public:
    double myPow(double x, int n) {
        
        long bin_form = n ;
        if(n<0){
            bin_form = -bin_form;
            x=1/x;

        }
        
        double ans= 1.0;

        while(bin_form>0)
        {
            if(bin_form %2 ==1)
            {ans*=x;}

            x*=x;
            bin_form /=2;

        }

        return ans;
    }
};

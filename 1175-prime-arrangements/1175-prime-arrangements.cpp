
class Solution {
public:
    int numPrimeArrangements(int n) {
    long long mod = 1000000007;
        int prime = 0;
        for(int i = 2; i <= n; i++) {
         bool p=true;
            for(int j=2; j*j <= i;j++) {
            if (i%j == 0) {
                    p = false;
                   break;
                }
            }
            if (p) prime++;
        }
        long long ans = 1;
        for(int i=1;i<=prime;i++)
            ans = ans*i%mod;
        for(int i = 1; i <= n-prime;i++)
         ans = ans*i%mod;
        return ans;
    }
};

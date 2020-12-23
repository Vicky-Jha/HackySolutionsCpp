#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;

    void factorial( vector<int>& fact)
    {
        fact[1] = 1;
        for ( int i =2; i <= 10; ++ i )
            fact[i] = i*fact[i-1];

    }
    string getPermutation(string res, int k, vector<int>& fact) {
        int n = res.size();
        string ans = "";
        while (n > 1)
        {
            int q = k / fact[n-1];
            if( k % fact[n-1] == 0 )
            {
                ans += res[q-1];
                res.erase(q-1,1);
                reverse(res.begin(),res.end());
                ans += res;
                return ans; 
            }
            else
            {
                ans += res[q];
                res.erase(q,1);
            }
            k -= q*fact[n-1];
            n--;
        }
        ans += res;
        return ans ;
    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int> fact(11);
	factorial(fact);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        for(int i = 1; i <= fact[s.size()]; ++i)
        cout<<getPermutation(s,i,fact)<<" ";
        cout<<"\n";
    }


    return 0;
}

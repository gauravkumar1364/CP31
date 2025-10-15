    #include <bits/stdc++.h>
    using namespace std;

    // #define int long long
    // #define all(x) (x).begin(), (x).end()
    // #define endl '\n'

    bool check(string s,string x){
        if(s.size()<x.size()) return false;
        for (int i = 0; i < s.size()-x.size()+1; i++)
        {
            if(s.substr(i,x.size())==x){
                return true;
            }
        }
        return false;   
    }

    int solve(int n,int m,string s, string x) {
        int ans=-1;
        string x0 = x;
        string x1 = x0+x0;
        string x2 = x1+x1;
        string x3 = x2+x2;
        string x4 = x3+x3;
        string x5 = x4+x4;
        if(check(x0,s)) return 0;
        else if(check(x1,s)) return 1;
        else if(check(x2,s)) return 2;
        else if(check(x3,s)) return 3;
        else if(check(x4,s)) return 4;
        else if(check(x5,s)) return 5;
        else return -1;
        
        
    }

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;
        cin >> t;

        while(t--) {
            int n, m;
            cin >> n >> m;
            string x, s;
            cin >> x >> s;

            cout << solve(n, m, s, x) << "\n";
        }

        return 0;
    }
#include <bits/stdc++.h>
using namespace std;

int solution(int n,string arr){
    int ans = 0 ;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]=='.')
        {
            if (arr[i+2]=='.' && arr[i+1] != '#')
            {
                return 2;
                break;
            }
            else{
                ans++;
            }
            
        }
        
    }
    return ans;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int ans = solution(n, s);
        cout << ans << "\n";
    }
    return 0;
}
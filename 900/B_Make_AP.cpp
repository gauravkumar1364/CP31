#include <bits/stdc++.h>
using namespace std;


string solve(int a,int b,int c) {
    bool answer=false;
    long long new_a = 2 * b - c; 
    if (new_a / a > 0 && new_a % a == 0) 
        answer = true;
    long long new_b = (a + c) / 2; 
    if (new_b / b > 0 && new_b % b == 0 && (c - a) % 2 == 0) 
        answer = true;
    long long new_c = 2 * b - a; 
    if (new_c / c > 0 && new_c % c == 0) 
        answer = true;
    if(answer) return "YES";
    else return "NO";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    int a,b,c;
    while (t--) {
        cin>>a;
        cin>>b;
        cin>>c;
        cout<<solve(a,b,c)<<endl;
    }
    return 0;
}
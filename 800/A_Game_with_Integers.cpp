#include <bits/stdc++.h>
using namespace std;

// ---------------------- FAST IO ----------------------
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

// ---------------------- TYPEDEFS ---------------------
#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>

// ---------------------- CONSTANTS --------------------
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ld EPS = 1e-9;

// ---------------------- MACROS -----------------------
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
#define sz(x) (int)(x).size()
#define uniq(x) x.erase(unique(all(x)), x.end())

// ---------------------- DEBUGGING --------------------
#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << x << endl;
#else
#define dbg(x)
#endif

// ---------------------- RANDOM -----------------------
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll randll(ll l, ll r) {
    uniform_int_distribution<ll> dist(l, r);
    return dist(rng);
}

// ---------------------- UTILITY FUNCTIONS -----------------------
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll mod_add(ll a, ll b, ll m = MOD) { a %= m; b %= m; return (a + b) % m; }
ll mod_sub(ll a, ll b, ll m = MOD) { a %= m; b %= m; return (a - b + m) % m; }
ll mod_mul(ll a, ll b, ll m = MOD) { return (a % m * b % m) % m; }

ll mod_exp(ll base, ll exp, ll m = MOD) {
    ll res = 1;
    while (exp > 0) {
        if (exp & 1) res = mod_mul(res, base, m);
        base = mod_mul(base, base, m);
        exp >>= 1;
    }
    return res;
}

// ---------------------- SIEVE OF ERATOSTHENES -----------------------
vector<int> sieve(int n) {
    vector<int> primes;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
        if (is_prime[i]) primes.pb(i);
    return primes;
}

// ---------------------- SORTING HELPERS -----------------------
bool cmp_pair_asc(const pii &a, const pii &b) {
    return (a.ff == b.ff) ? a.ss < b.ss : a.ff < b.ff;
}
bool cmp_pair_desc(const pii &a, const pii &b) {
    return (a.ff == b.ff) ? a.ss > b.ss : a.ff > b.ff;
}

// ---------------------- MAIN SOLVE FUNCTION -----------------------
void solve() {
    int n;
    cin >> n;
    if(n%3==1||n%3==2)cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}

// ---------------------- DRIVER CODE -----------------------
int main() {
    fastio();
    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();
    return 0;
}

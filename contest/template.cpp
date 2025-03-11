#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
#include <climits>

using namespace std;

// types
using ll = long long;
using ld = long double;
using db = double;

// pairs
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define mp make_pair
#define f first
#define s second

// vectors
#define sz(x) int(x.size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).begin(), (x).end()
#define sor(x) sort(all(x))
#define make_unique(x) sor(x); x.erase(uinque(all(x)), x.end())


#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()

#define lb lower_bound
#define ub upper_bound

// loops
const int dx[4]={1,0,-1,0}, dy[4]={0,1,0,-1};
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count()); 
const int MOD = (int)1e9+7; // combinatorics orz;
const ll BIG = 1e18;

// minimization problems
template<class T> using pqg = priority_queue<T,vector<T>,greater<T> >;

// bitwise ops
inline int p2(int x) { return 1<<x; }
inline int bits(int x, int b) { return x & (1 << b); }

template<typename T> bool ckmin(T& a, const T& b) {
	return b < a ? a = b, 1 : 0; } 

template<typename T> bool ckmax(T& a, const T& b) {
	return a < b ? a = b, 1 : 0; } 

// stdio
template<typename T> inline T read(){
	T x;
	cin >> x;
	return x;
}


template<typename T> inline T put(T x){
	cout << x;
}

template<typename T> inline T puts(T x){
	cout << x << '\n';
}



void solve(){
  
}


int main() { cin.tie(0)->sync_with_stdio(0); int T = 1; cin >> T; while(T--)solve();}

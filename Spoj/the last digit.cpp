#include <bits/stdc++.h>
using namespace std;
#define M                   10
#define ll 					long long int
#define vi					vector<ll>
#define	pb					push_back
#define loop(i,a,b)			for(int i=(a);i<=(b);i++)


int modpow(int x, int n, int m) {
	if (n == 0) return 1%m;
	int u = modpow(x,n/2,m);
	u = (u*u)%m;
	if (n%2 == 1) u = (u*x)%m;
	if (u < 0) u+=m;
	return u;
}

int main() {
	ll t, a, b; cin >> t;
	while(t--){
		vi ans;
		cin >> a >> b;
		int result = modpow(a, b, M);
		cout << result << endl;
	}
	return 0;
}
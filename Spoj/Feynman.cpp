#include <bits/stdc++.h>
using namespace std;
#define ll 					long long int
#define vi					vector<ll>
#define vs					vector<string>
#define	pb					push_back
#define loop(i,a,b)			for(int i=(a);i<=(b);i++)
#define printarr(arr,a,b)	for(int i=(a);i<=(b);i++) cout<<(arr[i]);

int main() {
	ll N, ans;
	while(cin >> N && N != 0){
		ans = (N * (N+1) * (2*N + 1)) / 6;
		cout << ans << endl;
	}
	return 0;
}
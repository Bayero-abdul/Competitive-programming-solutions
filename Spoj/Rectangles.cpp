#include <bits/stdc++.h>
using namespace std;
#define M                   10
#define ll 					long long int
#define vi					vector<ll>
#define	pb					push_back
#define loop(i,a,b)			for(int i=(a);i<=(b);i++)
#define logarr(arr,a,b)		for(int i=(a);i<=(b);i++) cout<<arr[i]<<" ";


int main() {
	ll N, ans = 0; cin >> N;
	for(int i = 1; i <= sqrt(N); i++)
		for(int j = i; (i*j) <= N; j++)
			ans++;
	cout << ans << endl;
	return 0;
}
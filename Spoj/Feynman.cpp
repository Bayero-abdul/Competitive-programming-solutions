#include <bits/stdc++.h>
using namespace std;
#define ll 					long long int
#define vi					vector<ll>
#define vs					vector<string>
#define	pb					push_back
#define loop(i,a,b)			for(int i=(a);i<=(b);i++)
#define printarr(arr,a,b)	for(int i=(a);i<=(b);i++) cout<<(arr[i]);

void multiply(vi &ans, ll num){
	reverse(ans.begin(), ans.end());
	ll prod = 1, carry = 0;
	loop(i,0,ans.size() - 1){
		sum = pred * num + carry;
		ans[i] = sum % 10;
		carry = sum / 10;
	}
	while(carry){
		ans.pb(carry);
		carry /= 10; 
	}
	reverse(ans.begin(), ans.end());
}

int main() {
	ll t, a, b;
	while(t--){
		vi ans;
		cin >> a >> b;
		ans.pb(1);
		loop(i,1,b){
			multiply(ans, a);
			cout << ans.back() << endl;
			
		}
	}
	return 0;
}
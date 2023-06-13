#include <bits/stdc++.h>
using namespace std;
#define ll 					long long int
#define vi					vector<ll>
#define vs					vector<string>
#define	pb					push_back
#define loop(i,a,b)			for(int i=(a);i<=(b);i++)
#define printarr(arr,a,b)	for(int i=(a);i<=(b);i++) cout<<(arr[i]);

int main() {
	ll t; cin >> t;
	ll x,y;
	while(t--){
		cin >> x >> y;
		if (x != y && x != y + 2)
			cout << "No Number" << endl;
		else if (x % 2 == 0 && y % 2 == 0)
			cout << x + y << endl;
		else
			cout << x + y - 1 << endl;
	}
	return 0;
}
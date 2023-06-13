#include <bits/stdc++.h>
using namespace std;
#define ll 					long long int
#define vi					vector<ll>
#define vs					vector<string>
#define	pb					push_back
#define loop(i,a,b)			for(int i=(a);i<=(b);i++)
#define printarr(arr,a,b)	for(int i=(a);i<=(b);i++) cout<<(arr[i]);

int main() {
	ll a1 , a2 , a3;
	cin >> a1 >> a2 >> a3 ;
	while(a1 || a2 || a3){
		if(a2 - a1 == a3 - a2)
			cout << "AP " << a3 + (a3 - a2) << endl;
		else
			cout << "GP " << a3 * (a3 / a2) << endl;
		cin >> a1 >> a2 >> a3;
	}
	return 0;
}     	 
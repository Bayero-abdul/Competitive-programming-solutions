#include <bits/stdc++.h>
using namespace std;
#define M                   10
#define ll 					long long int
#define vi					vector<ll>
#define	pb					push_back
#define loop(i,a,b)			for(int i=(a);i<=(b);i++)
#define logarr(arr,a,b)		for(int i=(a);i<=(b);i++) cout<<arr[i]<<" ";


int main() {
	int t; cin >> t;
	
	while(t--){
		int n, c;
		cin >> n >> c;
		
		vi pos;
		loop(i, 1, n) {
			ll xi; cin >> xi;
			pos.pb(xi);
		}	
		
		sort(pos.begin(), pos.end());
		
		int max = *max_element(pos.begin(), pos.end());
		int mid, low = 1, high = max - low;
		
		while(low < high) {
			mid = low + (high - low + 1)/2;
			
			int required = 1, curr_pos = 0;
			loop(i, 1, n - 1) {
				if (pos[i] - pos[curr_pos] >= mid) {
					required++;
					curr_pos = i;
				}	
			}
			
			if (required >= c) 
				low = mid;
			else 
				high = mid - 1;
		}
		
		cout << low << endl;
	}
}
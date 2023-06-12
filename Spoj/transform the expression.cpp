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
	loop(i,1,t){
		map<char, int> prec;
		prec = {{'-', 1}, {'+', 1},
				{'*', 2}, {'/', 2},
				{'^', 3}, {'(', 4}};
		
		stack<char> ops;
		string exp, rpn=""; cin >> exp;
		loop(i,0,exp.size() - 1){
			if (exp[i] == '('){
				ops.push(exp[i]);
			} else if (exp[i] == ')'){
				while(!ops.empty()){
					char op = ops.top();
					if (op == '('){
						ops.pop();
						break;
					} else{
						rpn += ops.top();
						ops.pop();
					}
				}
			} else if (exp[i] >= 'a' && exp[i] <= 'z'){
				rpn += exp[i];
			} else {
				if (prec[exp[i]] > prec[ops.top()])
					ops.push(exp[i]);
				else{
					while(prec[exp[i]] <= prec[ops.top()] && ops.top() != '('){
						rpn += ops.top();
						ops.pop();
					}
					ops.push(exp[i]);
				}
			}			
		}
		cout << rpn << endl;
	}
	return 0;
}     	 
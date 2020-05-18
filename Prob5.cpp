#include <bits/stdc++.h>
using namespace std;

string concatena(string a, string b){
	return b.append(a);
	
}

int main(){
	string a,b;
	
	getline(cin,a);
	getline(cin,b);
	
	b=concatena(a,b);
	cout<<b;
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int  ite(int *array,int n){
	int j=0;
	for(int i=0;i<n;i++){
		j+=*array++;
	}
	return j;
}

int recu(int *array,int n){
	if(n==1) return *array;
	n--;
	return *(array+n) +recu(array,n);
}

int main(){
	int array[]={3,4,7};
	int n=sizeof(array)/sizeof(array[0]);
	cout<<ite(array,n)<<'\n';
	cout<<recu(array,n)<<'\n';
	return 0;
}

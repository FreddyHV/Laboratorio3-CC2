#include <bits/stdc++.h>
using namespace std;

int *ite(int *array,int n){
	int *s=new int[n];
	for(int i=0;i<n;i++){
		*(s+i)=*(array+n-i-1);
	}
	return s;
}
void recu(int *array,int n,int *as,int g){	
	
	if(n!=0){
		*as++=*(array+n-1);
		recu(array,n-1,as,g+1);
	}
	else{
		*(as+g)=*(array+n);
	}
}
int main(){
	int array[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(array)/sizeof(array[0]);
	//Forma iterativa
	int *s=ite(array,n);
	for(int i=0;i<n;i++){
		cout<<*(s+i)<<" ";
	}
	//Forma recursiva
	cout<<'\n';
	int as[n],g=0;
	recu(array,n,as,g);
	for(int i=0;i<n;i++){
		cout<<*(as+i)<<" ";
	}	
	return 0;
}

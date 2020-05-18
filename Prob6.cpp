#include <iostream>
using namespace std;

int ite(char *array){
	int as=0;
	while(*(array+as)!='\0'){
		as++;
	}
	return as;
}

int recu(char *s,int i=0){
	if(*(s+i)=='\0') return i;
	else return recu(s,++i);
}

int main(){
	char array[]={'h','o','l','a','c','o','m','o','\0'};
	//Forma Iterativa
	cout<<ite(array);
	cout<<'\n';
	//Forma recursiva
	cout<<recu(array);
	return 0;
}

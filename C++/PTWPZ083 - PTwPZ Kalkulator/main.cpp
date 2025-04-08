#include <iostream>

using namespace std;

int main(){
	int testow;
	string wyrazenie;
	char operacja;
	int wynik;
	
	cin>>testow;
	for(int i=0;i<testow;i++){
		cin>>wyrazenie;
		wynik=wyrazenie[0]-48;
		for(int j=1;j<wyrazenie.length();j++){
			operacja=wyrazenie[j];
			if(operacja=='-'){
				j++;
				wynik-=wyrazenie[j]-48;
			}
			else if(operacja=='+'){
				j++;
				wynik+=wyrazenie[j]-48;
			}
		}
		cout<<wynik<<endl;
	}
	return 0;
}
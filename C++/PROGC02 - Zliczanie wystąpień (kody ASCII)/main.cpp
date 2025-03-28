#include <iostream>
#include <string>

using namespace std;

int main(){
	int kodZnaku;
	int tabelaKodow[256]={0};


	while((kodZnaku=getchar())!=EOF){
		tabelaKodow[kodZnaku]++;
	}
	for(int i=0;i<256;i++){
		if(tabelaKodow[i]>0){
			cout<<i<<" "<<tabelaKodow[i]<<endl;
			tabelaKodow[i]=0;
		}
	}
	return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	double boki[3];
	
	while(cin>>boki[0]>>boki[1]>>boki[2]){
		sort(boki,boki+3);
		if(boki[0]<=0||boki[1]<=0||boki[2]<=0||(boki[2]>=boki[1]+boki[0])){
			cout<<"brak"<<endl;
			continue;
		}
		if(boki[2]*boki[2]==boki[1]*boki[1]+boki[0]*boki[0]){
			cout<<"prostokatny"<<endl;
			continue;
		}
		if(boki[2]*boki[2]<boki[1]*boki[1]+boki[0]*boki[0]){
			cout<<"ostrokatny"<<endl;
			continue;
		}
		if(boki[2]*boki[2]>boki[1]*boki[1]+boki[0]*boki[0]){
			cout<<"rozwartokatny"<<endl;
			continue;
		}
	}
	return 0;
}
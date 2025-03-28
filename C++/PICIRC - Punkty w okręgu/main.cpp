#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x0,y0,r0;
	int lp;
	int xp,yp;
	float test;
	
	cin>>x0>>y0>>r0;
	cin>>lp;
	for(int i=0;i<lp;i++){
		cin>>xp>>yp;
		test=(xp-x0)*(xp-x0)+(yp-y0)*(yp-y0);
		if(test>r0*r0)
			cout<<"O"<<endl;
		if(test==r0*r0)
			cout<<"E"<<endl;
		if(test<r0*r0)
			cout<<"I"<<endl;
		
	}
	
	
	return 0;
}
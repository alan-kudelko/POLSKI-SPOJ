#include <iostream>
#include <cctype>

using namespace std;

int main(){
	string linia_html;
	string linia_up_html;
	int i;
	bool znacznik_html;
	
	while(getline(cin,linia_html)){
		for(int i=0;i<linia_html.length();i++){
			if((linia_html[i]=='<')&&(!znacznik_html)){
				znacznik_html=true;
			}
			else if(linia_html[i]=='>'){
				znacznik_html=false;
			}
			if(znacznik_html)
				linia_up_html+=toupper(linia_html[i]);
			else
				linia_up_html+=linia_html[i];
		}
		cout<<linia_up_html<<endl;
		linia_up_html="";
	}
	return 0;
}
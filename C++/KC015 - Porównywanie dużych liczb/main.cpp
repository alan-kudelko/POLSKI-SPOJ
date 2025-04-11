#include <iostream>

using namespace std;

bool relacjaWiekszosci(string lA,string lB){
    if(lA.length()>lB.length())
        return true;
    if(lA.length()<lB.length())
        return false;

    for(int i=0;i<lA.length();i++){
        if(lA[i]==lB[i])
            continue;
        if(lA[i]>lB[i])
            return true;
    }
    return false;
}
bool relacjaMniejszosci(string lA, string lB){
    if(lA.length()<lB.length())
        return true;
    if(lA.length()>lB.length())
        return false;

    for(int i=0;i<lA.length();i++){
        if(lA[i]==lB[i])
            continue;
        if(lA[i]<lB[i])
            return true;
        if(lA[i]>lB[i])
            return false;
    }
    return false;
}
bool relacjaRownosci(string lA, string lB){
    if(lA.length()!=lB.length())
        return false;
    for(int i=0;i<lA.length();i++){
        if(lA[i]!=lB[i])
            return false;
    }
    return true;
}

int main(){
	string relacja;
	string liczbaA;
	string liczbaB;
	bool wynikRelacji=false;

	while(cin>>liczbaA>>relacja>>liczbaB){
		if(relacja=="==")
            cout<<(relacjaRownosci(liczbaA,liczbaB)?'1':'0')<<endl;
		else if(relacja=="!=")
            cout<<(relacjaRownosci(liczbaA,liczbaB)?'0':'1')<<endl;
		else if(relacja==">="){
            wynikRelacji=relacjaRownosci(liczbaA,liczbaB);
            if(!wynikRelacji)
                wynikRelacji=relacjaWiekszosci(liczbaA,liczbaB);
            cout<<(wynikRelacji?'1':'0')<<endl;
		}
		else if(relacja=="<="){
            wynikRelacji=relacjaRownosci(liczbaA,liczbaB);
            if(!wynikRelacji)
                wynikRelacji=relacjaMniejszosci(liczbaA,liczbaB);
            cout<<(wynikRelacji?'1':'0')<<endl;
		}

	}
	return 0;
}

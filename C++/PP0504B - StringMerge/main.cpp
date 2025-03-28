#include <iostream>
#include <cstring>

using namespace std;

char*string_merge(const char*a,const char*b){
    char*c;
    int i=0;
    int j=0;
    int la=strlen(a);
    int lb=strlen(b);
    la=(la<=lb)?la:lb;

    c=new char[2*la+1];
    for(i=0;i<2*la;i++){
        c[i]=(i%2)?b[i-j]:a[i-j];
        (i%2)?0:j++;

    }
    c[i]='\0';

    return c;
}

int main(){
    int testow;
    char*s;
    string a,b;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>a>>b;
        s=string_merge(a.c_str(),b.c_str());
        cout<<s<<endl;
        delete[]s;
    }

    return 0;
}

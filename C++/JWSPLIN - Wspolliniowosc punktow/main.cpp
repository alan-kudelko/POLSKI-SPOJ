#include <iostream>

using namespace std;

int main(){
    int testow;
    int x[3];
    int y[3];
    double a,b,c;

    cin>>testow;

    for(int i=0;i<testow;i++){
        for(int j=0;j<3;j++)
            cin>>x[j]>>y[j];

        if(x[0]!=x[1]){
            a=(y[0]-y[1])/(x[0]-x[1]);
            b=y[0]-a*x[0];
            if((y[2])==(a*x[2]+b)){
                cout<<"TAK"<<endl;
            }
            else cout<<"NIE"<<endl;
        }
        else{
            int j=0;
            for(j=0;j<2;j++)
                if(x[0]!=x[j])
                    break;
            if(j==2)
                cout<<"TAK"<<endl;
            else
                cout<<"NIE"<<endl;

        }



    }

    return 0;
}

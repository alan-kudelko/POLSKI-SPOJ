#include <iostream>

using namespace std;

int main(){
    int testow;

    int kierunek;
    int krokow;
    int wskazowek;
    int x=0;
    int y=0;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>wskazowek;

        for(int j=0;j<wskazowek;j++){
            cin>>kierunek>>krokow;

            if(kierunek<2)
                y+=kierunek==0?krokow:-krokow;
            else
            x+=kierunek==3?krokow:-krokow;
        }

        if((x==0)&(y==0))
            cout<<"studnia"<<endl;
        else{
            if(y!=0)
                cout<<((y>0)?0:1)<<" "<<((y>0)?y:-y)<<endl;
            if(x!=0)
                cout<<((x>0)?3:2)<<" "<<((x>0)?x:-x)<<endl;
        }


        x=y=0;
    }

    return 0;
}

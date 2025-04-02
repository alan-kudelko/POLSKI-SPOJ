#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct punkt{
    string nazwa;
    int x;
    int y;
};

bool porownaj(punkt p1,punkt p2){
    return (sqrt(pow(p1.x,2)+pow(p1.y,2)))<(sqrt(pow(p2.x,2)+pow(p2.y,2)))?1:0;
}


int main(){
    int testow;
    int punktow;

    punkt*p;

    cin>>testow;

    for(int i=0;i<testow;i++){
        cin>>punktow;

        p=new punkt[punktow];

        for(int j=0;j<punktow;j++){
            cin>>p[j].nazwa>>p[j].x>>p[j].y;
        }
        sort(p,p+punktow,porownaj);

        for(int j=0;j<punktow;j++)
            cout<<p[j].nazwa<<" "<<p[j].x<<" "<<p[j].y<<endl;

        delete[]p;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main(){
    char operacja;
    int x;
    int y;

    while(cin>>operacja>>x>>y){
        switch(operacja){
        case '+':
            cout<<x+y<<endl;
            continue;
        case '-':
            cout<<x-y<<endl;
            continue;
        case '*':
            cout<<x*y<<endl;
            continue;
         case '/':
            cout<<x/y<<endl;
            continue;
        case '%':
            cout<<x%y<<endl;
            continue;
        }

    }

    return 0;
}

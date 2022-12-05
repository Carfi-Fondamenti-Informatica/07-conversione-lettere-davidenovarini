#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char a=0;
    int b=0;
    cin >> a;
    if (ver(a)== true){
        cout << con (a)<< endl;
    }
    else {
        cout << "errore"<< endl;}
    return 0;
}

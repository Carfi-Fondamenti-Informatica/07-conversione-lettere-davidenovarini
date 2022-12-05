#include "lib.h"


bool ver(char a){
    int b;
    b=(int)a;
    if (b>=65 & b<=90 || b>=97 & b<=122)
        return true;
    else return false;
}
char con(char a){
    int b;
    b=(int)a;
    int c=0;

    if (b >= 97 && b<=122){
        c = b-32;
    }
    else if(b>=65 && b<=90)
        c = b + 32;
        return c;
}


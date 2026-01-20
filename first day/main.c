#include "hello.h"

struct timur {
    short age;
    short penix;
};
int main(){
    struct timur t1 = {6, 2};
    
    hello_timur("Timubek",t1);

}
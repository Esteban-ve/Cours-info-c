#include <stdio.h>

/*Un commentaire sur
plusieurs lignes, ça servira probablement un jour */

int exchange(int *px,int *py){
    *px=*px + *py;
    *py=*px - *py;
    *px=*px - *py;
}

int main() {

    int a;
    a=2;
    int b;
    b=10;
    
    printf("a vaut %d \n", a);
    printf("b vaut %d \n", b);

    exchange(&a,&b);
    printf("après échange: a  vaut %d, et b vaut %d\n", a,b);

}

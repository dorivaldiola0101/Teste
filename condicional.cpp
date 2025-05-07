#include<stdio.h>
#include<math.h>

int main() {
    double l1,l2,l3,per,are,p,quadrado,num;
    num = 3;
    scanf("%lf",&l1);
    scanf("%lf",&l2);
    scanf("%lf",&l3);

    per = l1 + l2 + l3;

    if(l1 == l2 && l2 == l3){
        are = ((l1 *l1) * sqrt(num) )/4;
    }
    else{
        p = (l1 + l2 + l3) / 2;
        quadrado = p*(p-l1)*(p - l2)*(p - l3);
        are = sqrt(quadrado);
    }
    printf("Lados =  %5.2f,  %5.2f,  %5.2f\n" , l1, l2, l3);
    printf("Perímetro = %5.2f\n", per);
    printf("Área = %5.2f\n" , are);

    return 0;

}
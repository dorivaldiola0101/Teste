#include <stdio.h>


void impressaoI(int n){

    if(n==1)
        printf("1\n ");

    else{
        impressaoI(n-1); // 1 2 3 4 5 ... n-1
        printf("%d\n ", n); 
    }
}
int main(){
    int n;
    scanf("%d", &n);
    impressaoI(n);
    return 0;


}
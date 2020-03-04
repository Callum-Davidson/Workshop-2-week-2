//task 4
#include <stdio.h>
/*int  main () //Question 4
{
    int a ,b ,q ,r ;
    printf ("enter an integer: ");
    scanf("%d",&a) ;
    printf ("enter another integer:\n ");
    scanf("%d",&b);

    if (b==0){
            printf("Division by zero error"); }

    else q=a/b ;
      r=a%b ;
    printf ("a divivded by b is %d,\n",q);
    printf ("and the remainder is %d\n",r) ;

}*/

//Task 5 sqrt approximation

    int main () {
    float n, x=1, i;

    printf ("enter a number");

    scanf("%f",&n);

    for(int i=0; i<9;i++) {x=0.5*(x+n/x);
    printf("%f\n",x);
    }





    return 0 ;



}



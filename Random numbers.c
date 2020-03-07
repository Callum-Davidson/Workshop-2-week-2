#include <stdlib.h>
#include <stdio.h>
// Task 7 rolling dice
   /* int main (){
    float counter=0, aThreeHappened, a ,b ,i;

     for(int i=0; i<10000;i++){

    a= ((rand() % 6) + 1);
    b= ((rand() % 6) + 1) ;

    if (a==3 || b==3){
        aThreeHappened= aThreeHappened+1;


        }
     }
     counter =10000 ;



    printf("%f/%f\n",aThreeHappened, counter);

    printf ("hmmmm\n");

    return 0 ;
    }*/

    // Arithmetic tutor

   /* int main (){

    float z, a, b, c, d,t;
do {
         a= ((rand()%10000) +1) ;
    b= ((rand()%10000) +1) ;
    c= a+b ;

    printf ("what is %.3f + %.3f ? :",a ,b);

    scanf("%f",&d);


    if (c==d) {
    t++ ;
    printf("correct!\n");

    }



    else {
        printf("Wrong : the correct answer is %f\n you got %1.f questions right",c,t);

    }
    } while (c==d);
    return 0 ;
    }
    */

    int main () {
   float countInside=0,countTotal=0, x, y, pi ;

    do {
        x= rand() / ((double) RAND_MAX);
        y= rand() / ((double) RAND_MAX);


        countTotal = countTotal +1 ;

    if (x*x + y*y < 1) {
        countInside = countInside+1 ;
    }

    pi = 4*countInside /countTotal;



    } while (countTotal<9999999);

    printf("pi is approx %f\n",pi);

    return 0 ;

    }

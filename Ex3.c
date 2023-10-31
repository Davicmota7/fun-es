#include<stdio.h>
main()
{
    int matrizA, temp;
    int i,j;

    for(i=0;i<10;i++)
    {
        temp = matrizA;
        matrizA = matrizA;
        matrizA = temp;
    }


      for(j=0;j<10;j++)
      {
          temp = matrizA = matrizA;
          matrizA = temp;


      }
      printf("\t%d",matrizA);
}
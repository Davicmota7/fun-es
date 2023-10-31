#include <stdio.h>
#include <stdlib.h>

int main()
{int  i, dias, meses, anos, calculo, diaatual=3, mesatual=9, anoatual=2023, maisvelha;

struct{

int dia, mes, ano;



printf("\nInsira os dados pessoais:");
printf("\n");

for (int i=0; i<pessoas; i++)
{
printf("\nDia de nascimento da pessoa %d:\n", i+1);
scanf("%d",&data[i].dia);
printf("\nMês de nascimento da pessoa %d:\n", i+1);
scanf("%d", &data[i].mes);
printf("\nAno de nascimento da pessoa %d:\n", i+1);
scanf(" %d", &data[i].ano);}

calculo =   365*anoatual + 30*mesatual + diaatual - 365*data[i].ano - 30*data[i].mes - data[i].dia;

anos = calculo/365;
calculo = calculo%365;

meses = calculo/30;
calculo = calculo%30;

dias = calculo;

for (int i=0; i<pessoas; i++)
{
printf("\n%s tem %d anos, %d meses, e %d dias de idade\n", data[i].nome, anos, meses, dias);


}
return 0;

}
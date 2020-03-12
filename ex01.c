
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void fun(int totalMinutos, int* hora, int* minuto)
{

    *hora=totalMinutos/60;
    *minuto=totalMinutos-((*hora)*60);



    printf("%i hr : %i min\n",*hora, *minuto);


}

int main()
{
    int tmin=0, min=0,hr=0;
    printf("Digite o total de minutos:\n");
    scanf("%i", &tmin);
    fun(tmin,&hr,&min);


    return 0;
}
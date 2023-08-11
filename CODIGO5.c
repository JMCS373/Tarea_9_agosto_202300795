#include <stdio.h>

int main () 
{
double num1, num2;
printf("escriba el primer numero:");
if (scanf("%lf",&num1)!=1){
    printf("Error:Ingrese un numero real valido.\n");
    return 1;
}

printf("escriba el segundo numero:");
if(scanf("%lf",&num2)!=1){
    printf("Error:Ingrese un numero real valido.\n");
    return 1;
}

double suma = num1+num2;
double resta = num1-num2;
double multiplicacion = num1*num2;

if (num2 == 0) 
{
    printf("Error,no se puede dividir entre 0\n");
}
else
{
   double division = num1/num2;
   printf("division: %.4lf\n",division); 
}

printf("Resultados:\n");
printf("suma: %.4lf\n", suma);
printf("resta: %.4lf\n", resta);
printf("multiplicacion: %.4lf\n", multiplicacion);

return 0;

}
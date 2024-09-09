#include <stdio.h>

int main(void) {
  float b, d, c, e, f;
  int a, g, h;

  printf("Bem vindo à calculadora de salários da Abangu Corporation! Por favor, ensira o seu salário, o número de dependentes em sua casa, há quanto tempo você têm essa casa e o ano atual (formato: salário, dependentes, anos de casa, ano atual):\n");
  
  scanf("%f, %f, %f, %d", &b, &d, &c, &a);

  e = b;
  g = c/5;
  h = c/6;
  
  if (d < 0 || d > 5)
    printf("você passou o limite de dependentes; ");  
  
  if (d >= 1 && d <=5)
    e += b*0.03*d;
  
  if ((d < 4 && d >= 0) && (c >= 5 && c <= 30))
    e += b*0.04*(g);

  if ((d < 4 && d >= 0) && c > 30)
    e += b*0.04*(30/5);

  if (d >= 4 && d <= 5)
    e += b*0.07*(h);

  if (d >= 4 && d <= 5 && c > 42)
    e += b*0.07*(42/6);

  if ((a % 4 == 0) && (a % 400 == 0 || a % 100 != 0))
    e += b*0.01;
    
printf("seu salário ajustado é de R$%f.", e);  
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
  int numero;
  int palpite;
  srand(time(NULL));
  numero = 1 + rand()%100;
  printf("Um numero de 1 a 100 foi sortiado ! \n");
  printf("qual seu palpite ?");
  scanf("d%" ,&palpite );
  while (palpite<1 || palpite>100)
    {
      printf("Seu palpite é invalido, tente novamente: ");
      scanf("%d" , &palpite);
    }
  if (palpite == numero)
  {
    printf("“Parabéns!!! Você acertou");
  }
  if (palpite<numero)
  {
    printf("Você chutou muito baixo! O valor correto é %d\n.", numero);
  }
  if (palpite>numero)
  {
    printf("Você chutou muito alto! O valor correto é %d\n" ,numero);
  }
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
  int numero;
  int palpite;
  int tentativa = 0;
  srand(time(NULL));
  numero = 1 + rand()%100;
  printf("Um numero de 1 a 100 foi sortiado ! \n");
  printf("qual seu palpite ?");
  scanf("%d" ,&palpite );
  tentativa = tentativa + 1;
    printf("Seu numero de tentativa é %d\n" , tentativa);
    if (palpite<numero)
    {
      printf("Você chutou muito baixo!\n");
    }
    if (palpite>numero)
    {
      printf("Você chutou muito alto!\n");
    }
  while (palpite != numero)
  {
    printf("Seu palpite é invalido, tente novamente: ");
    scanf("%d" , &palpite);
    tentativa = tentativa + 1;
    printf("Seu numero de tentativa é %d\n" , tentativa);
    if (palpite<numero)
    {
      printf("Você chutou muito baixo!\n");
    }
    if (palpite>numero)
    {
      printf("Você chutou muito alto!\n");
    }
  }
  printf("Parabens você acertou e seu numero de tentativas foi de %d\n" , tentativa);
}

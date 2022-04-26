#include <stdio.h>
#include <stdlib.h>

int main() {
  int voto = 0;
  int batman = 0, homemAranha = 0, hulk = 0, mulherMaravilha = 0;

  do
  {
    printf("1 - Batman\n"); 
    printf("2 - Homem Aranha\n");
    printf("3 - Hulk\n");
    printf("4 - Mulher Maravilha\n");
    printf("5 - Encerrar votação\n");
    printf("----------------------------\n");
    printf("Digite o número do candidato e pressione ENTER.\n");

    scanf("%d", &voto);

    switch (voto)
    {
      case 1:
        batman++;
        break;
      case 2:
        homemAranha++;
        break;
      case 3:
        hulk++;
        break;
      case 4:
        mulherMaravilha++;
        break;
      case 5:
        break;
      default:
        printf("Voto inválido.\n");
        break;
    }
    system("cls");
  } while (voto < 5);

  printf("\nResultado da votação:\n");
  printf("----------------------------\n");
  if (batman > homemAranha && batman > hulk && batman > mulherMaravilha)
  {
    printf("O vencedor é o Batman.\n");
  }
  else if (homemAranha > batman && homemAranha > hulk && homemAranha > mulherMaravilha)
  {
    printf("O vencedor é o Homem Aranha.\n");
  }
  else if (hulk > batman && hulk > homemAranha && hulk > mulherMaravilha)
  {
    printf("O vencedor é o Hulk.\n");
  }
  else if (mulherMaravilha > batman && mulherMaravilha > homemAranha && mulherMaravilha > hulk)
  {
    printf("O vencedor é a Mulher Maravilha.\n");
  }
  else
  {
    printf("Houve um empate.\n");
  }

  printf("----------------------------\n");
  printf("1 - Batman: %d votos\n", batman);
  printf("2 - Homem Aranha: %d votos\n", homemAranha);
  printf("3 - Hulk: %d votos\n", hulk);
  printf("4 - Mulher Maravilha: %d votos\n", mulherMaravilha);
  printf("----------------------------\n");
}
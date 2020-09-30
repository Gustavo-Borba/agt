1-Leia um número e informe o seu dobro.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  int n, dobro;
  printf("Informe o número\n");
  scanf("%d",&n);
 dobro = n +=n;
 printf("O dobro é:%d\n",dobro);
}

2-Leia duas notas, calcule uma média, e escreva se o aluno foi aprovado ou reprovado, considerando a média para aprovação como 5.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
  float nota1, nota2, media;
  
  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&nota1);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota2);
  
  media = (nota1 + nota2) / 2;
   if (media >=5){
   printf("O aluno foi aprovado com media= %.1f\n",media);
   }else if(media < 5){
    printf("O aluno foi reprovado com media= %.1f\n",media);
   }  
}

3-Leia três números e informe a diferença entre o maior e o menor valor lido
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
     {
     int num1,num2,num3,res;
     printf ("Informe o valor do primeiro número\n");
     scanf ("%d", & num1);
     printf ("Informe o valor do segundo número\n");
     scanf ("%d", & num2);
	 printf ("Informe o valor do terceiro número\n");
     scanf ("%d", & num3);
     if (num1>num2)
        {
        res=(num1-num2);
        printf ("\n A diferença do maior número para o menor número é %d", res);
        }
    else if(num2>num1)
        {
        res=(num2-num1);
        printf ("\n A diferença do maior número para o menor número é %d", res);
        }
		else if(num2>num3){
			 res=(num2-num3);
        printf ("\n A diferença do maior número para o menor número é %d", res);	
		}
		else if(num3>num2){
			 res=(num3-num2);
        printf ("\n A diferença do maior número para o menor número é %d", res);	
		}
  
			else if(num3>num1){
			 res=(num3-num1);
        printf ("\n A diferença do maior número para o menor número é %d", res);	
		}
		else if(num1>num3){
			 res=(num1-num3);
        printf ("\n A diferença do maior número para o menor número é %d", res);	
		}
     }
     
     
     4-Leia quatro números e informe a diferença entre o maior e o menor valor lido.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
     {
     int num1,num2,num3,num4,res;
     printf ("Informe o valor do primeiro número\n");
     scanf ("%d", & num1);
     printf ("Informe o valor do segundo número\n");
     scanf ("%d", & num2);
	 printf ("Informe o valor do terceiro número\n");
     scanf ("%d", & num3);
	 printf ("Informe o valor do quarto número\n");
     scanf ("%d", & num4);
          if (num1>num2 || num2>num1)
        {
        res=(num1-num2 || num2-num1);
        printf ("\n A diferença do maior número para o menor número é %d", res);
        }
		else if(num2>num3 || num3>num2){
			 res=(num2-num3 || num3-num2);
        printf ("\n A diferença do maior número para o menor número é %d", res);	
		}
		else if(num3>num1 || num1>num3){
			 res=(num3-num1 || num1-num3);
        printf ("\n A diferença do maior número para o menor número é %d", res);	
		}
		else if(num4>num1 || num1>num4){
			 res=(num4-num1 || num1-num4);
        printf ("\n A diferença do maior número para o menor número é %d", res);
		}
		else if(num2>num4 || num4>num2){
			 res=(num2-num4 || num4-num2);
        printf ("\n A diferença do maior número para o menor número é %d", res);
		}
		else if(num3>num4 || num4>num3){
			 res=(num3-num4 || num4-num3);
        printf ("\n A diferença do maior número para o menor número é %d", res);
		}

5-Escreva todos os números ímpares de 1 a 50.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
     int main() {
    int imp = 1;
    while (imp <= 50)
    {
       if (imp % 2 != 0)
       {
          printf ("%d\n", imp);   
       }
       imp++; 
     }
}


7-Leia um número inteiro e informe se ele é primo ou não.
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
  int n;
  printf("Digite um número: ");
  scanf("%d", &n);
  bool primo = true;
  for(int i = 2; i < n; i++) {
    if(n % i == 0) {
      primo = false;
    }
  }
  if(primo) {
    printf("O número é primo!\n");
  } else {
    printf ("Bah não é primo!\n");
  }
}

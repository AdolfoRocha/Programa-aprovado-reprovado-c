#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>




int main(void) 
{
      

float n1,n2,n3;
  int media, nf;
  
  setlocale(LC_ALL,"");
  
  printf("Digite a primeira nota: ");
  scanf("%f", &n1);
  
  printf("Digite a segunda nota: ");
  scanf("%f", &n2);
  
  printf("Digite a terceira nota: ");
  scanf("%f", &n3);
  
  printf("Digite o n�mero de faltas: ");
  scanf("%i", &nf);
  
  media = (n1+n2+n3)/3;
  
  if(media>=6 && nf<=5)
  {           
              
              //n�o estou conseguindo mudar a cor do texto mesmo com a fun��o cprintf
              
              // textcolor(BLUE);
        printf("Parab�ns, voc� foi APROVADO!!!");
               
  }
  
  else {
             
            // textcolor(RED);
       printf("Estude mais, voc� est� REPROVADO!");
       }
  
  getch();
  
 
  
   return 0; 
}


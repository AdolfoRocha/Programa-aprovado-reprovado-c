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

    printf("Digite o numero de faltas: ");
 
    scanf("%i", &nf);
 
    media = (n1+n2+n3)/3;
 

 
    if(media>=7 && nf<=5)
 
 {   //nao estou conseguindo mudar a cor do texto mesmo com a funcao cprintf
     // textcolor(BLUE);
        printf("Parabens, voce foi APROVADO!!!");
 }

        else {

             // textcolor(RED);
             printf("Estude mais, voce esta¡ REPROVADO!");
 
             }
getch();
return 0; 
 
}
 

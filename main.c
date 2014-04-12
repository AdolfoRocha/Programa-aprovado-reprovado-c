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

    printf("Digite o número de faltas: ");
 
    scanf("%i", &nf);
 
    media = (n1+n2+n3)/3;
 

 
    if(media>=6 && nf<=5)
 
 {   //não estou conseguindo mudar a cor do texto mesmo com a função cprintf
     // textcolor(BLUE);
        printf("Parabéns, você foi APROVADO!!!");
 }

        else {

             // textcolor(RED);
             printf("Estude mais, você está REPROVADO!");
 
             }
getch();
return 0; 
 
}
 

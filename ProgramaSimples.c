/* Implementar um sorteio de destinos turísticos para decisão randomica de viagem.
Quantidade de destinos, quais serão os destinos e, por fim, o resultado do sorteio */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
    char destination[50][50];
    int x, i;
    printf(
" _  _            _    _____       _  _ __\n| \\| | ___ __ __| |_ |_   _| _ _ (_)| '_ \\\n| .  |/ -_)\\ \\ /|  _|  | |  | '_|| || .__/\n|_|\\_|\\___|/_\\_\\ \\__|  |_|  |_|  |_||_|\n==========================================\n\n");
    printf("How many possibilities of destination: ");
    scanf("%d", &x);
    for (i = 0; i < x; i++){
        printf("Destination %d: ", i+1);
        scanf("%s", destination + i);
    } 
    printf("\n==========================================\n\n");
    srand((unsigned)time(NULL));
    i = (rand() % x);
    printf("Your next trip will be to %s!\n\n", destination + i); 
    return 0;
}
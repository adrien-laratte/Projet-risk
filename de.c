#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void affiche_matrice (int n, int m, char matrice[n][m]){
        for (int i = 0; i<n; i++){
            for (int j = 0; j<m; j++){
                printf ("%c", matrice[i][j]);
               
            }
            printf("\n");
        }
}



void affiche_de(int resulat){

    if (resulat == 1){
        char des[3][7] = {{'/',' ',' ',' ',' ',' ','/'},{'/',' ',' ','.',' ',' ','/'},{'/',' ',' ',' ',' ',' ','/'}};
        affiche_matrice(3, 7, des);
      
    }
    if (resulat == 2){
        char des[3][7] = {{'/',' ',' ',' ',' ',' ','/'},{'/',' ','.',' ','.',' ','/'},{'/',' ',' ',' ',' ',' ','/'}};
        affiche_matrice(3, 7, des);
      
    }
    if (resulat == 3){
        char des[3][7] = {{'/',' ',' ','.',' ',' ','/'},{'/',' ',' ','.',' ',' ','/'},{'/',' ',' ','.',' ',' ','/'}};
        affiche_matrice(3, 7, des);
      
    }
    if (resulat == 4){
        char des[3][7] = {{'/',' ','.',' ','.',' ','/'},{'/',' ',' ',' ',' ',' ','/'},{'/',' ','.',' ','.',' ','/'}};
        affiche_matrice(3, 7, des);
      
    }
    if (resulat == 5){
        char des[3][7] = {{'/',' ','.',' ','.',' ','/'},{'/',' ',' ','.',' ',' ','/'},{'/',' ','.',' ','.',' ','/'}};
        affiche_matrice(3, 7, des);
      
    }
    if (resulat == 6){
        char des[3][7] = {{'/',' ','.',' ','.',' ','/'},{'/',' ','.',' ','.',' ','/'},{'/',' ','.',' ','.',' ','/'}};
        affiche_matrice(3, 7, des);
      
    }
   
}

int main(void) {

    srand(time( NULL ));

// pour les trois de attaquants 
    for (int i = 0; i<3; i++){
       
        int resulat = 0;
        
        while(resulat == 0){
             int nb_aleatoire = rand();
             resulat = nb_aleatoire%7;  
        }
        affiche_de(resulat);
        printf("\n");
    }
    
    printf("\n");

// pour les deux de def
    for (int i = 0; i<2; i++){
       
        int resulat = 0;
        
        while(resulat == 0){
             int nb_aleatoire = rand();
             resulat = nb_aleatoire%7;  
        }
        affiche_de(resulat);
        printf("\n");
    }
    
}
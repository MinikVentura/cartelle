#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define gente 20

typedef struct {
    char *nombre;
    int minutos;
    int partidos;
    int titularidades;
}jugador;

jugador *lJugador[gente];

void crearJugadores(const char *jugadores[]){
    int i=0;

    for (i = 0; i < gente; i++){

        lJugador[i] = malloc(sizeof(jugador));
        if (lJugador[i] == NULL){
            printf("Error al reservar memoria\n");
            exit(1);
        }

        lJugador[i]->nombre = malloc(strlen(jugadores[i]) + 1);
        if (lJugador[i]->nombre == NULL) {
            printf("Error al reservar memoria para nombre\n");
            exit(1);
        }

        strcpy(lJugador[i]->nombre, jugadores[i]);
        lJugador[i]->minutos = 0;
        lJugador[i]->partidos = 0;
        lJugador[i]->titularidades = 0;

    }
}

void printJugadores(jugador lJugador) {
    for (int i = 0; i < gente; i++) {
        printf("Jugador %2d: %-10s  ", i+1, lJugador[i]->nombre);
        printf("PJ: %2d  ", lJugador[i]->partidos);
        printf("Tit: %2d  ", lJugador[i]->titularidades);
        printf("Min: %4d\n", lJugador[i]->minutos);
    }
    printf("\n");
}

int main(){
    const char *nombres[] = {"Conde", "Samu", "Rodrigo", "Vasco", "Izan", "Mihai", "Gabri C", "Chicha", "Cristian", "Yago", "Villa", "Jose", "Brian", "Mateo", "Dani", "Loris"};
    crearJugadores(nombres);
    printJugadores(*lJugador);

    return 0;
}

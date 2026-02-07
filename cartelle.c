#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define gente 23
#define PARTIDOS_EQUIPO 16
char criterioOrden[20];
typedef enum { minutos, partidos, titularidades, goles, minP, amarillas} Criterio;

/*COPA 1*/
const char *titularesC1[] = {"Conde", "Vasco", "Izan","Rodrigo", "Samu", "Gabri V", "Chicha", "Loris", "Yago", "Jose", "Moises"};
const char *suplentesC1[] = {"Requejo", "Mihai", "Villa", "Brian", "Mateo"};
const char *cambiadosC1[] = {"Rodrigo", "Loris", "Yago", "Chicha", "Vasco"};
const char *golesC1[] = {"Moises", "Moises"};
const char *amarillasC1[] = {"Rodrigo", "Moises", "Brian"};
int cambiosC1[5] = {45, 60, 60, 60, 80};


/*JORNADA 1*/
const char *titulares1[] = {"Conde", "Izan", "Rodrigo","Samu", "Mihai", "Gabri V", "Chicha", "Cristian", "Yago", "Villa", "Jose"};
const char *suplentes1[] = {"Vasco", "Brian", "Loris", "Juvenil", "Mateo"};
const char *cambiados1[] = {"Gabri V", "Cristian", "Yago", "Mihai", "Villa"};
const char *goles1[] = {"Brian"};
const char *amarillas1[] = {"Yago", "Rodrigo", "Loris"};
int cambios1[5] = {45, 45, 65, 65, 80};


/*JORNADA 2*/
const char *titulares2[] = {"Conde", "Vasco", "Izan","Rodrigo", "Samu", "Brian", "Chicha", "Loris", "Yago", "Jose", "Villa"};
const char *suplentes2[] = {"Mihai", "Moises", "Juvenil", "Cristian", "Gabri V"};
const char *cambiados2[] = {"Vasco", "Villa", "Yago", "Brian", "Gabri V"};
const char *goles2[] = {};
const char *amarillas2[] = {"Vasco", "Rodrigo"};
int cambios2[5] = {45, 53, 65, 65, 90};

/*JORNADA 3*/
const char *titulares3[] = {"Conde", "Mihai", "Izan","Rodrigo", "Samu", "Gabri V", "Chicha", "Requejo", "Moises", "Jose", "Villa"};
const char *suplentes3[] = {"Brian", "Vasco", "Yago", "Cristian", " "};
const char *cambiados3[] = {"Requejo", "Gabri V", "Mihai", "Chicha", " "};
const char *goles3[] = {"Villa", "Moises", "Moises", "Moises"};
const char *amarillas3[] = {"Cristian"};
int cambios3[5] = {42, 45, 63, 73 , 90};

/*JORNADA 4*/
const char *titulares4[] = {"Berna", "Vasco", "Izan","Rodrigo", "Samu", "Requejo", "Chicha", "Brian", "Moises", "Jose", "Yago"};
const char *suplentes4[] = {"Villa", "Mateo", "Mihai", "Juvenil", "Gabri V"};
const char *cambiados4[] = {"Yago", "Rodrigo", "Chicha", "Vasco", "Moises"};
const char *goles4[] = {"Brian"};
const char *amarillas4[] = {"Vasco"};
int cambios4[5] = {45, 45, 57, 57 , 79};

/*JORNADA 5*/
const char *titulares5[] = {"Berna", "Vasco", "Izan","Rodrigo", "Samu", "Requejo", "Chicha", "Brian", "Yago", "Villa", "Jose"};
const char *suplentes5[] = {"Toni", "Mihai", "Conde", "Gabri V", "Juvenil"};
const char *cambiados5[] = {"Vasco", "Rodrigo", "Jose", "Chicha", "Requejo"};
const char *goles5[] = {"Brian"};
const char *amarillas5[] = {"Requejo", "Izan"};
int cambios5[5] = {45, 60, 76, 76, 82};

/*JORNADA 6*/
const char *titulares6[] = {"Berna", "Mihai", "Izan","Gabri V", "Samu", "Brian", "Yago", "Requejo", "Moises", "Jose", "Villa"};
const char *suplentes6[] = {"Juvenil", "Chicha", "Vasco", "Gabriel", "Cristian"};
const char *cambiados6[] = {"Yago", "Brian", "Requejo", "Villa", "Gabri V"};
const char *goles6[] = {"Moises", "Jose", "Jose", "Izan", "Moises", "Juvenil"};
const char *amarillas6[] = {"Villa", "Cristian"};
int cambios6[5] = {55, 55, 67, 76, 76};

/*JORNADA 7*/
const char *titulares7[] = {"Berna", "Gabri V", "Izan","Rodrigo", "Samu", "Requejo", "Chicha", "Brian", "Moises", "Jose", "Villa"};
const char *suplentes7[] = {"Toni", "Yago", "Vasco", "Juvenil", "Mateo"};
const char *cambiados7[] = {"Gabri V", "Rodrigo", "Brian", "Villa", "Chicha"};
const char *goles7[] = {"Chicha", "Brian", "Chicha", "Juvenil"};
const char *amarillas7[] = {"Brian", "Villa", "Gabri", "Moises"};
int cambios7[5] = {45, 58, 58, 69, 85};

/*JORNADA 8*/
const char *titulares8[] = {"Berna", "Toni", "Izan","Rodrigo", "Samu", "Requejo", "Chicha", "Brian", "Moises", "Jose", "Villa"};
const char *suplentes8[] = {"Yago", "Mihai", "Conde", "Juvenil", "Gabri V"};  
const char *cambiados8[] = {"Villa", "Rodrigo", "Brian", "Chicha", "Jose"};
const char *goles8[] = {"Chicha", "Villa", "Chicha", "Yago", "Moises", "Moises", "Izan"};
const char *amarillas8[] = {"Conde"};
int cambios8[5] = {45, 61, 61, 71, 76};

/*JORNADA 9*/
const char *titulares9[] = {"Berna", "Toni", "Izan","Rodrigo", "Samu", "Requejo", "Chicha", "Brian", "Moises", "Jose", "Yago"};
const char *suplentes9[] = {"Yago", "Vasco", "Conde", "Juvenil", "Gabri V"};
const char *cambiados9[] = {"Villa", "Rodrigo", "Requejo", "Jose", "Gabri V"};
const char *goles9[] = {""};
const char *amarillas9[] = {"Moises", "Chicha"};
int cambios9[5] = {45, 45, 78, 71, 90};

/*JORNADA 10*/
const char *titulares10[] = {"Berna", "Toni", "Noel","Gabri V", "Samu", "Requejo", "Chicha", "Brian", "Moises", "Jose", "Villa"};
const char *suplentes10[] = {"Juvenil", "Izan", "Vasco", "Yago", "Rodrigo"};
const char *cambiados10[] = {"Noel", "Gabri V", "Villa", "Chicha", "Moises"};
const char *goles10[] = {""};
int cambios10[5] = {67, 67, 78, 71, 90};

/*JORNADA 11*/
const char *titulares11[] = {"Berna", "Gabri V", "Izan","Rodrigo", "Samu", "Requejo", "Vasco", "Noel", "Jose", "Villa", "Moises"};
const char *suplentes11[] = {"Toni", "Brian", "Juvenil", "Conde", "Chicha"};
const char *cambiados11[] = {"Rodrigo", "Gabri V", "Villa", "Toni", "Noel"};
const char *goles11[] = {"Izan", "Moises", "Moises", "Jose", "Chicha"};
const char *amarillas11[] = {"Conde"};
int cambios11[5] = {45, 45, 67, 67, 70};

/*COPA 2*/
const char *titularesC2[] = {"Conde", "Vasco", "Izan","Gabri V", "Samu", "Requejo", "Noel", "Brian", "Moises", "Jose", "Villa"};
const char *suplentesC2[] = {"Rodrigo", "Toni", "Chicha", "Juvenil", "Yago"};
const char *cambiadosC2[] = {"Requejo", "Gabri V", "Vasco", "Brian", "Moises"};
const char *golesC2[] = {""};
const char *amarillasC2[] = {"Villa", "Villa", "Gabri V"};
int cambiosC2[5] = {36, 45, 45, 60, 70};

/*JORNADA 12*/
const char *titulares12[] = {"Berna", "Toni", "Izan","Rodrigo", "Samu", "Noel", "Chicha", "Moises", "Yago", "Juvenil", "Jose"};
const char *suplentes12[] = {"Brian", "Mihai", "Villa", "Conde", "Daniel"};
const char *cambiados12[] = {"Toni", "Rodrigo", "Juvenil", "Chicha", "Izan"};
const char *goles12[] = {""};
const char *amarillas12[] = {"Berna"};
int cambios12[5] = {23, 67, 67, 80, 80};

/*JORNADA 13*/
const char *titulares13[] = {"Berna", "Vasco", "Izan","Rodrigo", "Samu", "Noel", "Chicha", "Moises", "Yago", "Jose", "Villa"};
const char *suplentes13[] = {"Mihai", "Juvenil", "Brian", "Conde", "Daniel"};
const char *cambiados13[] = {"Rodrigo", "Yago", "Noel", "Villa", "Vasco"};
const char *amarillas13[] = {"Rodrigo", "Vasco"};
const char *goles13[] = {"Samu", "Moises"};
int cambios13[5] = {45, 62, 62, 74, 89};

/*JORNADA 15*/
const char *titulares15[] = {"Berna", "Mihai", "Izan","Rodrigo", "Samu", "Gabri V", "Chicha", "Moises", "Yago", "Jose", "Brian"};
const char *suplentes15[] = {"Conde", "Noel", "Villa", "Juvenil", "Mateo"};
const char *cambiados15[] = {"Rodrigo", "Gabri V", "Chicha", "Yago", "Mihai"};
const char *amarillas15[] = {"Rodrigo", "Brian", "Izan"};
const char *goles15[] = {""};
int cambios15[5] = {45, 45, 58, 73, 82};



typedef struct {
    char *nombre;
    int minutos;
    int partidos;
    int titularidades;
    int goles;
    int minP;
    int amarillas;
    int rojas;
    int porcentaje;
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
        lJugador[i]->goles = 0;
        lJugador[i]->minP = 0;
        lJugador[i]->amarillas = 0;
        lJugador[i]->rojas = 0;
        lJugador[i]->porcentaje = 0;
    }
}


void printJugadores(void) {
    printf("\n");
    printf("Estadísticas de Jugadores - Total %d jugadores  || Ordenado por %s\n", gente, criterioOrden);
    printf("--------------------------------------------------------------------------------------------\n");
    printf(" #  Nombre       PJ  Tit   Minutos  Goles   TA   TR   Min/PJ   %%Min\n");
    printf("--------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < gente; i++) {
        jugador *j = lJugador[i];

        // Alineación cuidada:
        // - Nombre: 12 caracteres (izquierda)
        // - Números enteros con ancho fijo y alineados a la derecha
        printf("%2d  %-12s %2d  %3d    %4d    %3d    %2d   %2d    %3d  \t%2d%%\n",
               i + 1,
               j->nombre,
               j->partidos,
               j->titularidades,
               j->minutos,
               j->goles,
               j->amarillas,
               j->rojas,
               j->partidos > 0 ? (j->minutos / j->partidos) : 0,
               j->porcentaje
        );
    }

    printf("--------------------------------------------------------------------------------------------\n");
    printf("\n");
}

void jornada(const char *titulares[], const char *suplentes[], const char *goles[], int numGoles, int cambios[], const char *cambiados[], const char *amarillas[], int numAmarillas, int numJornada){

  int numTitulares = 11;
  int numSuplentes = 5;
  
  for (int i = 0; i < numTitulares; i++) {
        for (int j = 0; j < gente; j++) {
        
            if (strcmp(lJugador[j]->nombre, titulares[i]) == 0) {
                lJugador[j]->minutos += 90;
                for (int m = 0; m < numSuplentes; m++) {
                  if (strcmp(lJugador[j]->nombre, cambiados[m]) == 0){ 
                    lJugador[j]->minutos -= (90 -cambios[m]);
                  }
                }
                lJugador[j]->partidos += 1;
                lJugador[j]->titularidades += 1;
                for (int k = 0; k < numGoles; k++){
                  if(strcmp(lJugador[j]->nombre, goles[k]) == 0)lJugador[j]->goles += 1;
                }
                for (int a = 0; a < numAmarillas; a++){
                  if(strcmp(lJugador[j]->nombre, amarillas[a]) == 0)lJugador[j]->amarillas += 1;
                }
                lJugador[j]->minP = lJugador[j]->minutos/lJugador[j]->partidos;
                break;
            }
        }
   }
   
   for (int i = 0; i < numSuplentes; i++) {
        for (int j = 0; j < gente; j++) {
        
            if (strcmp(lJugador[j]->nombre, suplentes[i]) == 0) {
                lJugador[j]->minutos += 90-cambios[i];
                lJugador[j]->partidos += 1;
                lJugador[j]->titularidades += 0;
                for (int k = 0; k < numGoles; k++){
                  if(strcmp(lJugador[j]->nombre, goles[k]) == 0)lJugador[j]->goles += 1;
                }
                for (int a = 0; a < numAmarillas; a++){
                  if(strcmp(lJugador[j]->nombre, amarillas[a]) == 0)lJugador[j]->amarillas += 1;
                }
                lJugador[j]->minP = lJugador[j]->minutos/lJugador[j]->partidos;
                break;
            }
        }
   }
}

int comparar(const void *a, const void *b) {
    jugador *j1 = *(jugador **)a;
    jugador *j2 = *(jugador **)b;

    if (strcmp(criterioOrden, "minutos") == 0) {
        return j2->minutos - j1->minutos;
    }
    else if (strcmp(criterioOrden, "partidos") == 0) {
        return j2->partidos - j1->partidos;
    }
    else if (strcmp(criterioOrden, "titularidades") == 0) {
        return j2->titularidades - j1->titularidades;
    }
    else if (strcmp(criterioOrden, "goles") == 0) {
        return j2->goles - j1->goles;
    }
    else if (strcmp(criterioOrden, "minP") == 0) {
        return j2->minP - j1->minP;
    }
    else if (strcmp(criterioOrden, "amarillas") == 0) {
        return j2->amarillas - j1->amarillas;
    }
    else if (strcmp(criterioOrden, "rojas") == 0) {
        return j2->rojas - j1->rojas;
    }
    else if (strcmp(criterioOrden, "porcentaje") == 0) {
        return j2->porcentaje - j1->porcentaje;
    }

    return 0;
}

void ordenar(const char *criterio) {
    strcpy(criterioOrden, criterio);
    qsort(lJugador, gente, sizeof(jugador*), comparar);
}

void anomalias(){
  for (int j = 0; j < gente; j++) {
    if (strcmp(lJugador[j]->nombre, "Toni") == 0){ //entro y salio en un partido
      lJugador[j]->minutos -= 23;
      lJugador[j]->minP = lJugador[j]->minutos /lJugador[j]->partidos;
    }
    if (strcmp(lJugador[j]->nombre, "Villa") == 0){ //expulsion vs Peroxa
      lJugador[j]->minutos -= 47;
      lJugador[j]->minP = lJugador[j]->minutos /lJugador[j]->partidos;
      lJugador[j]->rojas += 1;
    }
  }
}

void calcularPorcentajes(void) {
    int minutos_totales_posibles = PARTIDOS_EQUIPO * 90;
    
    for (int i = 0; i < gente; i++) {
        if (minutos_totales_posibles > 0) {
            lJugador[i]->porcentaje = 
                (lJugador[i]->minutos * 100LL) / minutos_totales_posibles;
            // Usamos 100LL para evitar overflow y truncamiento prematuro
            if(lJugador[i]->porcentaje == 0) lJugador[i]->porcentaje = 1;
        } else {
            lJugador[i]->porcentaje = 0;
        }
    }
}

int main(){
    const char *nombres[] = {"Conde", "Samu", "Rodrigo", "Vasco", "Izan", "Mihai", "Gabri V", "Chicha", "Cristian", "Yago", "Villa", "Jose", "Brian", "Mateo", "Juvenil","Loris", "Moises", "Berna", "Toni", "Gabriel", "Noel", "Daniel", "Requejo"};
    crearJugadores(nombres);
    jornada(titularesC1, suplentesC1, golesC1, 2, cambiosC1, cambiadosC1, amarillasC1, 3, 1);
    jornada(titulares1, suplentes1, goles1, 1, cambios1, cambiados1, amarillas1, 3, 2);
    jornada(titulares2, suplentes2, NULL, 0, cambios2, cambiados2, amarillas2, 2, 3);
    jornada(titulares3, suplentes3, goles3, 4, cambios3, cambiados3, amarillas3, 1, 4);
    jornada(titulares4, suplentes4, goles4, 1, cambios4, cambiados4, amarillas4, 1, 5);
    jornada(titulares5, suplentes5, goles5, 1, cambios5, cambiados5, amarillas5, 2, 6);
    jornada(titulares6, suplentes6, goles6, 6, cambios6, cambiados6, amarillas6, 2, 7);
    jornada(titulares7, suplentes7, goles7, 4, cambios7, cambiados7, amarillas7, 4, 8);
    jornada(titulares8, suplentes8, goles8, 7, cambios8, cambiados8, amarillas8, 1, 9);
    jornada(titulares9, suplentes9, NULL, 0, cambios9, cambiados9, amarillas9, 2, 10);
    jornada(titulares10, suplentes10, NULL, 0, cambios10, cambiados10, NULL, 0, 11);
    jornada(titulares11, suplentes11, goles11, 5, cambios11, cambiados11, amarillas11, 1, 12);
    jornada(titularesC2, suplentesC2, NULL, 0, cambiosC2, cambiadosC2, amarillasC2, 3, 13);
    jornada(titulares12, suplentes12, NULL, 0, cambios12, cambiados12, amarillas12, 1, 14);
    jornada(titulares13, suplentes13, goles13, 2, cambios13, cambiados13, amarillas13, 2, 15);
    jornada(titulares15, suplentes15, NULL, 0, cambios15, cambiados15, amarillas15, 3, 16);
    anomalias();
    calcularPorcentajes();
    ordenar("minutos");
    printJugadores();

    return 0;
}
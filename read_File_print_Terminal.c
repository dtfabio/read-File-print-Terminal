/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   read_File_print_Terminal.c
 * Author: dtfabio96
 *
 * Created on 2 dicembre 2015, 20.12
 */

#include <stdio.h>
#include <stdlib.h>
#define MAXP 20
#define MAXL 30

int lettura(char file[], char matrice[][MAXL]){
    int i=0;
    FILE *fp;
    fp=fopen(file, "r");
    while(!feof(fp)){
        fscanf(fp,"%s",matrice[i]);
        i++;
      }
    fclose(fp);
    return i;
}
int main(int argc, char** argv) {
    char parole[MAXP][MAXL];
    char file[MAXL];
    int dim;
    int i;
    printf("Inserisci nome file da aprire: ");
    scanf("%s", file);
    dim=lettura(file,parole);

    printf("Parole lette da file:\n");
    for(i=0;i<dim;i++)
        printf("%s\n", parole[i]);

    return (EXIT_SUCCESS);
}

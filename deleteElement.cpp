#include <stdio.h>
#include <stdlib.h>
void deleteElement(int arr[],int n,int element){
    int i,j;
    //recherche de l'�lement � supprimer dans le tableau tri�
    for (i=0;i<n;i++){
        if(arr[i]==element){
            //decalage vers la gauche
            for (j=i;j<n-1;j++){
                arr[j]=arr[j+1];
            }
            n--;//decrementer le taille
        }
            break;
    }

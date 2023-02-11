#include <stdio.h>
#include <stdlib.h>

bool isSubsequence(char * s, char * t){

     int i=0,j=0;//variáveis para iteração
     int m=0,n=0;//variáveis para armazenar comprimento de cada string
     while(s[m]!='\0'){
         m++;
     }
     while(t[n]!='\0'){
         n++;
     }
     for(i=0,j=0;i<m&&j<n;){
         if(s[i]==t[j]){
             //incrementa ambos i&j se os caracteres corresponderem senão incrementa apenas j
             i++;
             j++;
         }
         else{
         j++;
         }
     }

     if(s[i]=='\0'){
         //Para verificar se o fim da string foi alcançado:
         //ou seja, s[i] atinge apenas quando os caracteres de s estão presentes na string t
         return(true);
     }

     return (false);
}
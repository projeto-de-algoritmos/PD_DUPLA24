#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int max(int a, int b);

int longestCommonSubsequence(char * text1, char * text2){

    //definindo tamanho das strings m e n

    int m=strlen(text1);
    int n=strlen(text2);

    int dp[m+1][n+1];
    
    //criação da matrix 2D

    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            dp[i][j]=0;
        }
    }

    //verificação dos matchs entre as linhas e colunas da matriz
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(text1[i]==text2[j]){
                dp[i+1][j+1]=dp[i][j]+1;
            }
            else{
                dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
            }
        }
    }

    return dp[m][n];
}

int max(int a, int b)
{
return (a > b ) ? a : b;
}
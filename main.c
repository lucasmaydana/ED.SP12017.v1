#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"


int main (){
	int i,j;
	int m=3,n =3;
	int** mat= criaMatriz(m,n);
	leiaMatriz(**mat,m,n);
    
	
	for (i=0;i<m; i++){
		for(j=0;j<n;j++){
			printf("%d", mat [i] [j] );
		}		
	
	
	return 0;
}

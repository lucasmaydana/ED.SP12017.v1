#include <stdio.h>
#include <stdlib.h>


int ** criaMatriz (int m, int n){
	int i ;
	
	int **mat;
	
	mat = (int**)malloc(m*sizeof(int*));
    for (i = 0; i = m; i ++){
    	mat [i] = (int *) malloc (n* sizeof (int));
	}	
}


void leiaMatriz (int** mat, int m, int n){
	int i,j;
	
	for (i=0;i<m; i++){
		for(j=0;j<n;j++){
			scanf("%d", mat [i] [j] );
		}
	}
	
}

#include<stdio.h>
int main(){
	int a[10][10],i,j, minrow=0, maxrow,mincol = 0, maxcol;
	printf("Enter the number of rows and columns");
	scanf("%d%d",&maxrow,&maxcol);
    for(i=0;i<maxrow;i++){
	    for(j=0;j<maxcol;j++){
	    	scanf("%d",&a[i][j]);
		}
    } 
    while(minrow < maxcol){
    	for(j = mincol; j < maxcol ; j++){
    		    printf("%d ",a[minrow][j]);
    	}
    	    minrow++;
    	for(i= minrow;i <maxrow;i++){
    		printf("%d ",a[i][maxcol-1]);
    	}
		maxcol--;
		for(j=maxcol-1;j>=mincol;j--){
			printf("%d ",a[maxrow-1][j]);
		}	
		maxrow--;
		for(i=maxrow;i>minrow;i--){
			printf("%d ",a[i-1][mincol]);
			
		}
		mincol++;
    }

	return 0;
}

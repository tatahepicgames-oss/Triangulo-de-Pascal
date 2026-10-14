#include <stdio.h>

int main() {
 int mat[999] [999];
 int i;
 int j;
 int n;
    printf("qual o tamanho do triangulo?\n");
    scanf("%d", &n);
    for(i=0; i<=n;i++){
        for(j=0;j<=i;j++){
        if(j==0 || j==i){
            mat[i][j]= 1;
        }
        else{
            mat[i][j]=mat[i-1][j-1]+mat[i-1][j];
        }
        }
    }
for(i=0; i<=n;i++){
    for(j=0;j<=i;j++){
        printf("%d",  mat[i][j]);
    }
    printf("\n");
}
    return 0;
}
#include <stdio.h>

int main(){
int n;    

do{
printf("Inserire la dimensione del vettore: ");    
scanf("%d",&n);    
}while(n<=0);
int V[n];


for(int i=0;i<n;i++){
printf("Inserire l'elemento alla posizione %d: ",i+1);    
scanf("%d",&V[i]);  
}    

printf("VETTORE\n");
for(int i=0;i<n;i++){
printf("%d ",V[i]);    
}    
    
    
}
    
    
    
    
    

#include <stdio.h>

int main(){
int n;    
int temp;
int j;
int somma=0;
int prodotto=0;

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
    
    

printf("\nadesso ordiniamo con insertion sort\n");
		
	for(int i=1;i<n;i++){ 
            temp=V[i]; 
            j=i-1; 
            while(j>=0 && V[j]>temp){
		V[j+1]=V[j];		
		j--;		
	}
	V[j+1]=temp;
	}




 printf("\nVETTORE ORDINATO\n");

  for (int i = 0; i < n; i++){
    printf("%d ", V[i]);  
    somma=somma+V[i];  
       }
       
printf("\nLa somma degli elementi del vettore è: %d\n",somma);    
  prodotto=somma*n;
  printf("\nIl prodotto tra somma e la dimensione del vettore è: %d\n",prodotto);  

  return 0;






}
    
    
    
    
    

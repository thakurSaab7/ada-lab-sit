#include<stdio.h>
#include<stdlib.h>


int binary(int a[] , int low , int high , int key)
{
     if(low>high) return -1 ; 
     if(low==high) return a[low]==key ? low : -1 ;
     int mid  = (high+low)/2 ;
     
     if(key==a[mid]) return mid ; 
     if(key<a[mid]) return binary(a , low , mid ,key) ; 
     else return binary(a  , mid+1 , high , key) ; 
}

int main(void)
{
	srand(time(NULL)) ; 
int a[100] = {0} ; 
int i = 0 , n = 20 ;

printf("Array is : \n" ) ;
a[0] = rand()%20 ;
  
for(i=1 ; i < n ; i++)
{
	a[i] = a[i-1] + rand()%10 ; 
	printf("%d "  , a[i]) ; 
}
	printf("\n\n") ; 
	int key = 30 ; 

printf("\nKey = %d\n\n" , key) ; 
	
int res = binary(a , 0 , n-1 , key) ; 

printf(res<0? "Element not found !\n" : "Element found at position : %d \n" , res) ; 

}

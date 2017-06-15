#include <stdio.h>
#include <stdlib.h>

int sumRec(int a[],int n)
{
	if(n==0)
	   return 0;
    return(sumRec(a, n-1) + a[n-1]);       
}

int main()
{
	int i,n,a[100];
 
    //n = sizeof(a)/sizeof(a[0]);
 
    scanf("%d", &n); 
 
    // Input the 1st array
    for (i=0; i<n; i++)
       scanf("%d",&a[i]);
 
    // Compute and print result
    printf("%d\n", sumRec(a, n));

    return 0;	
}
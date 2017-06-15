#include <stdio.h>
#include <stdlib.h>

float meanRec(int a[],int n)
{
	if(n==1)
	   return (float)(a[n-1]);
    return(float)((meanRec(a, n-1)*(n-1) + a[n-1])/n);       
}

int main()
{
	int i,n,a[100];
 
    scanf("%d", &n); 
 
    // Input the 1st array
    for (i=0; i<n; i++)
       scanf("%d",&a[i]);
 
    // Compute and print result
    printf("%.2f\n", meanRec(a, n));

    return 0;	
}
#include <stdio.h>
#include <stdlib.h>

int findExtra(int a[],int b[],int n)
{
	int i,temp;
	 for(i=0;i<n;i++){
	 	if(a[i]!=b[i]){
	 		return i;
	 	}
	 }
	return n;
}

int main()
{
	int i,n,a[100],b[10],t;
 
    // Input the number of test cases you want to run
    scanf("%d", &t); 
 
    // One by one run for all input test cases
    while (t--)
    {
        // Input the size of the array
        scanf("%d", &n); 
 
        // Input the 1st array
        for (i=0; i<n; i++)
           scanf("%d",&a[i]);

        // Input the 2nd array
        for (i=0; i<n-1; i++)
           scanf("%d",&b[i]);
 
        // Compute and print result
        printf("%d\n", findExtra(a, b, n));
    }
    return 0;	
}
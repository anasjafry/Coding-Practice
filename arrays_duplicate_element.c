#include <stdio.h>
#include <stdlib.h>

int remove_duplicate(int a[],int n)
{
	int i,b[100],j=0;
	for(i=0;i<n-1;i++){
	 	if(a[i]!=a[i+1]){
            b[j]=a[i];
            j++;
        }
	}
    b[j]=a[n-1];

    for(i=0;i<j+1;i++)
        printf("%d ",b[i]);
    
    printf("\n"); 
	return 0;
}

int main()
{
	int i,n,a[100],t;
 
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
 
        // Compute and print result
        remove_duplicate(a, n);
    }
    return 0;	
}
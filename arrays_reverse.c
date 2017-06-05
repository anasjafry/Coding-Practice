#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	int i,temp,n,a[1000],s,t;

    s = INT_MIN/INT_MAX;
 
    // Input the number of test cases you want to run
    scanf("%d", &t); 
 
    // One by one run for all input test cases
    while (t--)
    {
        // Input the size of the array
        scanf("%d", &n); 
 
        // Input the array
        for (i=0; i<n; i++)
            scanf("%d",&a[i]);

        for (i=0; i<n/2; i++){
            temp=a[i];
            a[i]=a[n+s+(s*i)];        
            a[n+s+(s*i)]=temp;
        }
        for (i=0; i<n; i++)
            printf("%d ",a[i]);
    }
    return 0;	
}
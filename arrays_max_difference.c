#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,n,a[1000],b[1000],t,x,y,len=0,max=0,diff=0;
 
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
        
        for (i=0; i<n; i++)
        {    
            for (j=i+1; j<n; j++)
                if(a[i]==a[j] && (j-i)>max)
                    max=j-i;
                    
        }
        printf("%d",max);     
            

    }
    return 0;	
}
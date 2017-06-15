#include <stdio.h>
#include <stdlib.h>

int merge_array(int a[],int b[],int x,int y)
{
	int i=0,j=0,k=0,c[1000],n;
    n = x+y;
	while(i<x && j<y)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }    
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    } 
    
    while (i < x)
    {
        c[k] = a[i];
        k++;
        i++;
    }
 
    while (j < y)
    {
        c[k] = b[j];
        k++;
        j++;        
    }

    for(i=0; i<n; i++){
        printf("%d ", c[i]);
    }
	return 0;
}

int main()
{
	int i,x,y,a[1000],b[1000],t;
 
    // Input the number of test cases you want to run
    scanf("%d", &t); 
 
    // One by one run for all input test cases
    while (t--)
    {
        // Input the size of the 1st array
        scanf("%d", &x);

        // Input the size of the 2nd array
        scanf("%d", &y); 
 
        // Input the 1st array
        for (i=0; i<x; i++)
           scanf("%d",&a[i]);

       // Input the 2nd array
        for (i=0; i<y; i++)
           scanf("%d",&b[i]);
 
        // Compute and print result
        merge_array(a, b, x, y);
    }
    return 0;	
}
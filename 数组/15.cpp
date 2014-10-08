#include<iostream>
class solution
{
    int trap(int a[],int n)
    {
	int max=0;
	for(int i=0;i<n;i++)
	{
	    if(a[i]>a[max])	
	    max=i;
	    
	
	}
	    int water=0;
	    for(int i=0,peak=0;i<max;i++)
	    {
		if(a[i]>peak) 
		peak=a[i];
		else
		water+=peak-a[i];

	    
	    }
	    for(int i=0,top=0;i<max;i++)
	    {
	    
		if(a[i]>top) 
		top=a[i];
		else
		water+=top-a[i];
		
	    
	    
	    }
	    return water;
    }



};

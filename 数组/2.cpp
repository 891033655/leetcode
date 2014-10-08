#include<iostream>
class solution
{
    int remove2(int a[],int n)
    {
	    if(n==0) return 0;	
	int occur=1;
	int index=0;
	for(int i=1;i<n;i++)
	{
	    if(a[index]==a[i])	
	    {
		if(occur<2) 
		a[++index]=a[i];
		occur++;
	    
	    
	    }
	    else{
	    
	    a[++index]=a[i]
	    occur=1;
	    
	    
	    }	
	
	}
    
    
    
   return index+1; 
    }





};

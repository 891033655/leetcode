#include<iostream>
class solution
{
    int remove(int a[],int n)
    {
	if(n==0) return 0;
	int index=0;
	for(int i=1;i<n;i++)
	{
	    if(a[index]!=a[i])	
	    a[++index]=a[i];

	
	
	}
	    return index+1;  
    
    
    }


};

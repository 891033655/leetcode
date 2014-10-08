#include<iostream>
class solution
{
    int search(int a[],int n,int target)
    {
	int first=0;
	int last=n;
	while(first<last)
	{
	    const int mid=(first+last)/2;
	    if(a[mid]==target)
	    return mid;
	    if(a[first]<a[mid])
	    {
		if(target>a[first]&&target<a[mid]) 
		last=mid;
		else
		first=mid+1;

	    
	    
	    }
	    else 
	   { 
		if(target>a[mid]&&target<=a[last-1])	
	    
		first=mid+1;
		else
		last=mid;
	    }	    
	    
	    
	   return -1; 
	    
	    
	
	}

    
    
    
    }

}

#include<iostream>
class solution 
{
    public:
    bool search(int a[],int n,int target)
    {
	int last=n; int first=0; 
	while(first<last)
	{
	    int mid=(last+first)/2;
	    if(a[mid]==target)
	    return true;
	    if(a[mid]>a[first])
	    {
		if(target>a[first]&&target<a[mid]) 
		last=mid;
		else
		first=mid+1;
	    
	    
	    }
	    else if(a[mid]<a[last])
	    {
		if(target>a[mid]&&a[last-1]>a[mid]) 
		first=mid+1;
		else
		last=mid;
	    
	    }
	    else
	   first++;  
	    
	    }

	return false; 
      } 
    
};

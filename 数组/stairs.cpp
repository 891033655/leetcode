#include<iostream>
class solution
{
    int stairs(int n)
    {
	int prev=0;
	int cur=1;
	for(int i=1;i<=n;i++)
	    {
		int tem=cur;
		cur+=prev;
		prev=tem;
	    
	    
	    }
	return cur; 
    
    }


};

#include<iostream>
class solution
{
    public:
    int climbstairs(int n)
    {
	int prev=0;
	int cur=1;
	for(int i=1;i<=n;i++)
	{
	    int temp=cur;
	    cur+=prev;

	    prev=temp;
	
	}
	return cur;
    
    }


};

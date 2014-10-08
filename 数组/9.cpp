#include<iostream>
class solution
{
    int 3sum(vector<int>&num)
    {
	int sum=INT_MAX;
	int result=0;

	sort(num.begin(),num.end());
	int *last=num.end();
	for(int *a=num.begin();a<prev(last,2);a++)
	{
	
	    int *b=next(a);
	    int *c=prev(last);
	    while(b<c)

	   {   
	    int temp=*a+*b+*c;
	    int cha=abs(temp-target);
	    if(cha<sum)
	    {
	        sum=cha;	
	         result=temp;
	     } 
	    
	    if(temp>target)
	    c--;
	    else
	    b++:
	   }

	}

	return result; 
    }

};


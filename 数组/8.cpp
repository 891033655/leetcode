#include<iostream>
class solution
{
   vevtor<vector<int>> 3sum(vector<int>& num)
 {  
   vector<vector<int>> result;
   sort(num.begin(),num.end);
   int target=0;
   int *last=num.end();
   for(int*a=num.begin();a<prev(last,2);a++)
   {
	int *b=next(a);
	int *c=prev(last);
	while(b<c)
	{
	    if(*a+*b+*c<target)	
	   { 
	      b++;
	   }
	   else if(*a+*b+*c>target)
	   {
		c--; 
	   }
	    else
           { 
	     result.push_back({*a,*b,*c});
	     b++;
	     c--;
		
	    }
	}
   
   
   
	    sort(resulr.begin(),result.end());
	    result.erase(unique(result.begin(),result.end()),result.end());
	    return result;

   }	

}
};

#include<iostream>
class solution
{
    vector<vector<int>> 3sum(vector<int>& num)
    {
	    vector<vector<int>> result; 
	if(num.size()<3) return result; 
	int *last=num.end();
	for(int *a=num.begin();a<prev(last,2);a++)
	{
	    int *b=next(a);
	    int *c=prev(last);
	    while(b<c)
	    {
		if(*a+*b+*c<target) 
		{
		    b++;

		
		}
		if(*a+*b+*c>target) 
		{
		    c--;	
		
		}
		else
		{
		
		    return.push_back({a,b,c});
		    b++;
		    c--;
		
		}
	    }
	
	}
	    sort(return.begin(),return.end());
	    return.erase(unique(return.begin(),return.end()),return.end);
	    return result;
    };

}

#include<iostream>
class solution
{
    int longestconsecutive(vector<int> &num)
    {
	set<int> set;
	
	for(i=0;i<num.size();i++) 
	{
	    set.insert(num[i]);
	
	}
	int max=0;
	while(!set.empty())
	{
	    int count=0;
	    int pivot=*set.begin();
	    set.erase(pivot);
	    count++;
	    int i=1;
	    while(set.count(pivot+i))
	    {
		set.erase(privot+i);
		count++;
		i++;
	    
	    }
	   int i=-1; 
	    while(set.count(privot+i)) 
	    {
		set.erase(privot+i);
		count++;
		i--;
	    
	    }
	   if(count>max) max=count; 
	}
	return max; 
    }

}

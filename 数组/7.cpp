#include<iostream>
class solution
{
    vector<int> twosum(vector<int> &num,int target)
    {
	map<int,int> maping;
	vector<int> result;
	for(int i=0;i<num.size();i++)
	{
	    maping[num[i]]=i;

	}
	for(i=0;i<num.size();i++)
	{
	    int gap=target-num[i];
	    if(maping.find(gap)!=maping.end())
	    {
		result.push_back(i+1);
		result.push_back(maping[gap]+1);
		break;
	    
	    }
	
	}
    
	return result; 
    }
}; 

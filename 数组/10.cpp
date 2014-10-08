#include<iostream>
class solution
{
    vector<vector<int>> 4sum(vector<int>& num)
    {
	map<int,pair<int,int>> cache;
	sort(num.begin(),num.end());
	for(int*a=0;a<num.size();a++)
	    for(int*b=a+1;b<num.size();b++)
		{
		    cache[num[a]+num[b]].push_back(pair<int,int>(a,b);
		    
		
		}
	    for(int c=0;c<num.size();c++) 
		for(int d=c+1;d<num.size();d++)
	    {
		int key=target-num[c]-num[d];
		if(cache.find(key)==cache.end())
		continue;
		vector<pair<int,int>> & vec=cache[key];
		for(int m=0;m<vec.size();m++)
		{
		
		    if(c<=vec[m].second)
		    continue;
		    result.push_back(vec[m].first,vec[m].second,num[c],num[d]);

		
		}
	    
	    }
	    sort(result.begin(),result.end());
	    result.erase(unique(result.begin(),result.end()),result.end());
	    return result;
    }


};

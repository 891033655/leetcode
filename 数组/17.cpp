#include<iostream>
class solution
{
    public:
    vector<int> addone(vector<int>& digits)
    {
	add(digits,1);
	return digits;
    
    }
    private:
    add(vector<int>& digits,int digit)
    {
	int c=digit;
	for(int *a=digits.begin();a!=digits.end();a++)
	{
	    *a+=c;
	    c=*a/10;
	    *a%=10;
	
	
	}
    
	if(c>0)
	    digits.insert(digits.begin(),1); 
    }
};

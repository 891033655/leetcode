#include<iostream>
class solution 
{
   public: 
    int findmedia(int a[],int m,int b[],int n)
    {
	int total=m+n;
	if(total&0x1)
	return findkth(a,m,b,n,total/2+1);
	else
	return (findkth(a,m,b,n,total/2)+findkth(a,m,b,n,total/2+1))/2;
	I
	
    
    }
    private:
    int findkth(int a,int m,int b,int n,int k)
    {
	if(m>n) 
	return findkth(b,n,a,m) 
	if(m==0) return b[k-1];
	if(k==1) return min(a[0],b[0]);
		int ia=min(k/2,m),ib=k-ia;
		if(a[ia-1]<b[ib-1])
		return findkth(a[ia],m-ia,b,n,k-ia);
		else if(a[ia-1]>b[ib-1])
		return findkth(a,m,b[ib],n-ib,k-ib);
		else return a[ia-1];
	
    }
};

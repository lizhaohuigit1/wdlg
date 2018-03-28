# include<iostream>
using namespace std;
int main()
{
	int n,k,counter=0,m,s;
	cout<<"请输入小朋友个数n"<<endl;
	cin>>n;
	cout<<"请输入淘汰数k"<<endl;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++)
	  a[i]=1;
	s=n;
	while(s!=1)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]==1)
			{
				counter++;
				m=counter%10;
				if(m==k||counter%k==0)
				{
					a[i]=0;
					s--;
			        if(s==1)
			        {
			         for(i=0;i<n;i++)
			           {
			        	if(a[i]==1)
			             {
				           cout<<i+1<<"号小朋友胜利"<<endl; 
			             }
			           } 
		            }
	            }
            }
        }
    }
	return 0;
}



# include<iostream>
using namespace std;
int main()
{
	int n,k,counter=0,m,s;
	cout<<"������С���Ѹ���n"<<endl;
	cin>>n;
	cout<<"��������̭��k"<<endl;
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
				           cout<<i+1<<"��С����ʤ��"<<endl; 
			             }
			           } 
		            }
	            }
            }
        }
    }
	return 0;
}



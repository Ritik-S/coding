#include<stdio.h>
#include<math.h>
float  square_root(int n,int k)
{


   float left=0;
   float right=n;
float ans=0;
       while(left<right)
       {
       	float mid=(left+right)/2;
       	mid=mid*pow(10,k);
     mid=(int)(mid);
       	mid/=pow(10,k);



       if((float)(mid*mid)<=n)
       	{
       		ans=mid;

       		  	left=mid*pow(10,k);
       		  	left=(int)left;
       		  	left++;

       		  	left/=pow(10,k);

       	}
       	else
       	{
       		right=mid*pow(10,k);
       		right=(int)right;

       		  	right/=pow(10,k);
       	}
       }

return ans;

}
int main()
{
	int n,k ;
	scanf("%d%d",&n,&k);
	float ans=square_root(n,k);

printf("%g",ans);
}

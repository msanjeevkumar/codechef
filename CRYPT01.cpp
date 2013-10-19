#include <iostream>
#include<cstdio>
using namespace std;
#define getx(z)	((((z)/60)+1)*15)
#define gety(z)	((((z)/30)+1)*10)
inline int readint( )
{
	int n = 0 , s = 1 ; char p = getchar_unlocked( ) ;
	if(p == '-') s = -1 ;
	while((p < '0' || p > '9') && p != EOF && p != '-')
		p = getchar_unlocked( ) ;
	if(p == '-') s=-1 , p=getchar_unlocked( );
	while(p >= '0' && p <= '9')
		n = (n << 3) + (n << 1) + (p - '0'), p = getchar_unlocked( ) ;
	return n * s ;
}
/*int getx(int z)
{
	return (z/60+1)*15;
}
int gety(int z)
{
	return (z/30+1)*10;
 
}*/
int main() {
	// your code goes here
	int t,k;
	k=t=readint();
	while(t--)
	{
		int n,x=0,y=0,z;
		n=readint();
		for(int i=0;i<n;i++)
		{
			z=readint();
			if(z==0){
				x+=0;
				y+=0;
			}
			else{
			x+=getx(z);
			y+=gety(z);
			}
		}
		if(x<y)
			printf("Case %d: Frag %d\n",(k-t),x);
		else if(x>y)
			printf("Case %d: Respawn %d\n",(k-t),y);
		else
			printf("case %d: Respawn Frag %d\n",(k-t),y);
	}
	return 0;
}
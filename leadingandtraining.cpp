#include<iostream.h>
#include<conio.h>
void main()
{	
clrscr();
char s,l[20],r[10],lead[10],trail[10];
int n,j,m;
for(int i=0;i<10;i++)
{
lead[i]=NULL;
trail[i]=NULL;
}
cout<<"\nenter total no. of productions";
cin>>n;
int k=0;
m=0;
for(i=0;i<n;i++)
{
cout<<"\nenter the LHS of production";
cin>>l[i];
cout<<"\nenter the RHS of production";
cin>>r;
for(int j=0;j<2;j++)
{
if((r[j]=='(') || r[j]==')' || r[j]=='*' || r[j]=='+' || r[j]=='-' || r[j]=='/' )
{
lead[k]=r[j];
k=k+1;
}
if((r[j]=='i') && (r[j+1]=='d'))
{
lead[k]=r[j];
lead[k+1]=r[j+1];
k=k+1;
}
}
for(j=1;j<=2;j++)
{
if((r[j]=='(') || r[j]==')' || r[j]=='*' || r[j]=='+' || r[j]=='-' || r[j]=='/' )
{
trail[m]=r[j];
m=m+1;
}
if((r[j-1]=='i') && (r[j]=='d'))
{
trail[m]=r[j-1];
trail[m+1]=r[j];
m=m+1;
}
}

}
cout<<"\nthe Leading(A) is :\n";
cout<<"{  ";
for(i=0;i<k;i++)
{
if((lead[i]=='i') && (lead[i+1]=='d'))
cout<<lead[i]<<lead[i+1]<<"  ";
else
cout<<lead[i]<<"  ";
}
cout<<"}";
cout<<"\nthe Trailing(A) is :\n";
cout<<"{  ";
for(i=0;i<m;i++)
{
if((trail[i]=='i') && (trail[i+1]=='d'))
cout<<trail[i]<<trail[i+1]<<"  ";
else
cout<<trail[i]<<"  ";
}
cout<<"}";

getch();
}


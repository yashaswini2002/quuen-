#include<stdio.h>
#include<math.h>

int brd[20],cnt;

int main()
{
int n,i,j;
n=4;
void queen(int r,int n);

queen(1,n);
return 0;
}

void print(int n)
{
int i,j;
printf("\n\nSolution %d:\n\n",++cnt);

for(i=1;i<=n;++i)
printf("\t%d",i);

for(i=1;i<=n;++i)
{
printf("\n\n%d",i);
for(j=1;j<=n;++j)
{
if(brd[i]==j)
printf("\tQ");
else
printf("\t-");
}
}
}

int place(int r,int c)
{
int i;
for(i=1;i<=r-1;++i)
{
if(brd[i]==c)
return 0;
else
if(abs(brd[i]-c)==abs(i-r))
return 0;
}

return 1;
}

void queen(int r,int n)
{
int c;
for(c=1;c<=n;++c)
{
if(place(r,c))
{
brd[r]=c;
if(r==n)
print(n);
else
queen(r+1,n);
}
}
}

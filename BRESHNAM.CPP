#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
float temp,i=0,icng,x,y,dx,dy,s1,s2,x1,x2,y1,y2;
int gd=DETECT,gm=0;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cout<<"x1:";
cin>>x1;
cout<<"y1:";
cin>>y1;
cout<<"x2:";
cin>>x2;
cout<<"y2:";
cin>>y2;
dx=abs(x2-x1);
dy=abs(y2-y1);
cout<<"dx:"<<dx;
cout<<"dy:"<<dy;
x=x1;
y=y1;
if((x2-x1)>0)
{
s1=1;
}
else
{
s1=-1;
}


if((y2-y1)>0)
{
s2=1;
}
else
{
s2=-1;
}
float p=2*dy-dx;

if(dy>dx)
{
temp=dx;
dx=dy;
dy=temp;
icng=1;
}
else
{
icng=0;
}
for(i=1;i<dx;i++)
{
putpixel(int(x),int(y),14);
while(p>0)
{
if(icng==1)
x=x+s1;
else
y=y+s2;
p=p-2*dx;
}
if(icng==1)
y=y+s2;
else
x=x+s1;
p=p+2*dy;
i=i+1;
}
getch();
closegraph();
}
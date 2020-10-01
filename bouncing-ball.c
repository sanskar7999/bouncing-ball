#include<stdio.h> //adding important libraries of c

#include<graphics.h>

#include<conio.h>

#include<dos.h>

int main()

{
//initialization
int gd,gm,x,y,r,i,j=0,maxx,maxy,high;

detectgraph(&gd,&gm);

initgraph(&gd,&gm,"C:\\TC\\BGI");

setcolor(WHITE);

line(0,401,639,401);

x=20;

y=380;

r=20;

setcolor(RED);

circle(x,y,r);

setfillstyle(SOLID_FILL,RED);

floodfill(x,y,RED);

high=300;

delay(1000);



while(high>=0)

{

for(i=0;i<=high;i++)

 {cleardevice();

 setcolor(WHITE);

 line(0,401,639,401);

 if(i%4==0)

       j++;

  x=20+j;

  y=380-i;

  setcolor(RED);

  circle(x,y,r);

  floodfill(x,y,RED);

  delay(3);

  }

  for(i=high;i>=0;i--)

   {

    cleardevice();

    setcolor(WHITE);

    line(0,401,639,401);

    if(i%5==0)

	j++;

    x=20+j;

    y=380-i;

    setcolor(RED);

    circle(x,y,r);

    floodfill(x,y,RED);

    delay(1);

   }

   high=high-40;

}

getch();

closegraph();

return 0;

}

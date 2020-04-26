#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int xmid, ymid;



void centerstruct()
{
	int poly[8];
	rectangle(xmid-95,ymid-70,xmid+95,ymid-20);
	rectangle(xmid-90,ymid-80,xmid+90,ymid-70);
	line(xmid-115,ymid-65,xmid-115,ymid-20);
	line(xmid+115,ymid-65,xmid+115,ymid-20);
	delay(200);
	rectangle(xmid-20,ymid-50,xmid+20,ymid-30);
	setfillstyle(7,LIGHTGRAY);
	delay(200);
	floodfill(xmid-10,ymid-35,WHITE);
	rectangle(xmid-125,ymid-20,xmid+125,ymid-15); 
	rectangle(xmid-115,ymid-15,xmid+115,ymid);  
	rectangle(xmid-60,ymid+105,xmid+60,ymid+140);
	poly[0]=xmid-60;
	poly[1]=ymid+105;
	poly[2]=xmid+60;
	poly[3]=ymid+105;
	poly[4]=xmid+60;
	poly[5]=ymid+140;
	poly[6]=xmid-60;
	poly[7]=ymid+140;
	setfillstyle(2,DARKGRAY);
	fillpoly(4,poly);
}


void pillars()
{
	int i=0,j=0;
	int poly1[8],poly2[8];
	rectangle(xmid-95,ymid+82,xmid+96,ymid+87); 
	delay(200);
	setfillstyle(1,DARKGRAY);
		poly1[0]=xmid-95;
		poly1[1]=ymid+82;
		poly1[2]=xmid+96;
		poly1[3]=ymid+82;
		poly1[4]=xmid+96;
		poly1[5]=ymid+87;
		poly1[6]=xmid-95;
		poly1[7]=ymid+87;
		fillpoly(4,poly1);

	for(j=0;j<4;j++)                   
	{
		rectangle(xmid-110+i,ymid,xmid-95+i,ymid+140);
		rectangle(xmid-90+i,ymid,xmid-75+i,ymid+140);
		setfillstyle(6,WHITE);
		poly1[0]=xmid-110+i;
		poly1[1]=ymid;
		poly1[2]=xmid-95+i;
		poly1[3]=ymid;
		poly1[4]=xmid-95+i;
		poly1[5]=ymid+140;
		poly1[6]=xmid-110+i;
		poly1[7]=ymid+140;
		fillpoly(4,poly1);
		poly2[0]=xmid-90+i;
		poly2[1]=ymid;
		poly2[2]=xmid-75+i;
		poly2[3]=ymid;
		poly2[4]=xmid-75+i;
		poly2[5]=ymid+140;
		poly2[6]=xmid-90+i;
		poly2[7]=ymid+140;
		fillpoly(4,poly2);
		i=i+62;
		delay(200);
	}
	rectangle(xmid-112,ymid+140,xmid-93,ymid+150);  
	rectangle(xmid+94,ymid+140,xmid+113,ymid+150); 
}


void stairs()
{       int j=0,i=0,k=0;
	rectangle(xmid-93,ymid+140,xmid+94,ymid+146);     
	rectangle(xmid-93,ymid+146,xmid+94,ymid+148);  
	rectangle(xmid-93,ymid+148,xmid+94,ymid+150); 
	for(j=0;j<12;j++)                           
	{
		rectangle(xmid-122-i,ymid+150+k,xmid+123+i,ymid+152+k);
		i=i+5;
		k=k+2;
		delay(200);
	}
}


void f4()
{
	rectangle(xmid-310,ymid-75,xmid-90,ymid-70);  
	rectangle(xmid+310,ymid-75,xmid+90,ymid-70);     
	rectangle(xmid-315,ymid-70,xmid-95,ymid-65); 
	rectangle(xmid+315,ymid-70,xmid+95,ymid-65); 
	line(xmid-310,ymid-65,xmid-310,ymid-18);    
	line(xmid+310,ymid-65,xmid+310,ymid-18);    
	line(xmid-305,ymid-65,xmid-305,ymid-18);    
	line(xmid+305,ymid-65,xmid+305,ymid-18);    
}

void winf4()
{       int i=0,j=0;
	for(j=0;j<5;j++)
	{
		rectangle(xmid-275+i,ymid-50,xmid-255+i,ymid-30);
		rectangle(xmid-272+i,ymid-47,xmid-258+i,ymid-33);
		line(xmid-265+i,ymid-47,xmid-265+i,ymid-33);
		i=i+30;
	}
	i=0;
	for(j=0;j<5;j++)
	{
		rectangle(xmid+275-i,ymid-50,xmid+255-i,ymid-30);
		rectangle(xmid+272-i,ymid-47,xmid+258-i,ymid-33);
		line(xmid+265-i,ymid-47,xmid+265-i,ymid-33);
		i=i+30;
	}
}


void f3()
{
	line(xmid-315,ymid-18,xmid-125,ymid-18);
	line(xmid-315,ymid-13,xmid-115,ymid-13);
	line(xmid-315,ymid-18,xmid-315,ymid-13);
	line(xmid+315,ymid-18,xmid+125,ymid-18);
	line(xmid+315,ymid-13,xmid+115,ymid-13);
	line(xmid+315,ymid-18,xmid+315,ymid-13);
	line(xmid-310,ymid-13,xmid-310,ymid+80);
	line(xmid+310,ymid-13,xmid+310,ymid+80);
	line(xmid-305,ymid-13,xmid-305,ymid+80);
	line(xmid+305,ymid-13,xmid+305,ymid+80);
}


void winf3()
{	int i=0,j=0;
	for(j=0;j<4;j++)
	{
		rectangle(xmid-280+i,ymid,xmid-250+i,ymid+65);
		rectangle(xmid-277+i,ymid+3,xmid-253+i,ymid+62);
		line(xmid-265+i,ymid+3,xmid-265+i,ymid+62);
		i=i+40;
	}
	i=0;
	for(j=0;j<4;j++)
	{
		rectangle(xmid+280-i,ymid,xmid+250-i,ymid+65);
		rectangle(xmid+277-i,ymid+3,xmid+253-i,ymid+62);
		line(xmid+265-i,ymid+3,xmid+265-i,ymid+62);
		i=i+40;
	}
}


void f2()
{
      rectangle(xmid-315,ymid+80,xmid-110,ymid+85);  
      rectangle(xmid+315,ymid+80,xmid+111,ymid+85);  
      rectangle(xmid-310,ymid+85,xmid-305,ymid+140); 
      rectangle(xmid+310,ymid+85,xmid+305,ymid+140); 

}


void winf2()
{       int i=0,j=0;
	for(j=0;j<5;j++)
	{
		rectangle(xmid-275+i,ymid+100,xmid-255+i,ymid+126);
		rectangle(xmid-272+i,ymid+103,xmid-258+i,ymid+123);
		line(xmid-265+i,ymid+103,xmid-265+i,ymid+123);
		i=i+30;
	}
	i=0;
	for(j=0;j<5;j++)
	{
		rectangle(xmid+275-i,ymid+100,xmid+255-i,ymid+126);
		rectangle(xmid+272-i,ymid+103,xmid+258-i,ymid+123);
		line(xmid+265-i,ymid+103,xmid+265-i,ymid+123);
		i=i+30;
	}

}


void f1()
{
      rectangle(xmid-315,ymid+140,xmid-112,ymid+145); 
      rectangle(xmid+315,ymid+140,xmid+113,ymid+145); 
      rectangle(xmid-310,ymid+145,xmid-305,ymid+170); 
      rectangle(xmid+310,ymid+145,xmid+305,ymid+170); 
      line(0,ymid+170,xmid*2,ymid+170); 
}


void fillfloor()
{
	setfillstyle(1,DARKGRAY);
	floodfill(xmid-300,ymid-60,WHITE);  
	floodfill(xmid+300,ymid-60,WHITE);  
	floodfill(xmid-300,ymid+150,WHITE);              
	floodfill(xmid+300,ymid+150,WHITE);                
	floodfill(xmid-300,ymid,WHITE);                 
	floodfill(xmid+300,ymid,WHITE);                
	floodfill(xmid-300,ymid+90,WHITE);    
	floodfill(xmid+300,ymid+90,WHITE);  
	floodfill(xmid-250,ymid-73,WHITE); 
	floodfill(xmid+250,ymid-73,WHITE); 

}

void fillcenter()
{
	setfillstyle(1,LIGHTGRAY);
	floodfill(xmid-100,ymid-60,WHITE);       
	floodfill(xmid,ymid-60,WHITE);       
	floodfill(xmid+100,ymid-60,WHITE);      
	floodfill(xmid,ymid-10,WHITE); 
	floodfill(xmid,ymid+143,WHITE);  
	floodfill(xmid,ymid-75,WHITE);	
	floodfill(xmid-100,ymid+145,WHITE);  
	floodfill(xmid+100,ymid+145,WHITE);  
}
int main(void)
{
    
   int gdriver = DETECT, gmode, errorcode;
   
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

   
   errorcode = graphresult();
   
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();

      exit(1);    
   }

   xmid=getmaxx()/2;
   ymid=getmaxy()/2;


   centerstruct();
   delay(200);
   pillars();
   delay(200);
   f4();
   delay(200);
   f3();
   delay(200);
   f2();
   delay(200);
   f1();
   delay(200);
   winf4();
   delay(200);
   winf3();
   delay(200);
   winf2();
   delay(200);
   stairs();
   delay(200);
   fillcenter();
   delay(200);
   fillfloor();
   delay(200);
   settextstyle(8,0,5);
   setcolor(RED);
   outtextxy(110,40,"LA CASA DE PAPEL");
   getch();
   cleardevice();


setcolor(13);
rectangle(1,1,639,479);
rectangle(15,15,624,464);
setfillstyle(6,11);

floodfill(2,2,13);
settextstyle(8,0,3);
setcolor(5);

outtextxy(150,100,"COMPUTER GRAPHICS PROJECT");
outtextxy(150,200,"MADE BY : Nidhi Bhanushali,") ;
outtextxy(165,250,"Aziz Bohra and Zubin Goradia");
outtextxy(150,350,"CLASS: SE COMPS \t\t BATCH: S1");
outtextxy(150,400,"ROLL NO: 04, 07, 16");



   
   getch();
   closegraph();
   return 0;
}
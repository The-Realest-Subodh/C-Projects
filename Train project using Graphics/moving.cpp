#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
int main()
{

int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");

for(int i=0;i<640;i++)
{

//background
outtextxy(450,60,".");
outtextxy(480,50,"'");
outtextxy(410,199,"'");
outtextxy(450,290,"'");
outtextxy(440,190,".");
outtextxy(400,260,"'");
outtextxy(580,250,"'");
outtextxy(410,199,"'");
outtextxy(550,340,".");
outtextxy(640,190,"'");
outtextxy(200,40,"'");
outtextxy(230,10,".");
outtextxy(550,99,"'");
outtextxy(100,50,"'");
outtextxy(400,100,".");

//moon
setfillstyle(SOLID_FILL,15);
circle(295,60,40);
floodfill(296,70,15);

outtextxy(450,60,"'");
outtextxy(480,50,".");
outtextxy(410,199,"'");
outtextxy(450,290,"'");
outtextxy(440,190,"'");
outtextxy(400,260,"'");
outtextxy(580,250,".");
outtextxy(110,299,"'");
outtextxy(550,340,"'");
outtextxy(640,190,"'");
outtextxy(200,40,"'");
outtextxy(230,10,".");
outtextxy(550,99,"'");
outtextxy(100,50,"'");
outtextxy(400,100,"'");
outtextxy(150,60,".");
outtextxy(280,50,"'");
outtextxy(310,199,"'");
outtextxy(50,290,"'");
outtextxy(120,190,"'");
outtextxy(100,260,"'");
outtextxy(280,250,"'");
outtextxy(30,199,"'");
outtextxy(250,240,"'");
outtextxy(340,190,".");

// text
 settextstyle(3,0,2);
 outtextxy(200,448,"Created By Subodh");

line(0,424,700,424);

//first box
setfillstyle(SOLID_FILL,12);
rectangle(40+i,340,120+i,407);
floodfill(41+i,350,15);

setfillstyle(SOLID_FILL,4);
rectangle(30+i,330,130+i,340);
floodfill(31+i,331,15);

setfillstyle(SOLID_FILL,9);
rectangle(50+i,360,70+i,380);
floodfill(51+i,370,15);

setfillstyle(SOLID_FILL,9);
rectangle(90+i,360,110+i,380);
floodfill(91+i,370,15);

setfillstyle(SOLID_FILL,11);
rectangle(120+i,390,150+i,398);
floodfill(121+i,391,15);

setcolor(8);
setfillstyle(SOLID_FILL,8);
circle(55+i,410,12);
floodfill(56+i,420,8);

setfillstyle(SOLID_FILL,8);
circle(99+i,410,12);
floodfill(100+i,420,8);

setcolor(15);

//second box
setfillstyle(SOLID_FILL,7);
rectangle(150+i,340,230+i,407);
floodfill(151+i,341,15);

setfillstyle(SOLID_FILL,4);
rectangle(140+i,330,240+i,340);
floodfill(141+i,331,15);

setfillstyle(SOLID_FILL,9);
rectangle(160+i,360,180+i,380);
floodfill(161+i,361,15);

setfillstyle(SOLID_FILL,9);
rectangle(200+i,360,220+i,380);
floodfill(201+i,361,15);

setcolor(8);
setfillstyle(SOLID_FILL,8);
circle(165+i,410,12);
floodfill(166+i,411,8);

setfillstyle(SOLID_FILL,8);
circle(210+i,410,12);
floodfill(211+i,411,8);

setcolor(15);

//engine
setfillstyle(SOLID_FILL,10);
rectangle(260+i,340,310+i,407);
floodfill(261+i,341,15);

setfillstyle(SOLID_FILL,4);
rectangle(250+i,330,320+i,340);
floodfill(251+i,331,15);

setcolor(8);
setfillstyle(SOLID_FILL,8);
circle(284+i,406,18);
floodfill(285+i,416,8);

setcolor(15);

setfillstyle(SOLID_FILL,3);
rectangle(310+i,370,380+i,407);
floodfill(311+i,380,15);

setfillstyle(SOLID_FILL,5);
rectangle(270+i,350,290+i,370);
floodfill(271+i,360,15);

setcolor(8);
setfillstyle(SOLID_FILL,8);
circle(328+i,410,12);
floodfill(329+i,420,8);

setfillstyle(SOLID_FILL,8);
circle(364+i,410,12);
floodfill(365+i,420,8);

setcolor(15);

//fire
setfillstyle(SOLID_FILL,1);
rectangle(350+i,330,365+i,370);
floodfill(351+i,340,15);

setfillstyle(SOLID_FILL,4);
rectangle(347+i,325,367+i,330);
floodfill(348+i,326,15);

setfillstyle(SOLID_FILL,1);
rectangle(230+i,390,260+i,398);
floodfill(231+i,391,15);

setcolor(15);

//light
setfillstyle(SOLID_FILL,14);
rectangle(380+i,380,386+i,395);
floodfill(381+i,381,15);

//smoke
setfillstyle(SOLID_FILL,15);
circle(350+i,310,5);
floodfill(351+i,311,15);

setfillstyle(SOLID_FILL,15);
circle(355+i,319,3);
floodfill(356+i,320,15);

setfillstyle(SOLID_FILL,15);
circle(365+i,310,4);
floodfill(366+i,311,15);

setfillstyle(SOLID_FILL,15);
circle(354+i,300,3);
floodfill(355+i,301,15);

setfillstyle(SOLID_FILL,15);
circle(350+i,290,5);
floodfill(351+i,291,15);

setfillstyle(SOLID_FILL,15);
circle(344+i,300,3);
floodfill(345+i,301,15);

delay(25);
cleardevice();
}
}


#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void go();
void stop();
void start();

int main()
{

int s,i;
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");


s=0;
for(i=0;i<400;i++)
{
if(i<50)
{

circle(200+s,360,9);
circle(170+s,352,2);
circle(168+s,352,2);
circle(144+s,352,2);
circle(146+s,352,2);
floodfill(201+s,361,WHITE);
floodfill(199+s,359,WHITE);
circle(130+s,360,9);
floodfill(131+s,361,WHITE);
floodfill(129+s,359,WHITE);
line(119+s,360,105+s,360);
line(105+s,360,105+s,345);
line(105+s,345,115+s,345);
line(115+s,345,235+s,345);
line(200+s,340,180+s,345);
line(115+s,345,135+s,330);
line(135+s,330,180+s,330);
line(160+s,330,160+s,345);
rectangle(135+s,333,157+s,342);
rectangle(165+s,333,181+s,341);
circle(170+s,338,3);
floodfill(169+s,339,WHITE);
line(197+s,341,232+s,342);
line(133+s,342,125+s,342);
line(180+s,330,200+s,340);
line(235+s,340,235+s,355);
line(235+s,358,213+s,358);
circle(235+s,345,3);
circle(235+s,345,2);
line(190+s,360,140+s,360);

s=s+3;
delay(20);
cleardevice();
go();
}
else if(i>50&&i<100)
{
circle(200+s,360,9);
circle(170+s,352,2);
circle(168+s,352,2);
circle(144+s,352,2);
circle(146+s,352,2);
floodfill(201+s,361,WHITE);
floodfill(199+s,359,WHITE);
circle(130+s,360,9);
floodfill(131+s,361,WHITE);
floodfill(129+s,359,WHITE);
line(119+s,360,105+s,360);
line(105+s,360,105+s,345);
line(105+s,345,115+s,345);
line(115+s,345,235+s,345);
line(200+s,340,180+s,345);
line(115+s,345,135+s,330);
line(135+s,330,180+s,330);
line(160+s,330,160+s,345);
rectangle(135+s,333,157+s,342);
rectangle(165+s,333,181+s,341);
circle(170+s,338,3);
floodfill(169+s,339,WHITE);
line(197+s,341,232+s,342);
line(133+s,342,125+s,342);
line(180+s,330,200+s,340);
line(235+s,340,235+s,355);
line(235+s,358,213+s,358);
circle(235+s,345,3);
circle(235+s,345,2);
line(190+s,360,140+s,360);

delay(20);
cleardevice();
stop();
}
else if(i>100&&i<150)
{
circle(200+s,360,9);
circle(170+s,352,2);
circle(168+s,352,2);
circle(144+s,352,2);
circle(146+s,352,2);
floodfill(201+s,361,WHITE);
floodfill(199+s,359,WHITE);
circle(130+s,360,9);
floodfill(131+s,361,WHITE);
floodfill(129+s,359,WHITE);
line(119+s,360,105+s,360);
line(105+s,360,105+s,345);
line(105+s,345,115+s,345);
line(115+s,345,235+s,345);
line(200+s,340,180+s,345);
line(115+s,345,135+s,330);
line(135+s,330,180+s,330);
line(160+s,330,160+s,345);
rectangle(135+s,333,157+s,342);
rectangle(165+s,333,181+s,341);
circle(170+s,338,3);
floodfill(169+s,339,WHITE);
line(197+s,341,232+s,342);
line(133+s,342,125+s,342);
line(180+s,330,200+s,340);
line(235+s,340,235+s,355);
line(235+s,358,213+s,358);
circle(235+s,345,3);
circle(235+s,345,2);
line(190+s,360,140+s,360);

delay(20);
cleardevice();
start();

}
else if(i>150&&i<200)
{
circle(200+s,360,9);
circle(170+s,352,2);
circle(168+s,352,2);
circle(144+s,352,2);
circle(146+s,352,2);
floodfill(201+s,361,WHITE);
floodfill(199+s,359,WHITE);
circle(130+s,360,9);
floodfill(131+s,361,WHITE);
floodfill(129+s,359,WHITE);
line(119+s,360,105+s,360);
line(105+s,360,105+s,345);
line(105+s,345,115+s,345);
line(115+s,345,235+s,345);
line(200+s,340,180+s,345);
line(115+s,345,135+s,330);
line(135+s,330,180+s,330);
line(160+s,330,160+s,345);
rectangle(135+s,333,157+s,342);
rectangle(165+s,333,181+s,341);
circle(170+s,338,3);
floodfill(169+s,339,WHITE);
line(197+s,341,232+s,342);
line(133+s,342,125+s,342);
line(180+s,330,200+s,340);
line(235+s,340,235+s,355);
line(235+s,358,213+s,358);
circle(235+s,345,3);
circle(235+s,345,2);
line(190+s,360,140+s,360);

s=s+3;
delay(20);
cleardevice();
go();

}
}
getch();
}


void go()
{
circle(450,100,10);
circle(450,130,10);
circle(450,160,10);
line(450,154,450,165);
line(450,154,444,158);
line(450,154,456,158);

rectangle(447,180,451,376);
rectangle(433,80,465,180);
settextstyle(3,0,2);

line(0,376,640,376);
line(0,410,640,410);

}


void stop()
{
setfillstyle(1,RED);
circle(450,100,10);
floodfill(452,102,WHITE);
circle(450,130,10);
circle(450,160,10);

rectangle(447,180,451,376);
rectangle(433,80,465,180);
settextstyle(3,0,2);

line(0,376,640,376);
line(0,410,640,410);
}


void start()
{
circle(450,100,10);
setfillstyle(1,GREEN);
circle(450,130,10);
floodfill(452,132,BLACK);
circle(450,160,10);

rectangle(447,180,451,376);
rectangle(433,80,465,180);
settextstyle(3,0,2);

line(0,400,700,400);
line(0,410,640,410);
outtextxy(200,448,"Created By Subodh");
}

#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main ()
{

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

   //For M
 line(50,50,50,90);
 line(50,50,60,70);
 line(70,50,60,70);
 line(70,50,70,90);
  //For I
    line(80,50,80,90);
    line(75,50,85,50);
    line(75,90,85,90);

    //For R
    line(100,50,100,90);
    line(100,50,120,50);
    line(120,50,120,70);
    line(100,70,120,70);
    line(100,70,120,90);

    //For A
    line(140,50,130,90);
    line(140,50,150,90);
    line(135,70,145,70);

    //For Z
    line(160,50,180,50);
    line(160,90,180,50);
    line(160,90,180,90);

    //For C
    line(50,120,50,150);
    line(50,120,65,120);
    line(50,150,65,150);

    //For S
    line(80,120,95,120);
    line(80,120,80,135);
    line(80,135,95,135);
    line(95,135,95,150);
    line(80,150,95,150);

    //For E
    line(110,120,110,150);
    line(110,120,125,120);
    line(110,135,125,135);
    line(110,150,125,150);

    //For 2
    line(140,120,155,120);
    line(155,120,155,135);
    line(155,135,140,135);
    line(140,135,140,150);
    line(140,150,155,150);

    //For 0
    line(170,120,170,150);
    line(170,120,185,120);
    line(185,120,185,150);
    line(170,150,185,150);

    //For 0
    line(200,120,200,150);
    line(200,120,215,120);
    line(215,120,215,150);
    line(200,150,215,150);


    //For 1
    line(230,120,230,150);

    //For 0
    line(245,120,245,150);
    line(245,120,260,120);
    line(260,120,260,150);
    line(245,150,260,150);

    //For 1
    line(275,120,275,150);

    //for 9
    line(290,120,290,135);
    line(290,120,305,120);
    line(305,120,305,150);
    line(290,135,305,135);

    //For 1
    line(315,120,315,150);

    //For 8
    line(330,120,330,150);
    line(350,120,350,150);
    line(330,120,350,120);
    line(330,135,350,135);
    line(330,150,350,150);

    //For 1
    line(365,120,365,150);



   for (int i=0;i<500;i++)
    {
    //For CAR BODY
    line(50+i,370,90+i,370);
    arc(110+i,370,0,180,20);
    line(130+i,370,220+i,370);
    arc(240+i,370,0,180,20);
    line(260+i,370,300+i,370);
    line(300+i,370,300+i,350);
    line(300+i,350,240+i,330);
    line(240+i,330,200+i,300);
    line(200+i,300,110+i,300);
    line(110+i,300,80+i,330);
    line(80+i,330,50+i,340);
    line(50+i,340,50+i,370);

    //For CAR WINDOWS
    line(165+i,305,165+i,330);
    line(165+i,330,230+i,330);
    line(230+i,330,195+i,305);
    line(195+i,305,165+i,305);

    line(160+i,305,160+i,330);
    line(160+i,330,95+i,330);
    line(95+i,330,120+i,305);
    line(120+i,305,160+i,305);

    //For WHEELS
    circle(110+i,370,17);
    circle(240+i,370,17);

    delay(10);
    cleardevice();

    //For ROAD
    line(0,390,639,390);
    }



    getch();
    closegraph();
    return 0;
}

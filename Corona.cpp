#include <stdio.h>
#include <graphics.h>
#include<iostream>
#include<Windows.h>
#include<MMSystem.h>
int main(){
  int x, y = 0, j=0,k=0,l=.5,tiringBiring = 400, jokhon = 1;
     char arr[30]="    Go-Corona-Go!!";
     float i;
     initwindow(1380,700);
   while(k<10){
   
     for(i=0,j=0;i<1400;j++,i=i+20)
   {
      //delay(10);
      if(j<=15){
      setcolor(j);
      outtextxy(j+1,j-1,arr);
  }
  else{
    j=0;
  }
  if(i<540){
  	circle(i*0.5,100,50);
    ellipse(i*0.5-10,100-10,0,360,5,10);
    ellipse(i*0.5+10,100-10,0,360,5,10);
    arc(i*0.5,140,20,160,30);
   	//delay(50);  
}
  if(i>540 && i<900){
    
//corona
circle(330*1.5+i*0.55,370,12);//body
circle(330*1.5+i*0.55,370,13);//body
//inside
circle(330*1.5+i*0.55,370,2);circle(330*1.5+i*0.55,365,2);circle(330*1.5+i*0.55,360,2);circle(340*1.5+i*0.55,365,2);circle(335*1.5+i*0.55,375,2);circle(335*1.5+i*0.55,365,2);circle(335*1.5+i*0.55,370,2);
circle(325*1.5+i*0.55,370,2);circle(320*1.5+i*0.55,370,2);circle(325*1.5+i*0.55,375,2);circle(330*1.5+i*0.55,375,2);circle(330*1.5+i*0.55,380,2);circle(340*1.5+i*0.55,370,2);circle(325*1.5+i*0.55,365,2);
//inside detailing
circle(330*1.5+i*0.55,365,4);circle(335*1.5+i*0.55,365,4);circle(325*1.5+i*0.55,365,4);circle(325*1.5+i*0.55,370,4);circle(325*1.5+i*0.55,375,4);circle(335*1.5+i*0.55,375,4);
circle(330*1.5+i*0.55,365,5);circle(335*1.5+i*0.55,365,5);circle(325*1.5+i*0.55,365,5);circle(325*1.5+i*0.55,370,5);circle(325*1.5+i*0.55,375,5);circle(335*1.5+i*0.55,375,5);
//outside
circle(340*1.5+i*0.55,360,4);//outside R1
circle(345*1.5+i*0.55,370,4);//R2
circle(340*1.5+i*0.55,380,4);//R3
circle(320*1.5+i*0.55,360,4);//outside L1
circle(315*1.5+i*0.55,370,4);//L2
circle(320*1.5+i*0.55,380,4);//L3
circle(330*1.5+i*0.55,385,4);//outside Bottom
circle(330*1.5+i*0.55,355,4);//Top

//outside detailing
circle(340*1.5+i*0.55,360,3);//outside R1
circle(345*1.5+i*0.55,370,3);//R2
circle(340*1.5+i*0.55,380,3);//R3
circle(320*1.5+i*0.55,360,3);//outside L1
circle(315*1.5+i*0.55,370,3);//L2
circle(320*1.5+i*0.55,380,3);//L3
circle(330*1.5+i*0.55,385,3);//outside Bottom
circle(330*1.5+i*0.55,355,3);//Top

//outside detailing
circle(340*1.5+i*0.55,360,1);//outside R1
circle(345*1.5+i*0.55,370,1);//R2
circle(340*1.5+i*0.55,380,1);//R3
circle(320*1.5+i*0.55,360,1);//outside L1
circle(315*1.5+i*0.55,370,1);//L2
circle(320*1.5+i*0.55,380,1);//L3
circle(330*1.5+i*0.55,385,1);//outside Bottom
circle(330*1.5+i*0.55,355,1);//Top

   circle(i,100,50);
   ellipse(i-20,100-20,0,360,5,10);
   ellipse(i+20,100-20,0,360,5,10);
   arc(i,100,180,360,30);
   //delay(100);  
                          
outtextxy(750, 390, "Ahh..!!");
  }
//  PlaySound(TEXT("cartoon.wav"),NULL,SND_SYNC);
	
//	system("pause");
  
  if(i<940){
//corona
circle(330*1.5+i*0.55,370,12);//body
circle(330*1.5+i*0.55,370,13);//body
//inside
circle(330*1.5+i*0.55,370,2);circle(330*1.5+i*0.55,365,2);circle(330*1.5+i*0.55,360,2);circle(340*1.5+i*0.55,365,2);circle(335*1.5+i*0.55,375,2);circle(335*1.5+i*0.55,365,2);circle(335*1.5+i*0.55,370,2);
circle(325*1.5+i*0.55,370,2);circle(320*1.5+i*0.55,370,2);circle(325*1.5+i*0.55,375,2);circle(330*1.5+i*0.55,375,2);circle(330*1.5+i*0.55,380,2);circle(340*1.5+i*0.55,370,2);circle(325*1.5+i*0.55,365,2);
//inside detailing
circle(330*1.5+i*0.55,365,4);circle(335*1.5+i*0.55,365,4);circle(325*1.5+i*0.55,365,4);circle(325*1.5+i*0.55,370,4);circle(325*1.5+i*0.55,375,4);circle(335*1.5+i*0.55,375,4);
circle(330*1.5+i*0.55,365,5);circle(335*1.5+i*0.55,365,5);circle(325*1.5+i*0.55,365,5);circle(325*1.5+i*0.55,370,5);circle(325*1.5+i*0.55,375,5);circle(335*1.5+i*0.55,375,5);
//outside
circle(340*1.5+i*0.55,360,4);//outside R1
circle(345*1.5+i*0.55,370,4);//R2
circle(340*1.5+i*0.55,380,4);//R3
circle(320*1.5+i*0.55,360,4);//outside L1
circle(315*1.5+i*0.55,370,4);//L2
circle(320*1.5+i*0.55,380,4);//L3
circle(330*1.5+i*0.55,385,4);//outside Bottom
circle(330*1.5+i*0.55,355,4);//Top

//outside detailing
circle(340*1.5+i*0.55,360,3);//outside R1
circle(345*1.5+i*0.55,370,3);//R2
circle(340*1.5+i*0.55,380,3);//R3
circle(320*1.5+i*0.55,360,3);//outside L1
circle(315*1.5+i*0.55,370,3);//L2
circle(320*1.5+i*0.55,380,3);//L3
circle(330*1.5+i*0.55,385,3);//outside Bottom
circle(330*1.5+i*0.55,355,3);//Top

//outside detailing
circle(340*1.5+i*0.55,360,1);//outside R1
circle(345*1.5+i*0.55,370,1);//R2
circle(340*1.5+i*0.55,380,1);//R3
circle(320*1.5+i*0.55,360,1);//outside L1
circle(315*1.5+i*0.55,370,1);//L2
circle(320*1.5+i*0.55,380,1);//L3
circle(330*1.5+i*0.55,385,1);//outside Bottom
circle(330*1.5+i*0.55,355,1);//Top
}

  else{
  	circle(i,100,50);
   ellipse(i-20,100-20,0,360,5,10);
   ellipse(i+20,100-20,0,360,5,10);
   arc(i,100,180,360,30);
   //delay(100); 
  outtextxy(750, 390, "Finish!!");
}



//car body
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

//windows
line(165+i,305,165+i,330);
line(165+i,330,230+i,330);
line(230+i,330,195+i,305);
line(195+i,305,165+i,305);

line(160+i,305,160+i,330);
line(160+i,330,95+i,330);
line(95+i,330,120+i,305);
line(120+i,305,160+i,305);

//wheel
circle(110+i,370,17);
circle(240+i,370,17);

circle(110+i,370,7);
circle(240+i,370,7);

delay(100);
cleardevice();
settextstyle(SMALL_FONT,HORIZ_DIR,8);
if(i<91){
outtextxy(1000-9*i, 420, "Created By");
outtextxy(1000-9*i, 460, "Swarup Dey Sarkar");
}
else{
  outtextxy(0, 440, "Created By");
outtextxy(0, 480, "Swarup Dey Sarkar");
}
line(0,390,1380,390);  //road
    }
    k++;
}
}

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<process.h>
   void main()
  { //int gd=DETECT,gm,x,y;
  // initgraph(&gd,&gm,"c:\\turboc3\\bgi");



int gdriver = DETECT,gmode;
float x,y,i;
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
 cleardevice();

settextstyle(1,0,8);
for(int k=1,j=380;k<=180,j>=190;k++,j--)
{
cleardevice();

setcolor(YELLOW);
outtextxy(150,j,"PROJECT");
delay(1);
setcolor(RED);
outtextxy(150,k,"PROJECT");
delay(1);

setcolor(RED);
outtextxy(150,k,"PROJECT");
delay(1);
setcolor(RED);
outtextxy(150,k,"PROJECT");
delay(1);
setcolor(RED);
outtextxy(150,k,"PROJECT");
delay(1);
setcolor(RED);
outtextxy(150,k,"PROJECT");
delay(1);
setcolor(RED);
outtextxy(150,k,"PROJECT");
delay(1);
setcolor(RED);
outtextxy(150,k,"PROJECT");
delay(1);
setcolor(RED);
outtextxy(150,k,"PROJECT");
delay(1);
setcolor(RED);
outtextxy(150,k,"PROJECT");
delay(1);
setcolor(RED);
outtextxy(150,k,"PROJECT");
delay(1);
setcolor(RED);
outtextxy(150,k,"PROJECT");
delay(1);


setcolor(YELLOW);
outtextxy(150,j,"PROJECT");
delay(1);


//clrscr();
}


for(i=10;i<185;i++)
	{
		delay(5);
		setcolor(i/5);
		arc(0,0,270,360,i-5);
	}



for(i=10;i<200;i++)
	{
		delay(5);
		setcolor(i/5);
		arc(650,0,180,270,i-5);
       }


for(i=10;i<200;i++)
	{
		delay(5);
		setcolor(i/5);
		arc(650,490,90,180,i-5);
       }


for(i=10;i<190;i++)
	{
		delay(5);
		setcolor(i/5);
		arc(0,490,0,90,i-5);
       }

	   for(i=173,j=70;i<350,j<150;i++,j++)
{                       setcolor(i-170);
ellipse(305,240,0,360,i,j);
	delay(50);
 }
	     delay(1000);

	cleardevice();

	setcolor(LIGHTRED);

settextstyle(7,0,6);
outtextxy(44,40,"Project work of C.S.");
outtextxy(44,44,"________________");
setcolor(LIGHTGREEN);

settextstyle(7,0,4);
outtextxy(70,110,"Submitted to-Mr.Manish Sir");
outtextxy(70,160,"Submitted By-Abhijeet Gupta");
 settextstyle(7,0,5);
 setcolor(LIGHTRED);

 outtextxy(70,220,"@@@@@ Topic @@@@@");
		settextstyle(7,0,4);
 setcolor(LIGHTGREEN);
 outtextxy(70,270,"MODERN PERIODIC TABLE");
 outtextxy(70,274,"______________________");

	settextstyle(7,0,3);
 setcolor(BROWN);
 outtextxy(80,330,"Please wait while project is loading!!");
 outtextxy(80,334,"____________________________");
  delay(100);


   for(j=350;j>=7;j--)
 { setcolor(YELLOW);
  circle(j,460,15);
  delay(5);}



    for(j=460;j>=7;j--)
  { setcolor(YELLOW);
  circle(15,j,15);
  delay(5);}

    for(j=0;j<=650;j++)
  { setcolor(YELLOW);
  circle(j,15,15);
  delay(5);}

    for(j=0;j<=440;j++)
  { setcolor(YELLOW);
  circle(625,j,15);
  delay(5);}


    for(j=650;j>=345;j--)
  { setcolor(YELLOW);
  circle(j,460,15);
  delay(5);}



	settextstyle(7,0,3);
 setcolor(BLACK);
 outtextxy(80,330,"Please wait while project is loading!!");
 outtextxy(80,334,"____________________________");
  delay(1);


	    setcolor(LIGHTGREEN);
settextstyle(7,0,5);
outtextxy(85,350,"|------LOADED------|");
   delay(500)	   ;





		      cleardevice();
     for(j=0;j<3000;j+=2)
   { delay(1);
  {putpixel(random(700),random(700),j+2);
   putpixel(random(600),random(700),j+2);
   putpixel(random(600),random(700),j+2);
   putpixel(random(600),random(700),j+2);
   putpixel(random(600),random(700),j+2);
  }
   }



    setcolor(LIGHTCYAN);
   line(0,105,0,350);              delay(100);
   line(35,105,35,350);            delay(100);
   line(70,140,70,350);            delay(100);
   line(105,210,105,350);          delay(100);
   line(140,210,140,350);          delay(100);
   line(175,210,175,350);          delay(100);
   line(210,210,210,350);          delay(100);
   line(245,210,245,350);          delay(100);
   line(280,210,280,350);          delay(100);
   line(315,210,315,350);          delay(100);
   line(350,210,350,350);          delay(100);
   line(385,210,385,350);          delay(100);
   line(420,140,420,350);          delay(100);
   line(455,140,455,350);          delay(100);
   line(490,140,490,350);          delay(100);
   line(525,140,525,350);          delay(100);
   line(560,140,560,350);          delay(100);
   line(595,105,595,350);          delay(100);
   line(630,105,630,350);          delay(100);
				   delay(100);
   line(0,105,35,105);             delay(100);
   line(0,140,70,140);             delay(100);
   line(0,175,70,175);             delay(100);
   line(0,210,630,210);            delay(100);
   line(0,245,630,245);            delay(100);
   line(0,280,630,280);            delay(100);
   line(0,315,630,315);            delay(100);
   line(0,350,630,350);
 delay(100);

   line(595,105,630,105);  delay(100);
   line(420,140,630,140);  delay(100);
   line(420,175,630,175);  delay(100);
			   delay(100);
   line(70,385,560,385);   delay(100);
   line(70,420,560,420);   delay(100);
   line(70,455,560,455);   delay(100);
			   delay(100);
   line(70,385,70,455);    delay(100);
   line(105,385,105,455);  delay(100);
   line(140,385,140,455);  delay(100);
   line(175,385,175,455);  delay(100);
   line(210,385,210,455);  delay(100);
   line(245,385,245,455);  delay(100);
   line(280,385,280,455);  delay(100);
   line(315,385,315,455);  delay(100);
   line(350,385,350,455);  delay(100);
   line(385,385,385,455);  delay(100);
   line(420,385,420,455);  delay(100);
   line(455,385,455,455);  delay(100);
   line(490,385,490,455);  delay(100);
   line(525,385,525,455);  delay(100);
   line(560,385,560,455);  delay(100);
    setcolor(RED);
     settextstyle(0,0,0);       delay(100);
   outtextxy(0,7,"#") ;    delay(100);
   outtextxy(0,27,"!");    delay(100);
    setcolor(LIGHTCYAN);           delay(100);
   line(8,0,630,0);        delay(100);
   line(8,40,630,40);      delay(100);
   line(8,20,630,20);      delay(100);
   line(8,0,8,40);         delay(100);
   line(35,0,35,40);       delay(100);
   line(70,0,70,40);       delay(100);
   line(105,0,105,40);     delay(100);
   line(140,0,140,40);     delay(100);
   line(175,0,175,40);     delay(100);
   line(210,0,210,40);     delay(100);
   line(245,0,245,40);     delay(100);
   line(280,20,280,40);    delay(100);
   line(315,20,315,40);    delay(100);
   line(350,0,350,40);     delay(100);
   line(385,0,385,40);     delay(100);
   line(420,0,420,40);     delay(100);
   line(455,0,455,40);     delay(100);
   line(490,0,490,40);     delay(100);
   line(525,0,525,40);     delay(100);
   line(560,0,560,40);     delay(100);
   line(595,0,595,40);     delay(100);
   line(630,0,630,40);     delay(100);
   setcolor(MAGENTA);      delay(100);
			   delay(100);
   outtextxy(16,90,"1") ;  delay(100);
   outtextxy(50,125,"2") ; delay(100);
   outtextxy(85,195,"3") ; delay(100);
   outtextxy(120,195,"4");  delay(100);
   outtextxy(155,195,"5") ; delay(100);
   outtextxy(190,195,"6") ;            delay(100);
   outtextxy(225,195,"7") ;            delay(100);
   outtextxy(260,195,"8") ;            delay(100);
   outtextxy(295,195,"9") ;            delay(100);
   outtextxy(325,195,"10") ;           delay(100);
   outtextxy(360,195,"11") ;           delay(100);
   outtextxy(395,195,"12") ;           delay(100);
   outtextxy(430,125,"13") ;           delay(100);
   outtextxy(465,125,"14") ;           delay(100);
   outtextxy(500,125,"15") ;           delay(100);
   outtextxy(535,125,"16") ;           delay(100);
   outtextxy(570,125,"17") ;           delay(100);
   outtextxy(610,90,"18") ;            delay(100);
    setcolor(RED);                     delay(100);
   outtextxy(0,465,"#=old group nos.");       delay(100);
   outtextxy(150,465,"!=modern group nos.") ; delay(100);
   outtextxy(320,465,"*=Atomic masses have not been corrected") ;
					     delay(100);

   setcolor(LIGHTMAGENTA);

   outtextxy(15,8,"I1") ;                   delay(100);
   outtextxy(40,8,"IIA") ;                  delay(100);
   outtextxy(73,8,"IIIB") ;                 delay(100);
   outtextxy(113,8,"IVB") ;                 delay(100);
   outtextxy(150,8,"VB") ;                  delay(100);
   outtextxy(180,8,"VIB") ;                 delay(100);
   outtextxy(213,8,"VIIB") ;                delay(100);
   outtextxy(285,8,"VIII") ;                delay(100);
   outtextxy(360,8,"IB") ;                  delay(100);
   outtextxy(393,8,"IIB") ;                 delay(100);
   outtextxy(422,8,"IIIA") ;                delay(100);
   outtextxy(462,8,"IVA") ;                 delay(100);
   outtextxy(500,8,"VA") ;                  delay(100);
   outtextxy(532,8,"VIA") ;                 delay(100);
   outtextxy(568,8,"VII") ;                 delay(100);
   outtextxy(610,8,"0") ;                   delay(100);
					    delay(100);
   setcolor(LIGHTBLUE);                     delay(100);
   outtextxy(16,28,"1") ;                   delay(100);
   outtextxy(50,28,"2") ;                   delay(100);
   outtextxy(85,28,"3") ;                   delay(100);
   outtextxy(120,28,"4") ;                  delay(100);
   outtextxy(155,28,"5") ;                  delay(100);
   outtextxy(190,28,"6") ;                  delay(100);
   outtextxy(225,28,"7") ;                  delay(100);
   outtextxy(260,28,"8") ;                  delay(100);
   outtextxy(295,28,"9") ;                  delay(100);
   outtextxy(325,28,"10") ;                 delay(100);
   outtextxy(360,28,"11") ;                 delay(100);
   outtextxy(395,28,"12") ;                 delay(100);
   outtextxy(430,28,"13") ;                 delay(100);
   outtextxy(465,28,"14") ;                 delay(100);
   outtextxy(500,28,"15") ;                 delay(100);
   outtextxy(535,28,"16") ;                 delay(100);
   outtextxy(570,28,"17") ;                 delay(100);
   outtextxy(610,28,"18") ;                 delay(100);
					    delay(100);
	      setcolor(LIGHTCYAN);          delay(100);
     outtextxy(3,108,"1.0") ;               delay(100);
     outtextxy(3,143,"6.9") ;               delay(100);
     outtextxy(3,178,"22.") ;               delay(100);
     outtextxy(3,213,"39.") ;               delay(100);
     outtextxy(3,248,"85.") ;               delay(100);
     outtextxy(3,283,"133.") ;              delay(100);
     outtextxy(3,318,"223.") ;              delay(100);
					    delay(100);
     outtextxy(38,143,"9.1") ;              delay(100);
     outtextxy(38,178,"24.") ;              delay(100);
     outtextxy(38,213,"40.") ;              delay(100);
     outtextxy(38,248,"88.") ;              delay(100);
     outtextxy(38,283,"137.") ;             delay(100);
     outtextxy(38,318,"226.") ;             delay(100);
					    delay(100);
     outtextxy(76,213,"45.") ;              delay(100);
     outtextxy(76,248,"89.") ;              delay(100);
	outtextxy(76,283,"139.") ;          delay(100);
     outtextxy(76,318,"227*") ;             delay(100);
					    delay(100);
					    delay(100);
					    delay(100);
     outtextxy(111,213,"48.") ;             delay(100);
     outtextxy(111,248,"91.") ;             delay(100);
     outtextxy(111,283,"179.") ;            delay(100);
     outtextxy(111,318,"261*") ;            delay(100);
					    delay(100);
					    delay(100);
					    delay(100);
     outtextxy(145,213,"51.") ;             delay(100);
     outtextxy(145,248,"93.") ;             delay(100);
     outtextxy(145,283,"181.") ;            delay(100);
     outtextxy(145,318,"261*") ;            delay(100);


     outtextxy(180,213,"52.") ;            delay(100);
     outtextxy(180,248,"96.") ;            delay(100);
     outtextxy(180,283,"184.") ;           delay(100);
     outtextxy(180,318,"263*") ;           delay(100);
					   delay(100);
					   delay(100);
					   delay(100);
     outtextxy(215,213,"55.") ;            delay(100);
     outtextxy(215,248,"99.") ;            delay(100);
     outtextxy(215,283,"186.") ;           delay(100);
     outtextxy(215,318,"262*") ;           delay(100);
					   delay(100);
					   delay(100);
     outtextxy(249,213,"56.") ;            delay(100);
     outtextxy(249,248,"101.") ;           delay(100);
     outtextxy(249,283,"190.") ;           delay(100);
     outtextxy(249,318,"265*") ;           delay(100);
					   delay(100);
					   delay(100);
     outtextxy(285,213,"59.") ;            delay(100);
     outtextxy(285,248,"103.") ;           delay(100);
     outtextxy(285,283,"192.") ;           delay(100);
     outtextxy(285,318,"268*") ;           delay(100);
					   delay(100);
					   delay(100);
     outtextxy(320,213,"59.") ;            delay(100);
     outtextxy(320,248,"106.") ;           delay(100);
     outtextxy(320,283,"195.") ;           delay(100);
     outtextxy(320,318,"269*") ;           delay(100);
					   delay(100);

     outtextxy(355,213,"64.") ;            delay(100);
     outtextxy(355,248,"108.") ;           delay(100);
     outtextxy(355,283,"197.") ;           delay(100);
     outtextxy(355,318,"272*") ;           delay(100);
					   delay(100);
					   delay(100);
     outtextxy(390,213,"65.") ;            delay(100);
     outtextxy(390,248,"112.") ;           delay(100);
     outtextxy(390,283,"201.") ;           delay(100);
     outtextxy(390,318,"277*") ;           delay(100);
					   delay(100);
					   delay(100);
     outtextxy(425,143,"11.") ;            delay(100);
     outtextxy(425,178,"27.") ;            delay(100);
     outtextxy(425,213,"70.") ;            delay(100);
     outtextxy(425,248,"115.") ;           delay(100);
     outtextxy(425,283,"204.") ;           delay(100);
     outtextxy(425,318,"284*") ;           delay(100);
					   delay(100);
					   delay(100);
					   delay(100);
     outtextxy(460,143,"12.") ;            delay(100);
     outtextxy(460,178,"28.") ;            delay(100);
     outtextxy(460,213,"70.") ;            delay(100);
     outtextxy(460,248,"119.") ;           delay(100);
     outtextxy(460,283,"207.") ;           delay(100);
     outtextxy(460,318,"289*") ;           delay(100);


     outtextxy(495,143,"14.") ;            delay(100);
     outtextxy(495,178,"31.") ;            delay(100);
     outtextxy(495,213,"75.") ;            delay(100);
     outtextxy(495,248,"122.") ;           delay(100);
     outtextxy(495,283,"209.") ;           delay(100);
     outtextxy(495,318,"288*") ;           delay(100);
					   delay(100);
					   delay(100);
     outtextxy(530,143,"16.") ;            delay(100);
     outtextxy(530,178,"32.") ;            delay(100);
     outtextxy(530,213,"79.") ;            delay(100);
     outtextxy(530,248,"128.") ;           delay(100);
     outtextxy(530,283,"210.") ;           delay(100);
     outtextxy(530,318,"292*") ;           delay(100);

     outtextxy(565,143,"18.") ;            delay(100);
     outtextxy(565,178,"35.5") ;           delay(100);
     outtextxy(565,213,"90") ;             delay(100);
     outtextxy(565,248,"127.") ;           delay(100);
     outtextxy(565,283,"210.") ;           delay(100);
     outtextxy(565,318,"294*") ;           delay(100);


     outtextxy(600,108,"4.0") ;            delay(100);
     outtextxy(600,143,"20.") ;            delay(100);
     outtextxy(600,178,"40.") ;            delay(100);
     outtextxy(600,213,"84.") ;            delay(100);
     outtextxy(600,248,"131.") ;           delay(100);
     outtextxy(600,283,"222.") ;           delay(100);
     outtextxy(600,318,"296*") ;           delay(100);


     outtextxy(72,388,"140.") ;            delay(100);
     outtextxy(72,423,"232*") ;            delay(100);

     outtextxy(107,388,"141.") ;           delay(100);
     outtextxy(107,423,"231*") ;           delay(100);

     outtextxy(143,388,"144.") ;           delay(100);
     outtextxy(143,423,"238*") ;           delay(100);

     outtextxy(178,388,"147*") ;           delay(100);
     outtextxy(178,423,"237*") ;           delay(100);

     outtextxy(213,388,"150.") ;           delay(100);
     outtextxy(213,423,"244*") ;           delay(100);

     outtextxy(248,388,"152.") ;           delay(100);
     outtextxy(248,423,"248*") ;           delay(100);

     outtextxy(283,388,"157.") ;           delay(100);
     outtextxy(283,423,"247*") ;           delay(100);

     outtextxy(318,388,"159.") ;           delay(100);
     outtextxy(318,423,"247*") ;           delay(100);

     outtextxy(353,388,"163.") ;           delay(100);
     outtextxy(353,423,"251*") ;           delay(100);

     outtextxy(388,388,"165.") ;           delay(100);
     outtextxy(388,423,"252*") ;           delay(100);

     outtextxy(423,388,"167.") ;           delay(100);
     outtextxy(423,423,"257*") ;           delay(100);

     outtextxy(458,388,"169.") ;                       delay(100);
     outtextxy(458,423,"258*") ;           delay(100);

     outtextxy(493,388,"173.") ;           delay(100);
     outtextxy(493,423,"259*") ;           delay(100);

     outtextxy(528,388,"175.") ;           delay(100);
     outtextxy(528,423,"262*") ;           delay(100);

   setcolor(YELLOW) ;                      delay(100);
     outtextxy(3,130,"1") ;                delay(100);
     outtextxy(3,165,"3") ;                delay(100);
     outtextxy(3,200,"11") ;               delay(100);
     outtextxy(3,235,"19") ;               delay(100);
     outtextxy(3,270,"37") ;               delay(100);
     outtextxy(3,305,"55") ;               delay(100);
     outtextxy(3,340,"87") ;               delay(100);

     outtextxy(38,165,"4") ;               delay(100);
     outtextxy(38,200,"12") ;              delay(100);
     outtextxy(38,235,"20") ;              delay(100);
     outtextxy(38,270,"38") ;              delay(100);
     outtextxy(38,305,"56") ;              delay(100);
     outtextxy(38,340,"88") ;              delay(100);

     outtextxy(76,235,"21") ;              delay(100);
     outtextxy(76,270,"39") ;              delay(100);
     outtextxy(76,305,"57") ;              delay(100);
     outtextxy(76,340,"89") ;              delay(100);



     outtextxy(111,235,"22") ;             delay(100);
     outtextxy(111,270,"40") ;             delay(100);
     outtextxy(111,305,"72") ;             delay(100);
     outtextxy(111,340,"104") ;            delay(100);

     outtextxy(145,235,"23") ;             delay(100);
     outtextxy(145,270,"41") ;             delay(100);
     outtextxy(145,305,"73") ;             delay(100);
     outtextxy(145,340,"105") ;            delay(100);

     outtextxy(180,235,"24") ;             delay(100);
     outtextxy(180,270,"42") ;             delay(100);
     outtextxy(180,305,"74") ;             delay(100);
     outtextxy(180,340,"106") ;            delay(100);

     outtextxy(215,235,"25") ;             delay(100);
     outtextxy(215,270,"43") ;             delay(100);
     outtextxy(215,305,"75") ;             delay(100);
     outtextxy(215,340,"107") ;            delay(100);

     outtextxy(249,235,"26") ;             delay(100);
     outtextxy(249,270,"44") ;             delay(100);
     outtextxy(249,305,"76") ;             delay(100);
     outtextxy(249,340,"108") ;            delay(100);

     outtextxy(285,235,"27") ;             delay(100);
     outtextxy(285,270,"45") ;             delay(100);
     outtextxy(285,305,"77") ;             delay(100);
     outtextxy(285,340,"109") ;            delay(100);

     outtextxy(320,235,"28") ;             delay(100);
     outtextxy(320,270,"46") ;             delay(100);
     outtextxy(320,305,"78") ;             delay(100);
     outtextxy(320,340,"110") ;            delay(100);

     outtextxy(355,235,"29") ;             delay(100);
     outtextxy(355,270,"47") ;             delay(100);
     outtextxy(355,305,"79") ;             delay(100);
     outtextxy(355,340,"111") ;            delay(100);
					   delay(100);

     outtextxy(390,235,"30") ;             delay(100);
     outtextxy(390,270,"48") ;             delay(100);
     outtextxy(390,305,"80") ;             delay(100);
     outtextxy(390,340,"112") ;            delay(100);

     outtextxy(425,165,"5") ;              delay(100);
     outtextxy(425,200,"13") ;             delay(100);
     outtextxy(425,235,"31") ;             delay(100);
     outtextxy(425,270,"49") ;             delay(100);
     outtextxy(425,305,"81") ;             delay(100);
     outtextxy(425,340,"113") ;            delay(100);

     outtextxy(460,165,"6") ;              delay(100);
     outtextxy(460,200,"14") ;             delay(100);
     outtextxy(460,235,"32") ;             delay(100);
     outtextxy(460,270,"50") ;             delay(100);
     outtextxy(460,305,"82") ;             delay(100); delay(100);
     outtextxy(460,340,"114") ;            delay(100);

     outtextxy(495,165,"7") ;              delay(100);
     outtextxy(495,200,"15") ;             delay(100);
     outtextxy(495,235,"33") ;             delay(100);
     outtextxy(495,270,"51") ;             delay(100);
     outtextxy(495,305,"83") ;             delay(100);
     outtextxy(495,340,"115") ;            delay(100);

     outtextxy(530,165,"8") ;              delay(100);
     outtextxy(530,200,"16") ;             delay(100);
     outtextxy(530,235,"34") ;             delay(100);
     outtextxy(530,270,"52") ;             delay(100);
     outtextxy(530,305,"84") ;             delay(100);
     outtextxy(530,340,"116") ;            delay(100);

     outtextxy(565,165,"9") ;              delay(100);
     outtextxy(565,200,"17") ;             delay(100);
     outtextxy(565,235,"35") ;             delay(100);
     outtextxy(565,270,"53") ;             delay(100);
     outtextxy(565,305,"85") ;             delay(100);
     outtextxy(565,340,"117") ;            delay(100);

     outtextxy(600,130,"2") ;              delay(100);
     outtextxy(600,165,"10") ;             delay(100);
     outtextxy(600,200,"18") ;             delay(100);
     outtextxy(600,235,"36") ;             delay(100);
     outtextxy(600,270,"54") ;               delay(100);
     outtextxy(600,305,"86") ;          delay(100);
     outtextxy(600,340,"118") ;            delay(100);
					   delay(100);
     outtextxy(72,410,"58") ;              delay(100);
     outtextxy(72,445,"90") ;              delay(100);

     outtextxy(107,410,"59") ;             delay(100);
     outtextxy(107,445,"91") ;             delay(100);


     outtextxy(143,410,"60") ;             delay(100);
     outtextxy(143,445,"92") ;             delay(100);

     outtextxy(178,410,"61") ;             delay(100);
     outtextxy(178,445,"93") ;             delay(100); delay(100);

     outtextxy(213,410,"62") ;             delay(100);
     outtextxy(213,445,"94") ;             delay(100);

     outtextxy(248,410,"63") ;             delay(100);
     outtextxy(248,445,"95") ;             delay(100);


     outtextxy(283,410,"64") ;             delay(100);
     outtextxy(283,445,"96") ;             delay(100);


     outtextxy(318,410,"65") ;             delay(100);
     outtextxy(318,445,"97") ;             delay(100);					   delay(100); delay(100);

     outtextxy(353,410,"66") ;             delay(100);
     outtextxy(353,445,"98") ;             delay(100);

     outtextxy(388,410,"67") ;             delay(100);
     outtextxy(388,445,"99") ;             delay(100);

     outtextxy(423,410,"68") ;             delay(100);
     outtextxy(423,445,"100") ;            delay(100);

     outtextxy(458,410,"69") ;             delay(100);
     outtextxy(458,445,"101") ;            delay(100);
     outtextxy(493,410,"70") ;             delay(100);
     outtextxy(493,445,"102") ;            delay(100);


     outtextxy(528,410,"71") ;             delay(100);
     outtextxy(528,445,"103") ;            delay(100);

  setcolor(LIGHTCYAN);
    line(230,110,230,160);                 delay(100);
    line(230,110,280,110);                 delay(100);
    line(280,110,280,160);                 delay(100);
    line(230,160,280,160);                 delay(100);

     setcolor(GREEN);                      delay(100);
    outtextxy(240,115,"55.9") ;            delay(100);
    outtextxy(240,150,"26") ;              delay(100);
    outtextxy(245,133,"Fe") ;              delay(100);
     setcolor(LIGHTRED);                   delay(100);

    outtextxy(115,100,"Relative ");        delay(100);
    outtextxy(115,115,"Atomic mass==>") ;  delay(100);

    outtextxy(290,135,"<==Symbol") ;       delay(100);
    outtextxy(120,149,"Atomic no.==>") ;   delay(100);

   outtextxy(230,56,"LONG FORM OF ") ;     delay(100);

   settextstyle(0,0,2);                    delay(100);
   {setcolor(14);                           delay(100);
   {outtextxy(110,70,"THE PERIODIC TABLE"); delay(100);
   outtextxy(110,72,"__________________");} delay(100);
    }                                       delay(100);
   setcolor(LIGHTGREEN);                    delay(100);

   settextstyle(0,0,0);                     delay(100);
 outtextxy(0,83,"|--------|");              delay(100);
 outtextxy(15,75,"(ns   )");                delay(100);
 outtextxy(22,69,"  1-2");                  delay(100);
 outtextxy(15,57,"s-BLOCK");                delay(100);
					    delay(100);
 outtextxy(413,60,"|-----p-BLOCK elements-----|");      delay(100);
 outtextxy(500,80,"(np   )");                          delay(100);
 outtextxy(525,73,"1-6");                              delay(100);

 outtextxy(70,164,"|-------d-BLOCK(TRANSITION ELEMENTS)-------|");  delay(100);
 outtextxy(180,184,"[(n-1)d    ns   ]");                            delay(100);
  outtextxy(235,175,"1-10  0-2");                                   delay(100);
								    delay(100);

  outtextxy(70,355,"|--------f-BLOCK/INNER TRANSITION ELEMENTS(RARE EARTHS)------|");         delay(100);
  outtextxy(230,372,"[(n-2)f    (n-1)d   ns ]");                     delay(100);
  outtextxy(285,364,"0-14      0-1  2");                            delay(100);
  outtextxy(40,400,"@==>"); delay(100);
  outtextxy(40,440,"$==>");  			    delay(100);


setcolor(RED);                                            delay(100);
outtextxy(10,120,"H");                                              delay(100);
outtextxy(10,155,"Li");                                           delay(100);
outtextxy(10,190,"Na");                                             delay(100);
outtextxy(10,225,"k");                                              delay(100);
outtextxy(10,260,"Rb");                                             delay(100);
outtextxy(10,295,"Cs");                                             delay(100);
outtextxy(10,330,"Fr");                                             delay(100);
outtextxy(44,155,"Be");                                             delay(100);
outtextxy(44,190,"Mg");                                             delay(100);
outtextxy(44,225,"Ca");                                             delay(100);
outtextxy(44,260,"Sr");                                             delay(100);
outtextxy(44,295,"Ba");                                             delay(100);
outtextxy(44,330,"Ra");                                             delay(100);
setcolor(LIGHTGREEN);
outtextxy(80,225,"Sc");                                             delay(100);
outtextxy(80,260,"Y");                                              delay(100);
outtextxy(80,295,"La@");                                             delay(100);
outtextxy(80,330,"Ac$");                                             delay(100);
outtextxy(115,225,"Ti");                                            delay(100);
outtextxy(115,260,"Zr");                                            delay(100);
outtextxy(115,295,"Hf");                                            delay(100);
outtextxy(115,330,"Rf");                                            delay(100);
outtextxy(150,225,"V");                                             delay(100);
outtextxy(150,260,"Nb");                                            delay(100);
outtextxy(150,295,"Ta");                                            delay(100);
outtextxy(150,330,"Db");                                            delay(100);
outtextxy(185,225,"Cr");                                            delay(100);
outtextxy(185,260,"Mo");                                                        delay(100);
outtextxy(185,295,"W");                                             delay(100);
outtextxy(185,330,"Sg");                                                        delay(100);
outtextxy(220,225,"Mn");                                            delay(100);
outtextxy(220,260,"Tc");                                            delay(100);
outtextxy(220,295,"Re");                                            delay(100);
outtextxy(220,330,"Bh");                                            delay(100);
outtextxy(255,225,"Fe");                                            delay(100);
outtextxy(255,260,"Ru");                                            delay(100);
outtextxy(255,295,"Os");                                            delay(100);
outtextxy(255,330,"Hs");                                                        delay(100);
outtextxy(290,225,"Co");                                            delay(100);
outtextxy(290,260,"Rh");                                            delay(100);
outtextxy(290,295,"Ir");                                            delay(100);
outtextxy(290,330,"Mt");                                            delay(100);
outtextxy(325,225,"Ni");                                            delay(100);
outtextxy(325,260,"Pd");                                            delay(100);
outtextxy(325,295,"Pt");                                                        delay(100);
outtextxy(320,330,"Uun");                                           delay(100);
outtextxy(360,225,"Cu");                                            delay(100);
outtextxy(360,260,"Ag");                                            delay(100);
outtextxy(360,290,"Au");                                            delay(100);
outtextxy(360,330,"Rg");                                                      delay(100);
outtextxy(390,225,"Zn");                                            delay(100);
outtextxy(390,260,"Cd");                                            delay(100);
outtextxy(390,295,"Hg");                                            delay(100);
outtextxy(390,330,"Cn");                                            delay(100); delay(100);
setcolor(LIGHTBLUE);                                                delay(100);
outtextxy(430,155,"B");                                             delay(100);
outtextxy(430,190,"Al");                                            delay(100);
outtextxy(430,225,"Ga");                                                      delay(100);
outtextxy(430,260,"In");                                            delay(100);
outtextxy(430,295,"Ti");                                            delay(100);
outtextxy(430,330,"Uut");                                                       delay(100);
outtextxy(465,155,"C");                                             delay(100);
outtextxy(465,190,"Si");                                                        delay(100);
outtextxy(465,225,"Ge");                                            delay(100);
outtextxy(465,260,"Sn");                                            delay(100);
outtextxy(465,295,"Pb");                                                        delay(100);
outtextxy(465,330,"Uuq");                                           delay(100);
outtextxy(500,155,"N");                                             delay(100);
outtextxy(500,190,"P");                                             delay(100);
outtextxy(500,225,"As");                                                        delay(100);
outtextxy(500,260,"Sb");                                            delay(100);
outtextxy(500,295,"Bi");                                            delay(100);
outtextxy(500,330,"Uup");                                           delay(100);
outtextxy(535,155,"O");                                             delay(100);
outtextxy(535,190,"S");                                             delay(100);
outtextxy(535,225,"Se");                                            delay(100);
outtextxy(535,260,"Te");                                               delay(100);
outtextxy(535,295,"Po");                                            delay(100);
outtextxy(535,330,"Uuh");                                              delay(100);
outtextxy(565,155,"F");                                             delay(100);
outtextxy(565,190,"Cl");                                            delay(100);
outtextxy(565,225,"Br");                                            delay(100);
outtextxy(565,260,"I");                                             delay(100);
outtextxy(565,295,"At");                                            delay(100);
outtextxy(565,330,"Uus");                                           delay(100);
outtextxy(605,120,"He");                                            delay(100);
outtextxy(605,155,"Ne");                                            delay(100);
outtextxy(605,190,"Ar");                                            delay(100); delay(100);
outtextxy(605,225,"Kr");                                            delay(100);
outtextxy(605,260,"Xe");                                            delay(100);
outtextxy(605,295,"Rn");                                            delay(100);
outtextxy(605,330,"Uuo");                                           delay(100);
setcolor(LIGHTMAGENTA);                                             delay(100);
outtextxy(80,400,"Ce");                                                delay(100);
outtextxy(80,435,"Th");                                             delay(100);
outtextxy(115,400,"Pr");                                                        delay(100);
outtextxy(115,435,"Pa");                                            delay(100);
outtextxy(150,400,"Nd");                                                        delay(100);
outtextxy(150,435,"U");                                             delay(100);
outtextxy(185,400,"Pm");                                                        delay(100);
outtextxy(185,435,"Np");                                            delay(100);
outtextxy(220,400,"Sm");                                            delay(100);
outtextxy(220,435,"Pu");                                            delay(100);
outtextxy(255,400,"Eu");                                            delay(100);
outtextxy(255,435,"Am");                                            delay(100);
outtextxy(290,400,"Gd");                                                        delay(100);
outtextxy(290,435,"Cm");                                            delay(100);
outtextxy(325,400,"Tb");                                            delay(100);
outtextxy(325,435,"Bk");                                            delay(100);
outtextxy(360,400,"Dy");                                            delay(100);
outtextxy(360,435,"Cf");                                            delay(100);
outtextxy(395,400,"Ho");                                            delay(100);
outtextxy(395,435,"Es");                                            delay(100);
outtextxy(430,400,"Er");                                            delay(100);
outtextxy(430,435,"Fm");                                            delay(100);
outtextxy(465,400,"Tm");                                            delay(100);
outtextxy(465,435,"Md");                                            delay(100);
outtextxy(500,400,"Yb");                                            delay(100);
outtextxy(500,435,"No");                                                 delay(100);
outtextxy(535,400,"Lu");                                            delay(100);
outtextxy(535,435,"Lr");                                            delay(100);
								    delay(100);




    for(i=1;i<1000;i+=2)
    {   if(kbhit())
{   cleardevice();

   char yes;


	  enter:
	   cleardevice();
			 setbkcolor(LIGHTRED) ;


   settextstyle(7,0,3);
   {setcolor(LIGHTGREEN);
   outtextxy(10,30,"Which Element Do You Want To Search Out??");
   outtextxy(10,34,"_____________________________________");
    }
   setcolor(LIGHTGREEN);



   settextstyle(7,0,3);
    {setcolor(LIGHTGREEN);
      {outtextxy(10,83,"Enter Atomic Number=>");
   outtextxy(10,87,"____________________    ___");}
    }
      setcolor(LIGHTGREEN); int an;
 gotoxy(47,7);
      cin>>an;
    // if(an==1)
     //{// cleardevice();

    // outtextxy(10,8d3,"Enter Atomic Number=>");









    cleardevice();
   cleardevice();
  settextstyle(7,0,3) ;
 setcolor(LIGHTGREEN) ;
 if(an==1)
 {
 outtextxy(250,20,"Hydrogen ");//
  setcolor(YELLOW) ;
outtextxy(250,44,"*************");                                                       // ");
  setcolor(LIGHTGREEN) ;
 outtextxy(50,100," An= 1 N= 0           ");
outtextxy(50,130," Am: 1.007941 g/mol             ");
outtextxy(50,160," Group No: 1                                                     ");
outtextxy(50,190," Group Name: Non-metals                                                        ");
outtextxy(50,220," Block: s-block  Period: 1                                                     ");
outtextxy(50,250," State: gas at 298 K (the lightest gas known)                                  ");
outtextxy(50,280," Colour: colourless Classification: Non-metallic                               ");
outtextxy(50,310," Boiling Point: 20.268K                                           ");
outtextxy(50,340," Melting Point: 14.01K                                            ");
outtextxy(50,370," Critical temperature: 33K                                            ");
outtextxy(50,400," Density: 0.08988g/cm3                                                         ");
				    delay(20000);
				    cleardevice();
outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }

  }
  else if(an==2)
  {
 outtextxy(250,20,"Helium");
  setcolor(YELLOW) ;
outtextxy(250,44,"**********");   //                                                     ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,130," An: 2 N: 2                                                                    ");
outtextxy(50,160," Am: 4.002602 g/mol                                                            ");
outtextxy(50,190," Group No: 18                                                                  ");
outtextxy(50,220," Group Name: Noble gas                                                         ");
outtextxy(50,250," Block: p-block  Period: 1                                                     ");
outtextxy(50,280," State: gas at 298 K                                                           ");
outtextxy(50,310," Colour: colourless Classification: Non-metallic                               ");
outtextxy(50,340," Boiling Point: 4.22K                                               ");
outtextxy(50,370," Melting Point: 0.95K                                    ");
outtextxy(50,400," Critical temperature: 5.19K                                        ");
outtextxy(50,430," Density: 0.1786g/l                                                            ");
								    delay(20000);
				    cleardevice();
   outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }


}
   else if(an==3)
   {
outtextxy(250,20,"lithium");
  setcolor(YELLOW) ;
outtextxy(250,44,"***********");                                                       // ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 3 N: 4                                                                    ");
outtextxy(50,130," Am: 6.940037 g/mol                                                            ");
outtextxy(50,160," Group No: 1                                                                   ");
outtextxy(50,190," Group Name: Alkali metal                                                      ");
outtextxy(50,220," Block: s-block  Period: 2                                                     ");
outtextxy(50,250," State: solid at 298 K                                                         ");
outtextxy(50,280," Colour: silvery white/grey Classification: Metallic                           ");
outtextxy(50,310," Boiling Point: 1615K                                            ");
outtextxy(50,340," Melting Point: 453.69K                                    " );
outtextxy(50,370,"  Critical temperature: 3223K                            ");
outtextxy(50,400," Density: 0.534g/cm3                                                           ");
								    delay(20000);
				    cleardevice();
    outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }

}
     else if(an==4)
   {
outtextxy(250,20,"Beryllium ");   //                                                      ");
  setcolor(YELLOW) ;
outtextxy(250,44,"*************");                                                       // ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 4 N: 5                                                                    ");
outtextxy(50,130," Am: 9.012182 g/mol                                                            ");
outtextxy(50,160," Group No: 2                                                                   ");
outtextxy(50,190," Group Name: Alkaline earth metal                                              ");
outtextxy(50,220," Block: s-block  Period: 2                                                     ");
outtextxy(50,250," State: solid                                                                  ");
outtextxy(50,280," Colour: lead grey  Classification: Metallic                                   ");
outtextxy(50,310," Boiling Point: 2742K (2469°C)                                                 ");
outtextxy(50,340," Melting Point: 1560K (1287°C)                                                 ");
outtextxy(50,370," Superconducting temperature: 0.026K (-273.124°C)                              ");
outtextxy(50,400," Density: 1.85g/cm3                                                            ");

    //				 }
		    delay(20000);
				    cleardevice();
    outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }

      }				  //							");
	      else if(an==5)
   {			//							");
outtextxy(250,20,"Boron ");   //                                                          ");
  setcolor(YELLOW) ;
outtextxy(250,44,"*********");                                                       // ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 5 N: 6                                                                    ");
outtextxy(50,130," Am: 10.811028 g/mol                                                           ");
outtextxy(50,160," Group No: 13                                                                  ");
outtextxy(50,190," Group Name: Metalloids                                                        ");
outtextxy(50,220," Block: p-block  Period: 2                                                     ");
outtextxy(50,250," State: solid                                                                  ");
outtextxy(50,280," Colour: black Classification: Semi-metallic                                   ");
outtextxy(50,310," Boiling Point: 4200K (3927°C)                                                 ");
outtextxy(50,340," Melting Point: 2349K (2076°C)                                                 ");
outtextxy(50,370," Density: 2.34g/cm3  ");
		    delay(20000);
				    cleardevice();
outtextxy(0,100,"__Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }


}//
		    else if(an==6)
   {																       //	");
outtextxy(250,20,"Carbon ");
//											");
  setcolor(YELLOW) ;
outtextxy(250,44,"**********");                                                       // ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 6 N: 6                                                                    ");
outtextxy(50,130," Am: 12.010736 g/mol                                                           ");
outtextxy(50,160," Group No: 14                                                                  ");
outtextxy(50,190," Group Name: Non-metals                                                        ");
outtextxy(50,220," Block: p-block  Period: 2                                                     ");
outtextxy(50,250," State: solid at 298 K                                                         ");
outtextxy(50,280," Colour: graphite is black, diamond is colourless Classification: Non-metallic ");
outtextxy(50,310," Boiling Point: 4300K (4027°C)                                                 ");
outtextxy(50,340," Melting Point: 3800K (3527°C)                                                 ");
outtextxy(50,370," Density: (graphite) 2.267g/cm3                                                ");
outtextxy(50,400," Density: (diamond) 3.513g/cm3        ");//                                         ");
		    delay(20000);
				    cleardevice();
outtextxy(0,100,"__Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
	     cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }


}
 else
 if(an==7)
   {
outtextxy(250,20,"Nitrogen ");
  setcolor(YELLOW) ;
outtextxy(250,44,"************");                                                       // ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 7 N: 7                                                                    ");
outtextxy(50,130," Am: 14.006743 g/mol                                                           ");
outtextxy(50,160," Group No: 15                                                                  ");
outtextxy(50,190," Group Name: Pnictogen                                                         ");
outtextxy(50,220," Block: p-block  Period: 2                                                     ");
outtextxy(50,250," State: gas at 298 K                                                           ");
outtextxy(50,280," Colour: colourless Classification: Non-metallic                               ");
outtextxy(50,310," Boiling Point: 77.36K (-195.79°C)                                             ");
outtextxy(50,330," Melting Point: 63.05K (-210.1°C)                                              ");
outtextxy(50,370," Critical temperature: 126.2K (-146.9°C)                                       ");
outtextxy(50,400," Density: 1.251g/l                                                       ");
		    delay(20000);
				    cleardevice();outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
	     cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }

						      }
 else if(an==8)
   {										//	");
										      //	");
outtextxy(250,20,"Oxygen ");	                                                     //   ");
  setcolor(YELLOW) ;
outtextxy(250,44,"**********");                                                       // ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 8 N: 8                                                                    ");
outtextxy(50,130," Am: 15.999405 g/mol                                                           ");
outtextxy(50,160," Group No: 16                                                                  ");
outtextxy(50,190," Group Name: Chalcogen                                                         ");
outtextxy(50,220," Block: p-block  Period: 2                                                     ");
outtextxy(50,250," State: gas at 298 K                                                          ");
outtextxy(50,280," Colour: colourless as a gas, liquid is pale blue Classification: Non-metallic");
outtextxy(50,310," Boiling Point: 90.2K (-182.9°C)                                              ");
outtextxy(50,340," Melting Point: 54.8K (-218.3°C)                                              ");
outtextxy(50,370," Critical temperature: 154.6K (-118.5°C)                                      ");
outtextxy(50,400," Density: 1.429g/l                                                            ");
		    delay(20000);
				    cleardevice();outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }

	      }
 else if(an==9)
   {										   //    ");
										 //      ");
									       //	       ");
outtextxy(250,20,"Fluorine ");	                                             //          ");
  setcolor(YELLOW) ;
outtextxy(250,44,"************");                                                       // ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 9 N: 10                                                                  ");
outtextxy(50,130," Am: 18.998403 g/mol                                                          ");
outtextxy(50,160," Group No: 17                                                                 ");
outtextxy(50,190," Group Name: Halogen                                                          ");
outtextxy(50,220," Block: p-block  Period: 2                                                    ");
outtextxy(50,250," State: gas at 298 K                                                          ");
outtextxy(50,280," Colour: pale yellow Classification: Non-metallic                             ");
outtextxy(50,310," Boiling Point: 85.03K (-188.12°C)                                            ");
outtextxy(50,340," Melting Point: 53.53K (-219.62°C)                                            ");
outtextxy(50,370," Critical temperature: 144K (-129°C)                                          ");
outtextxy(50,400," Density: 1.7g/l                                                              ");
		    delay(2000);
				    cleardevice();outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }


	      }
 else if(an==10)
   {									   //	       ");
								       //		       ");
outtextxy(250,20,"Neon ");	                                         //              ");
  setcolor(YELLOW) ;
outtextxy(250,44,"********");                                                       // ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 10 N: 10                                                                 ");
outtextxy(50,130," Am: 20.180046 g/mol                                                          ");
outtextxy(50,160," Group No: 18                                                                 ");
outtextxy(50,190," Group Name: Noble gas                                                        ");
outtextxy(50,220," Block: p-block  Period: 2                                                    ");
outtextxy(50,250," State: gas at 298 K                                                          ");
outtextxy(50,280," Colour: colourless Classification: Non-metallic                              ");
outtextxy(50,310," Boiling Point: 27.07K (-246.08°C)                                            ");
outtextxy(50,340," Melting Point: 24.56K (-248.59°C)                                            ");
outtextxy(50,370," Critical temperature: 44.4K (-228.7°C)                                       ");
outtextxy(50,400," Density: 0.9002g/l                                                           ");
		    delay(20000);
				    cleardevice();outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }

	       }
		else if(an==11)
   {									      // ");
outtextxy(250,20,"Sodium ");                                                          // ");
  setcolor(YELLOW) ;
outtextxy(250,44,"************");                                                       // ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 11 N: 12                                                                 ");
outtextxy(50,130," Am: 22.989770 g/mol                                                          ");
outtextxy(50,160," Group No: 1                                                                  ");
outtextxy(50,190," Group Name: Alkali metal                                                     ");
outtextxy(50,220," Block: s-block  Period: 3                                                    ");
outtextxy(50,250," State: solid at 298 K                                                        ");
outtextxy(50,280," Colour: silvery white Classification: Metallic                               ");
outtextxy(50,310," Boiling Point: 1156K (883°C)                                                 ");
outtextxy(50,340," Melting Point: 370.87K (97.27°C)                                             ");
outtextxy(50,370," Critical temperature: 2573K (2300°C)                                         ");
outtextxy(50,400," Density: 0.968g/cm3 ");//
		    delay(20000);
				    cleardevice();outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }


}
 else if(an==12)
   {
											 // ");
											 // ");
outtextxy(250,20,"Magnesium ");
  setcolor(YELLOW) ;
outtextxy(250,44,"****************");  //                                                      ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 12 N: 13                                                                                             ");
outtextxy(50,130," Am: 24.305052 g/mol                                                                                      ");
outtextxy(50,160," Group No: 2                                                                                              ");
outtextxy(50,190," Group Name: Alkaline earth metal                                                                         ");
outtextxy(50,220," Block: s-block  Period: 3                                                                                ");
outtextxy(50,250," State: solid at 298 K                                                                                    ");
outtextxy(50,280," Colour: silvery white Classification: Metallic                                                           ");
outtextxy(50,310," Boiling Point: 1363K (1090°C)                                                                            ");
outtextxy(50,340," Melting Point: 923K (650°C)                                                                              ");
outtextxy(50,370," Density: 1.738g/cm3                                                                                      ");
outtextxy(50,400," Availability: Magnesium is the eight most abundant element in the Earth's crust, about 2% by weight.      ");
		    delay(20000);
				    cleardevice();outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }

		}
		 else if(an==13)
   {									   //");
											  // ");
outtextxy(250,20,"Aluminium ");	                                                         //  ");
  setcolor(YELLOW) ;
outtextxy(250,44,"****************");    //                                                    ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 13 N: 14                                                                     ");
outtextxy(50,130," Am: 26.981538 g/mol                                                              ");
outtextxy(50,160," Group No: 13  ");//							// ");
outtextxy(50,190," Group Name: Metals                                                    // ");
outtextxy(50,220," Block: p-block  Period: 3                                                        ");
outtextxy(50,250," State: solid at 298 K                                                            ");
 outtextxy(50,280," Colour: silvery Classification: Metallic                                        ");
outtextxy(50,310," Boiling Point: 2792K (2519°C)                                                    ");
outtextxy(50,340," Melting Point: 933.47K (660.32°C)                                                ");
outtextxy(50,370," Superconducting temperature: 1.175K (-271.975°C)                                 ");
outtextxy(50,400," Density: 2.70g/cm3                                                               ");
		    delay(20000);
				    cleardevice();outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }

				}
 else if(an==14)
   {											 //  ");
										       //	   ");
outtextxy(250,20,"Silicon ");	                                                     //      ");
  setcolor(YELLOW) ;
outtextxy(250,44,"*********");      //                                                  ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 14 N: 14                                                                     ");
outtextxy(50,130," Am: 28.085385 g/mol                                                              ");
outtextxy(50,160," Group No: 14                                                                     ");
outtextxy(50,190," Group Name: Metalloids                                                           ");
outtextxy(50,220," Block: p-block  Period: 3                                                        ");
outtextxy(50,250," State: solid at 298 K                                                            ");
outtextxy(50,280," Colour: dark grey with a bluish tinge Classification: Semi-metallic              ");
outtextxy(50,310," Boiling Point: 3173K (2900°C)                                                    ");
outtextxy(50,340," Melting Point: 1687K (1414°C)                                                    ");
outtextxy(50,370," Density: 2.33g/cm3                                                               ");
		    delay(20000);
				    cleardevice();outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }

		}
		 else if(an==15)
   {									  /// ");
											 //  ");
outtextxy(250,20,"Phosphorus ");	                                                 //  ");
  setcolor(YELLOW) ;
outtextxy(250,44,"****************");        //                                                ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 15 N: 16                                                                     ");
outtextxy(50,130," Am: 30.973762 g/mol                                                              ");
outtextxy(50,160," Group No: 15                                                                     ");
outtextxy(50,190," Group Name: Pnictogen                                                            ");
outtextxy(50,220," Block: p-block  Period: 3                                                        ");
outtextxy(50,250," State: solid at 298 K                                                            ");
outtextxy(50,280," Colour: colourless/red/silvery white Classification: Non-metallic                ");
outtextxy(50,310," Boiling Point: 550K (277°C)                                                      ");
outtextxy(50,340," Melting Point: 317.3K (44.2°C)                                                   ");
outtextxy(50,370," Critical temperature: 994K (721°C)                                               ");
outtextxy(50,400," Density: (white) 1.823g/cm3                                                      ");
outtextxy(50,430," Density: (red) 2.34g/cm3                                                         ");
//outtextxy(50,100," Density: (black) 2.69g/cm                                                        ");
		    delay(20000);
				    cleardevice();outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
exit(0);
			       }
				else if(an==16)
   {								  // ");
											  // ");
											  // ");
outtextxy(250,20,"Sulfer");                                                               // ");
  setcolor(YELLOW) ;
outtextxy(250,44,"**********");          //                                              ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 16 N: 16                                                                     ");
outtextxy(50,130," Am: 32.066085 g/mol                                                              ");
outtextxy(50,160," Group No: 16                                                                     ");
outtextxy(50,190," Group Name: Chalcogen                                                            ");
outtextxy(50,220," Block: p-block  Period: 3                                                        ");
outtextxy(50,250," State: solid at 298 K                                                            ");
outtextxy(50,280," Colour: lemon yellow Classification: Non-metallic                                ");
outtextxy(50,310," Boiling Point: 717.87K                                                 ");
outtextxy(50,340," Melting Point: 388.36K                                                 ");
outtextxy(50,370," Critical temperature: 1314K                              ");
outtextxy(50,400," Density: (alpha) 2.08g/cm3   ");
outtextxy(50,430," Density: (beta) 1.96g/cm3    ");
//outtextxy(50,100," Density: (gamma) 1.92g/cm3  ");
		    delay(20000);
				    cleardevice();outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }


			}
			 else if(an==17)
   {
outtextxy(250,20,"Chlorine ");
  setcolor(YELLOW) ;
outtextxy(250,44,"************");            //                                            ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 17 N: 18 ");//
outtextxy(50,130," Am: 35.452538 g/mol ");//
outtextxy(50,160," Group No: 17");
outtextxy(50,190," Group Name: Halogen");
outtextxy(50,220," Block: p-block  Period: 3");
outtextxy(50,250," State: gas at 298 K");
outtextxy(50,280," Colour: yellowish green Classification: Non-metallic");
outtextxy(50,310," Boiling Point: 239.11K ");
outtextxy(50,340," Melting Point: 171.6K ");
outtextxy(50,370," Critical temperature: 417K ");
outtextxy(50,400," Density: 3.2g/l");
		    delay(10000);
				    cleardevice();outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }

				       }
					else if(an==18)
   {

outtextxy(250,20,"Argon ");
  setcolor(YELLOW) ;
outtextxy(250,44,"**********");              //                                          ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 18 N: 22");
outtextxy(50,130," Am: 39.947677 g/mol");
outtextxy(50,160," Group No: 18");
outtextxy(50,190," Group Name: Noble gas");
outtextxy(50,220," Block: p-block  Period: 3");
outtextxy(50,250," State: gas at 298 K");
outtextxy(50,280," Colour: colourless Classification: Non-metallic");
outtextxy(50,310," Boiling Point: 87.3K");
outtextxy(50,340," Melting Point: 83.80K ");
outtextxy(50,370," Critical temperature: 150.8K ");
outtextxy(50,400," Density: 1.784g/l");
		    delay(10000);
				    cleardevice();outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }


}
 else if(an==19)
   {

outtextxy(250,20,"Potassium ");
  setcolor(YELLOW) ;
outtextxy(250,44,"***************");                //                                        ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 19 N: 20");
outtextxy(50,130," Am: 39.098301 g/mol");
outtextxy(50,160," Group No: 1");
outtextxy(50,190," Group Name: Alkali metal");
outtextxy(50,220," Block: s-block  Period: 4");
outtextxy(50,250," State: solid at 298 K");
outtextxy(50,280," Colour: silvery white Classification: Metallic");
outtextxy(50,310," Boiling Point: 1032K ");
outtextxy(50,340," Melting Point: 336.53K ");
outtextxy(50,370," Critical temperature: 2223K ");
outtextxy(50,400," Density: 0.89g/cm3");
		    delay(10000);
				    cleardevice();outtextxy(0,100,"___Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }

		}
		 else if(an==20)
   {

outtextxy(250,20,"Calcium ");
  setcolor(YELLOW) ;
outtextxy(250,44,"************");                  //                                      ");
  setcolor(LIGHTGREEN) ;
outtextxy(50,100," An: 20 N: 20");
outtextxy(50,130," Am: 40.078023 g/mol");
outtextxy(50,160," Group No: 2");
outtextxy(50,190," Group Name: Alkaline earth metal");
outtextxy(50,220," Block: s-block  Period: 4");
outtextxy(50,250," State: solid at 298 K");
outtextxy(50,280," Colour: silvery white Classification: Metallic");
outtextxy(50,310," Boiling Point: 1757K (1484°C)");
outtextxy(50,340," Melting Point: 1115K (842°C)");
outtextxy(50,370," Density: 1.55g/cm3");
		    delay(10000);
				    cleardevice();outtextxy(20,100,"Do you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
exit(0);

}
else
{ outtextxy(20,100,"please enter atomic no between 1-20");
outtextxy(20,200,"\nDo you want to enter again");
cin>>yes;
if(yes=='y'||yes=='Y')
goto enter;
else
{
    cleardevice();
   settextstyle(7,0,3);
setcolor(LIGHTGREEN);
outtextxy(15,100,"That's all Thank you=>");
delay(5000);
exit(0);
 }

}

   }
   else
   {                   putpixel(random(600),random(500),j+2);

      delay(500);
    setcolor(i);
   line(0,105,0,350);
   line(35,105,35,350);
   line(70,140,70,350);            (100);
   line(105,210,105,350);          (100);
   line(140,210,140,350);          (100);
   line(175,210,175,350);          (100);
   line(210,210,210,350);          (100);
   line(245,210,245,350);          (100);
   line(280,210,280,350);          (100);
   line(315,210,315,350);          (100);
   line(350,210,350,350);          (100);
   line(385,210,385,350);          (100);
   line(420,140,420,350);          (100);
   line(455,140,455,350);          (100);
   line(490,140,490,350);          (100);
   line(525,140,525,350);          (100);
   line(560,140,560,350);          (100);
   line(595,105,595,350);          (100);
   line(630,105,630,350);          (100);
				   (100);
   line(0,105,35,105);             (100);
   line(0,140,70,140);             (100);
   line(0,175,70,175);             (100);
   line(0,210,630,210);            (100);
   line(0,245,630,245);            (100);
   line(0,280,630,280);            (100);
   line(0,315,630,315);            (100);
   line(0,350,630,350);
 (100);

   line(595,105,630,105);  (100);
   line(420,140,630,140);  (100);
   line(420,175,630,175);  (100);
			   (100);
   line(70,385,560,385);   (100);
   line(70,420,560,420);   (100);
   line(70,455,560,455);   (100);
			   (100);
   line(70,385,70,455);    (100);
   line(105,385,105,455);  (100);
   line(140,385,140,455);  (100);
   line(175,385,175,455);  (100);
   line(210,385,210,455);  (100);
   line(245,385,245,455);  (100);
   line(280,385,280,455);  (100);
   line(315,385,315,455);  (100);
   line(350,385,350,455);  (100);
   line(385,385,385,455);  (100);
   line(420,385,420,455);  (100);
   line(455,385,455,455);  (100);
   line(490,385,490,455);  (100);
   line(525,385,525,455);  (100);
   line(560,385,560,455);  (100);
    setcolor(RED);         (100);
   outtextxy(0,7,"#") ;    (100);
   outtextxy(0,27,"!");    (100);
    setcolor(i);           (100);
   line(8,0,630,0);        (100);
   line(8,40,630,40);      (100);
   line(8,20,630,20);      (100);
   line(8,0,8,40);         (100);
   line(35,0,35,40);       (100);
   line(70,0,70,40);       (100);
   line(105,0,105,40);     (100);
   line(140,0,140,40);     (100);
   line(175,0,175,40);     (100);
   line(210,0,210,40);     (100);
   line(245,0,245,40);     (100);
   line(280,20,280,40);    (100);
   line(315,20,315,40);    (100);
   line(350,0,350,40);     (100);
   line(385,0,385,40);     (100);
   line(420,0,420,40);     (100);
   line(455,0,455,40);     (100);
   line(490,0,490,40);     (100);
   line(525,0,525,40);     (100);
   line(560,0,560,40);     (100);
   line(595,0,595,40);     (100);
   line(630,0,630,40);     (100);
   setcolor(MAGENTA);      (100);
			   (100);
   outtextxy(16,90,"1") ;  (100);
   outtextxy(50,125,"2") ; (100);
   outtextxy(85,195,"3") ; (100);
   outtextxy(120,195,"4");  (100);
   outtextxy(155,195,"5") ; (100);
   outtextxy(190,195,"6") ;            (100);
   outtextxy(225,195,"7") ;            (100);
   outtextxy(260,195,"8") ;            (100);
   outtextxy(295,195,"9") ;            (100);
   outtextxy(325,195,"10") ;           (100);
   outtextxy(360,195,"11") ;           (100);
   outtextxy(395,195,"12") ;           (100);
   outtextxy(430,125,"13") ;           (100);
   outtextxy(465,125,"14") ;           (100);
   outtextxy(500,125,"15") ;           (100);
   outtextxy(535,125,"16") ;           (100);
   outtextxy(570,125,"17") ;           (100);
   outtextxy(610,90,"18") ;            (100);
    setcolor(RED);                     (100);
   outtextxy(0,465,"#=old group nos.");       (100);
   outtextxy(150,465,"!=modern group nos.") ; (100);
   outtextxy(320,465,"*=Atomic masses have not been corrected") ;
					     (100);

   setcolor(LIGHTMAGENTA);

   outtextxy(15,8,"I1") ;                   (100);
   outtextxy(40,8,"IIA") ;                  (100);
   outtextxy(73,8,"IIIB") ;                 (100);
   outtextxy(113,8,"IVB") ;                 (100);
   outtextxy(150,8,"VB") ;                  (100);
   outtextxy(180,8,"VIB") ;                 (100);
   outtextxy(213,8,"VIIB") ;                (100);
   outtextxy(285,8,"VIII") ;                (100);
   outtextxy(360,8,"IB") ;                  (100);
   outtextxy(393,8,"IIB") ;                 (100);
   outtextxy(422,8,"IIIA") ;                (100);
   outtextxy(462,8,"IVA") ;                 (100);
   outtextxy(500,8,"VA") ;                  (100);
   outtextxy(532,8,"VIA") ;                 (100);
   outtextxy(568,8,"VII") ;                 (100);
   outtextxy(610,8,"0") ;                   (100);
					    (100);
   setcolor(LIGHTBLUE);                     (100);
   outtextxy(16,28,"1") ;                   (100);
   outtextxy(50,28,"2") ;                   (100);
   outtextxy(85,28,"3") ;                   (100);
   outtextxy(120,28,"4") ;                  (100);
   outtextxy(155,28,"5") ;                  (100);
   outtextxy(190,28,"6") ;                  (100);
   outtextxy(225,28,"7") ;                  (100);
   outtextxy(260,28,"8") ;                  (100);
   outtextxy(295,28,"9") ;                  (100);
   outtextxy(325,28,"10") ;                 (100);
   outtextxy(360,28,"11") ;                 (100);
   outtextxy(395,28,"12") ;                 (100);
   outtextxy(430,28,"13") ;                 (100);
   outtextxy(465,28,"14") ;                 (100);
   outtextxy(500,28,"15") ;                 (100);
   outtextxy(535,28,"16") ;                 (100);
   outtextxy(570,28,"17") ;                 (100);
   outtextxy(610,28,"18") ;                 (100);
					    (100);
	      setcolor(LIGHTCYAN);          (100);
     outtextxy(3,108,"1.0") ;               (100);
     outtextxy(3,143,"6.9") ;               (100);
     outtextxy(3,178,"22.") ;               (100);
     outtextxy(3,213,"39.") ;               (100);
     outtextxy(3,248,"85.") ;               (100);
     outtextxy(3,283,"133.") ;              (100);
     outtextxy(3,318,"223.") ;              (100);
					    (100);
     outtextxy(38,143,"9.1") ;              (100);
     outtextxy(38,178,"24.") ;              (100);
     outtextxy(38,213,"40.") ;              (100);
     outtextxy(38,248,"88.") ;              (100);
     outtextxy(38,283,"137.") ;             (100);
     outtextxy(38,318,"226.") ;             (100);
					    (100);
     outtextxy(76,213,"45.") ;              (100);
     outtextxy(76,248,"89.") ;              (100);
	outtextxy(76,283,"139.") ;          (100);
     outtextxy(76,318,"227*") ;             (100);
					    (100);
					    (100);
					    (100);
     outtextxy(111,213,"48.") ;             (100);
     outtextxy(111,248,"91.") ;             (100);
     outtextxy(111,283,"179.") ;            (100);
     outtextxy(111,318,"261*") ;            (100);
					    (100);
					    (100);
					    (100);
     outtextxy(145,213,"51.") ;             (100);
     outtextxy(145,248,"93.") ;             (100);
     outtextxy(145,283,"181.") ;            (100);
     outtextxy(145,318,"261*") ;            (100);


     outtextxy(180,213,"52.") ;            (100);
     outtextxy(180,248,"96.") ;            (100);
     outtextxy(180,283,"184.") ;           (100);
     outtextxy(180,318,"263*") ;           (100);
					   (100);
					   (100);
					   (100);
     outtextxy(215,213,"55.") ;            (100);
     outtextxy(215,248,"99.") ;            (100);
     outtextxy(215,283,"186.") ;           (100);
     outtextxy(215,318,"262*") ;           (100);
					   (100);
					   (100);
     outtextxy(249,213,"56.") ;            (100);
     outtextxy(249,248,"101.") ;           (100);
     outtextxy(249,283,"190.") ;           (100);
     outtextxy(249,318,"265*") ;           (100);
					   (100);
					   (100);
     outtextxy(285,213,"59.") ;            (100);
     outtextxy(285,248,"103.") ;           (100);
     outtextxy(285,283,"192.") ;           (100);
     outtextxy(285,318,"268*") ;           (100);
					   (100);
					   (100);
     outtextxy(320,213,"59.") ;            (100);
     outtextxy(320,248,"106.") ;           (100);
     outtextxy(320,283,"195.") ;           (100);
     outtextxy(320,318,"269*") ;           (100);
					   (100);

     outtextxy(355,213,"64.") ;            (100);
     outtextxy(355,248,"108.") ;           (100);
     outtextxy(355,283,"197.") ;           (100);
     outtextxy(355,318,"272*") ;           (100);
					   (100);
					   (100);
     outtextxy(390,213,"65.") ;            (100);
     outtextxy(390,248,"112.") ;           (100);
     outtextxy(390,283,"201.") ;           (100);
     outtextxy(390,318,"277*") ;           (100);
					   (100);
					   (100);
     outtextxy(425,143,"11.") ;            (100);
     outtextxy(425,178,"27.") ;            (100);
     outtextxy(425,213,"70.") ;            (100);
     outtextxy(425,248,"115.") ;           (100);
     outtextxy(425,283,"204.") ;           (100);
     outtextxy(425,318,"284*") ;           (100);
					   (100);
					   (100);
					   (100);
     outtextxy(460,143,"12.") ;            (100);
     outtextxy(460,178,"28.") ;            (100);
     outtextxy(460,213,"70.") ;            (100);
     outtextxy(460,248,"119.") ;           (100);
     outtextxy(460,283,"207.") ;           (100);
     outtextxy(460,318,"289*") ;           (100);


     outtextxy(495,143,"14.") ;            (100);
     outtextxy(495,178,"31.") ;            (100);
     outtextxy(495,213,"75.") ;            (100);
     outtextxy(495,248,"122.") ;           (100);
     outtextxy(495,283,"209.") ;           (100);
     outtextxy(495,318,"288*") ;           (100);
					   (100);
					   (100);
     outtextxy(530,143,"16.") ;            (100);
     outtextxy(530,178,"32.") ;            (100);
     outtextxy(530,213,"79.") ;            (100);
     outtextxy(530,248,"128.") ;           (100);
     outtextxy(530,283,"210.") ;           (100);
     outtextxy(530,318,"292*") ;           (100);

     outtextxy(565,143,"18.") ;            (100);
     outtextxy(565,178,"35.5") ;           (100);
     outtextxy(565,213,"90") ;             (100);
     outtextxy(565,248,"127.") ;           (100);
     outtextxy(565,283,"210.") ;           (100);
     outtextxy(565,318,"294*") ;           (100);


     outtextxy(600,108,"4.0") ;            (100);
     outtextxy(600,143,"20.") ;            (100);
     outtextxy(600,178,"40.") ;            (100);
     outtextxy(600,213,"84.") ;            (100);
     outtextxy(600,248,"131.") ;           (100);
     outtextxy(600,283,"222.") ;           (100);
     outtextxy(600,318,"296*") ;           (100);


     outtextxy(72,388,"140.") ;            (100);
     outtextxy(72,423,"232*") ;            (100);

     outtextxy(107,388,"141.") ;           (100);
     outtextxy(107,423,"231*") ;           (100);

     outtextxy(143,388,"144.") ;           (100);
     outtextxy(143,423,"238*") ;           (100);

     outtextxy(178,388,"147*") ;           (100);
     outtextxy(178,423,"237*") ;           (100);

     outtextxy(213,388,"150.") ;           (100);
     outtextxy(213,423,"244*") ;           (100);

     outtextxy(248,388,"152.") ;           (100);
     outtextxy(248,423,"248*") ;           (100);

     outtextxy(283,388,"157.") ;           (100);
     outtextxy(283,423,"247*") ;           (100);

     outtextxy(318,388,"159.") ;           (100);
     outtextxy(318,423,"247*") ;           (100);

     outtextxy(353,388,"163.") ;           (100);
     outtextxy(353,423,"251*") ;           (100);

     outtextxy(388,388,"165.") ;           (100);
     outtextxy(388,423,"252*") ;           (100);

     outtextxy(423,388,"167.") ;           (100);
     outtextxy(423,423,"257*") ;           (100);

     outtextxy(458,388,"169.") ;                       (100);
     outtextxy(458,423,"258*") ;           (100);

     outtextxy(493,388,"173.") ;           (100);
     outtextxy(493,423,"259*") ;           (100);

     outtextxy(528,388,"175.") ;           (100);
     outtextxy(528,423,"262*") ;           (100);

   setcolor(YELLOW) ;                      (100);
     outtextxy(3,130,"1") ;                (100);
     outtextxy(3,165,"3") ;                (100);
     outtextxy(3,200,"11") ;               (100);
     outtextxy(3,235,"19") ;               (100);
     outtextxy(3,270,"37") ;               (100);
     outtextxy(3,305,"55") ;               (100);
     outtextxy(3,340,"87") ;               (100);

     outtextxy(38,165,"4") ;               (100);
     outtextxy(38,200,"12") ;              (100);
     outtextxy(38,235,"20") ;              (100);
     outtextxy(38,270,"38") ;              (100);
     outtextxy(38,305,"56") ;              (100);
     outtextxy(38,340,"88") ;              (100);

     outtextxy(76,235,"21") ;              (100);
     outtextxy(76,270,"39") ;              (100);
     outtextxy(76,305,"57") ;              (100);
     outtextxy(76,340,"89") ;              (100);



     outtextxy(111,235,"22") ;             (100);
     outtextxy(111,270,"40") ;             (100);
     outtextxy(111,305,"72") ;             (100);
     outtextxy(111,340,"104") ;            (100);

     outtextxy(145,235,"23") ;             (100);
     outtextxy(145,270,"41") ;             (100);
     outtextxy(145,305,"73") ;             (100);
     outtextxy(145,340,"105") ;            (100);

     outtextxy(180,235,"24") ;             (100);
     outtextxy(180,270,"42") ;             (100);
     outtextxy(180,305,"74") ;             (100);
     outtextxy(180,340,"106") ;            (100);

     outtextxy(215,235,"25") ;             (100);
     outtextxy(215,270,"43") ;             (100);
     outtextxy(215,305,"75") ;             (100);
     outtextxy(215,340,"107") ;            (100);

     outtextxy(249,235,"26") ;             (100);
     outtextxy(249,270,"44") ;             (100);
     outtextxy(249,305,"76") ;             (100);
     outtextxy(249,340,"108") ;            (100);

     outtextxy(285,235,"27") ;             (100);
     outtextxy(285,270,"45") ;             (100);
     outtextxy(285,305,"77") ;             (100);
     outtextxy(285,340,"109") ;            (100);

     outtextxy(320,235,"28") ;             (100);
     outtextxy(320,270,"46") ;             (100);
     outtextxy(320,305,"78") ;             (100);
     outtextxy(320,340,"110") ;            (100);

     outtextxy(355,235,"29") ;             (100);
     outtextxy(355,270,"47") ;             (100);
     outtextxy(355,305,"79") ;             (100);
     outtextxy(355,340,"111") ;            (100);
					   (100);

     outtextxy(390,235,"30") ;             (100);
     outtextxy(390,270,"48") ;             (100);
     outtextxy(390,305,"80") ;             (100);
     outtextxy(390,340,"112") ;            (100);

     outtextxy(425,165,"5") ;              (100);
     outtextxy(425,200,"13") ;             (100);
     outtextxy(425,235,"31") ;             (100);
     outtextxy(425,270,"49") ;             (100);
     outtextxy(425,305,"81") ;             (100);
     outtextxy(425,340,"113") ;            (100);

     outtextxy(460,165,"6") ;              (100);
     outtextxy(460,200,"14") ;             (100);
     outtextxy(460,235,"32") ;             (100);
     outtextxy(460,270,"50") ;             (100);
     outtextxy(460,305,"82") ;             (100); (100);
     outtextxy(460,340,"114") ;            (100);

     outtextxy(495,165,"7") ;              (100);
     outtextxy(495,200,"15") ;             (100);
     outtextxy(495,235,"33") ;             (100);
     outtextxy(495,270,"51") ;             (100);
     outtextxy(495,305,"83") ;             (100);
     outtextxy(495,340,"115") ;            (100);

     outtextxy(530,165,"8") ;              (100);
     outtextxy(530,200,"16") ;             (100);
     outtextxy(530,235,"34") ;             (100);
     outtextxy(530,270,"52") ;             (100);
     outtextxy(530,305,"84") ;             (100);
     outtextxy(530,340,"116") ;            (100);

     outtextxy(565,165,"9") ;              (100);
     outtextxy(565,200,"17") ;             (100);
     outtextxy(565,235,"35") ;             (100);
     outtextxy(565,270,"53") ;             (100);
     outtextxy(565,305,"85") ;             (100);
     outtextxy(565,340,"117") ;            (100);

     outtextxy(600,130,"2") ;              (100);
     outtextxy(600,165,"10") ;             (100);
     outtextxy(600,200,"18") ;             (100);
     outtextxy(600,235,"36") ;             (100);
     outtextxy(600,270,"54") ;               (100);
     outtextxy(600,305,"86") ;          (100);
     outtextxy(600,340,"118") ;            (100);
					   (100);
     outtextxy(72,410,"58") ;              (100);
     outtextxy(72,445,"90") ;              (100);

     outtextxy(107,410,"59") ;             (100);
     outtextxy(107,445,"91") ;             (100);


     outtextxy(143,410,"60") ;             (100);
     outtextxy(143,445,"92") ;             (100);

     outtextxy(178,410,"61") ;             (100);
     outtextxy(178,445,"93") ;             (100); (100);

     outtextxy(213,410,"62") ;             (100);
     outtextxy(213,445,"94") ;             (100);

     outtextxy(248,410,"63") ;             (100);
     outtextxy(248,445,"95") ;             (100);


     outtextxy(283,410,"64") ;             (100);
     outtextxy(283,445,"96") ;             (100);


     outtextxy(318,410,"65") ;             (100);
     outtextxy(318,445,"97") ;             (100);					   (100); (100);

     outtextxy(353,410,"66") ;             (100);
     outtextxy(353,445,"98") ;             (100);

     outtextxy(388,410,"67") ;             (100);
     outtextxy(388,445,"99") ;             (100);

     outtextxy(423,410,"68") ;             (100);
     outtextxy(423,445,"100") ;            (100);

     outtextxy(458,410,"69") ;             (100);
     outtextxy(458,445,"101") ;            (100);
     outtextxy(493,410,"70") ;             (100);
     outtextxy(493,445,"102") ;            (100);


     outtextxy(528,410,"71") ;             (100);
     outtextxy(528,445,"103") ;            (100);

  setcolor(i);
    line(230,110,230,160);                 (100);
    line(230,110,280,110);                 (100);
    line(280,110,280,160);                 (100);
    line(230,160,280,160);                 (100);

     setcolor(GREEN);                      (100);
    outtextxy(240,115,"55.9") ;            (100);
    outtextxy(240,150,"26") ;              (100);
    outtextxy(245,133,"Fe") ;              (100);
     setcolor(LIGHTRED);                   (100);

    outtextxy(115,100,"Relative ");        (100);
    outtextxy(115,115,"Atomic mass==>") ;  (100);

    outtextxy(290,135,"<==Symbol") ;       (100);
    outtextxy(120,149,"Atomic no.==>") ;   (100);

   outtextxy(230,56,"LONG FORM OF ") ;     (100);

   settextstyle(0,0,2);                    (100);
   {setcolor(14);                           (100);
   {outtextxy(110,70,"THE PERIODIC TABLE"); (100);
   outtextxy(110,72,"__________________");} (100);
    }                                       (100);
   setcolor(LIGHTGREEN);                    (100);

   settextstyle(0,0,0);                     (100);
 outtextxy(0,83,"|--------|");              (100);
 outtextxy(15,75,"(ns   )");                (100);
 outtextxy(22,69,"  1-2");                  (100);
 outtextxy(15,57,"s-BLOCK");                (100);
					    (100);
 outtextxy(413,60,"|-----p-BLOCK elements-----|");      (100);
 outtextxy(500,80,"(np   )");                          (100);
 outtextxy(525,73,"1-6");                              (100);

 outtextxy(70,164,"|-------d-BLOCK(TRANSITION ELEMENTS)-------|");  (100);
 outtextxy(180,184,"[(n-1)d    ns   ]");                            (100);
  outtextxy(235,175,"1-10  0-2");                                   (100);
								    (100);

  outtextxy(70,355,"|--------f-BLOCK/INNER TRANSITION ELEMENTS(RARE EARTHS)------|");         (100);
  outtextxy(230,372,"[(n-2)f    (n-1)d   ns ]");                     (100);
  outtextxy(285,364,"0-14      0-1  2");                            (100);


setcolor(RED);                                            (100);
outtextxy(10,120,"H");                                              (100);
outtextxy(10,155,"Li");                                           (100);
outtextxy(10,190,"Na");                                             (100);
outtextxy(10,225,"k");                                              (100);
outtextxy(10,260,"Rb");                                             (100);
outtextxy(10,295,"Cs");                                             (100);
outtextxy(10,330,"Fr");                                             (100);
outtextxy(44,155,"Be");                                             (100);
outtextxy(44,190,"Mg");                                             (100);
outtextxy(44,225,"Ca");                                             (100);
outtextxy(44,260,"Sr");                                             (100);
outtextxy(44,295,"Ba");                                             (100);
outtextxy(44,330,"Ra");                                             (100);
setcolor(LIGHTGREEN);
outtextxy(80,225,"Sc");                                             (100);
outtextxy(80,260,"Y");                                              (100);
outtextxy(80,295,"La");                                             (100);
outtextxy(80,330,"Ac");                                             (100);
outtextxy(115,225,"Ti");                                            (100);
outtextxy(115,260,"Zr");                                            (100);
outtextxy(115,295,"Hf");                                            (100);
outtextxy(115,330,"Rf");                                            (100);
outtextxy(150,225,"V");                                             (100);
outtextxy(150,260,"Nb");                                            (100);
outtextxy(150,295,"Ta");                                            (100);
outtextxy(150,330,"Db");                                            (100);
outtextxy(185,225,"Cr");                                            (100);
outtextxy(185,260,"Mo");                                                        (100);
outtextxy(185,295,"W");                                             (100);
outtextxy(185,330,"Sg");                                                        (100);
outtextxy(220,225,"Mn");                                            (100);
outtextxy(220,260,"Tc");                                            (100);
outtextxy(220,295,"Re");                                            (100);
outtextxy(220,330,"Bh");                                            (100);
outtextxy(255,225,"Fe");                                            (100);
outtextxy(255,260,"Ru");                                            (100);
outtextxy(255,295,"Os");                                            (100);
outtextxy(255,330,"Hs");                                                        (100);
outtextxy(290,225,"Co");                                            (100);
outtextxy(290,260,"Rh");                                            (100);
outtextxy(290,295,"Ir");                                            (100);
outtextxy(290,330,"Mt");                                            (100);
outtextxy(325,225,"Ni");                                            (100);
outtextxy(325,260,"Pd");                                            (100);
outtextxy(325,295,"Pt");                                                        (100);
outtextxy(320,330,"Uun");                                           (100);
outtextxy(360,225,"Cu");                                            (100);
outtextxy(360,260,"Ag");                                            (100);
outtextxy(360,290,"Au");                                            (100);
outtextxy(360,330,"Rg");                                                      (100);
outtextxy(390,225,"Zn");                                            (100);
outtextxy(390,260,"Cd");                                            (100);
outtextxy(390,295,"Hg");                                            (100);
outtextxy(390,330,"Cn");                                            (100); (100);
setcolor(LIGHTBLUE);                                                (100);
outtextxy(430,155,"B");                                             (100);
outtextxy(430,190,"Al");                                            (100);
outtextxy(430,225,"Ga");                                                      (100);
outtextxy(430,260,"In");                                            (100);
outtextxy(430,295,"Ti");                                            (100);
outtextxy(430,330,"Uut");                                                       (100);
outtextxy(465,155,"C");                                             (100);
outtextxy(465,190,"Si");                                                        (100);
outtextxy(465,225,"Ge");                                            (100);
outtextxy(465,260,"Sn");                                            (100);
outtextxy(465,295,"Pb");                                                        (100);
outtextxy(465,330,"Uuq");                                           (100);
outtextxy(500,155,"N");                                             (100);
outtextxy(500,190,"P");                                             (100);
outtextxy(500,225,"As");                                                        (100);
outtextxy(500,260,"Sb");                                            (100);
outtextxy(500,295,"Bi");                                            (100);
outtextxy(500,330,"Uup");                                           (100);
outtextxy(535,155,"O");                                             (100);
outtextxy(535,190,"S");                                             (100);
outtextxy(535,225,"Se");                                            (100);
outtextxy(535,260,"Te");                                               (100);
outtextxy(535,295,"Po");                                            (100);
outtextxy(535,330,"Uuh");                                              (100);
outtextxy(565,155,"F");                                             (100);
outtextxy(565,190,"Cl");                                            (100);
outtextxy(565,225,"Br");                                            (100);
outtextxy(565,260,"I");                                             (100);
outtextxy(565,295,"At");                                            (100);
outtextxy(565,330,"Uus");                                           (100);
outtextxy(605,120,"He");                                            (100);
outtextxy(605,155,"Ne");                                            (100);
outtextxy(605,190,"Ar");                                            (100); (100);
outtextxy(605,225,"Kr");                                            (100);
outtextxy(605,260,"Xe");                                            (100);
outtextxy(605,295,"Rn");                                            (100);
outtextxy(605,330,"Uuo");                                           (100);
setcolor(LIGHTMAGENTA);                                             (100);
outtextxy(80,400,"Ce");                                                (100);
outtextxy(80,435,"Th");                                             (100);
outtextxy(115,400,"Pr");                                                        (100);
outtextxy(115,435,"Pa");                                            (100);
outtextxy(150,400,"Nd");                                                        (100);
outtextxy(150,435,"U");                                             (100);
outtextxy(185,400,"Pm");                                                        (100);
outtextxy(185,435,"Np");                                            (100);
outtextxy(220,400,"Sm");                                            (100);
outtextxy(220,435,"Pu");                                            (100);
outtextxy(255,400,"Eu");                                            (100);
outtextxy(255,435,"Am");                                            (100);
outtextxy(290,400,"Gd");                                                        (100);
outtextxy(290,435,"Cm");                                            (100);
outtextxy(325,400,"Tb");                                            (100);
outtextxy(325,435,"Bk");                                            (100);
outtextxy(360,400,"Dy");                                            (100);
outtextxy(360,435,"Cf");                                            (100);
outtextxy(395,400,"Ho");                                            (100);
outtextxy(395,435,"Es");                                            (100);
outtextxy(430,400,"Er");                                            (100);
outtextxy(430,435,"Fm");                                            (100);
outtextxy(465,400,"Tm");                                            (100);
outtextxy(465,435,"Md");                                            (100);
outtextxy(500,400,"Yb");                                            (100);
outtextxy(500,435,"No");                                                 (100);
outtextxy(535,400,"Lu");                                            (100);
outtextxy(535,435,"Lr");                                            (100);
								    (100);



    }

}
   getch();
   closegraph();
   }
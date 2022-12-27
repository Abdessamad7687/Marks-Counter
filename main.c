#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <windows.h>

void gotoxy(short x,short y);
void gotoxy(short x, short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void textcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
}
int main()
{
	int i=0;
	system("color 07");
	float note1,note2,note3,note4,note5,note6,note7,note8,note9,note10,note11;
	float notes,coef,moyenne;

	gotoxy(20,2); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
	gotoxy(20,3); printf("³        Matieres        ³ Coefficient  ³    Note    ³  Note*coef ³ Commentaires ³");	
	gotoxy(20,4); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	gotoxy(20,5); printf("³          Java          ³      4       ³            ³            ³              ³");
	gotoxy(20,6); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	gotoxy(20,7); printf("³          TEC           ³      1.5     ³            ³            ³              ³");
	gotoxy(20,8); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	gotoxy(20,9); printf("³        Dot net         ³      2       ³            ³            ³              ³");
	gotoxy(20,10);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	gotoxy(20,11);printf("³       Marketing        ³      1.5     ³            ³            ³              ³");
	gotoxy(20,12);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	gotoxy(20,13);printf("³     Compilation        ³       2      ³            ³            ³              ³");
	gotoxy(20,14);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	gotoxy(20,15);printf("³ Administration Oracle  ³       2      ³            ³            ³              ³");
	gotoxy(20,16);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	gotoxy(20,17);printf("³           UML          ³       2      ³            ³            ³              ³");
	gotoxy(20,18);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	gotoxy(20,19);printf("³  Administration UNIX   ³       3      ³            ³            ³              ³");
	gotoxy(20,20);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	gotoxy(20,21);printf("³        Anglais         ³      1.5     ³            ³            ³              ³");
	gotoxy(20,22);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	gotoxy(20,23);printf("³    Gestion de projet   ³      1.5     ³            ³            ³              ³");
	gotoxy(20,24);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	gotoxy(20,25);printf("³  Stage d 'initiation   ³      4       ³            ³            ³              ³");
	gotoxy(20,26);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	gotoxy(20,27);printf("³                        ³      28      ³            ³            ³              ³");
	gotoxy(20,28);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

	textcolor(8);gotoxy(29,27);printf("Total");
	do{
		gotoxy(64,5); textcolor(6);scanf("%f",&note1);
	}while(note1 < 0 || note1 > 20);
	gotoxy(78,5);printf("%.2f",note1*4);
	if(note1>=10)
		{
			textcolor(2);gotoxy(92,5);printf("ok");
		}
	if(note1<10)
		{
			textcolor(4);gotoxy(90,5);printf("Pas ok");
		}

	gotoxy(64,7); textcolor(6);scanf("%f",&note2);
	gotoxy(78,7);printf("%.2f",note2*1.5);
	if(note2>=10)
		{
			textcolor(2);gotoxy(92,7);printf("ok");
		}
	if(note2<10)
		{
			textcolor(4);gotoxy(90,7);printf("Pas ok");
		}

	gotoxy(64,9); textcolor(6);scanf("%f",&note3);
	gotoxy(78,9);printf("%.2f",note3*2);
	if(note3>=10)
		{
			textcolor(2);gotoxy(92,9);printf("ok");
		}
	if(note3<10)
		{
			textcolor(4);gotoxy(90,9);printf("Pas ok");
		}

	gotoxy(64,11);textcolor(6);scanf("%f",&note4);
	gotoxy(78,11);printf("%.2f",note4*1.5);
	if(note4>=10)
		{
			textcolor(2);gotoxy(92,11);printf("ok");
		}
	if(note4<10)
		{
			textcolor(4);gotoxy(90,11);printf("Pas ok");
		}

	gotoxy(64,13);textcolor(6);scanf("%f",&note5);
	gotoxy(78,13);printf("%.2f",note5*2);
	if(note5>=10)
		{
			textcolor(2);gotoxy(92,13);printf("ok");
		}
	if(note5<10)
		{
			textcolor(4);gotoxy(90,13);printf("Pas ok");
		}

	gotoxy(64,15);textcolor(6);scanf("%f",&note6);
	gotoxy(78,15);printf("%.2f",note6*2);
	if(note6>=10)
		{
			textcolor(2);gotoxy(92,15);printf("ok");
		}
	if(note6<10)
		{
			textcolor(4);gotoxy(90,15);printf("Pas ok");
		}

	gotoxy(64,17);textcolor(6);scanf("%f",&note7);
	gotoxy(78,17);printf("%.2f",note7*2);
	if(note7>=10)
		{
			textcolor(2);gotoxy(92,17);printf("ok");
		}
	if(note7<10)
		{
			textcolor(4);gotoxy(90,17);printf("Pas ok");
		}

	gotoxy(64,19);textcolor(6);scanf("%f",&note8);
	gotoxy(78,19);printf("%.2f",note8*3);
	if(note8>=10)
		{
			textcolor(2);gotoxy(92,19);printf("ok");
		}
		if(note8<10)
		{
			textcolor(4);gotoxy(90,19);printf("Pas ok");
		}

	gotoxy(64,21);textcolor(6);scanf("%f",&note9);
	gotoxy(78,21);printf("%.2f",note9*1.5);
	if(note9>=10)
		{
			textcolor(2);gotoxy(92,21);printf("ok");
		}
	if(note9<10)
		{
			textcolor(4);gotoxy(90,21);printf("Pas ok");
		}

	gotoxy(64,23);textcolor(6);scanf("%f",&note10);
	gotoxy(78,23);printf("%.2f",note10*1.5);
	if(note10>=10)
		{
			textcolor(2);gotoxy(92,23);printf("ok");
		}
	if(note10<10)
		{
			textcolor(4);gotoxy(90,23);printf("Pas ok");
		}

	gotoxy(64,25);textcolor(6);scanf("%f",&note11);
	gotoxy(78,25);printf("%.2f",note11*4);
	if(note11>=10)
		{
			textcolor(2);gotoxy(92,25);printf("ok");
		}
	if(note11<10)
		{
			textcolor(4);gotoxy(90,25);printf("Pas ok");
		}

	notes = note1+note2+note3+note4+note5+note6+note7+note8+note9+note10+note11;

		gotoxy(64,27);printf("%.2f",notes);


		coef = (note1*4)+(note2*1.5)+(note3*2)+(note4*1.5)+(note5*2)+(note6*2)+(note7*2)+(note8*3)+(note9*1.5)+(note10*1.5)+(note11*4);

		moyenne=coef/28;

		gotoxy(78,27);printf("%.0f",coef);
		gotoxy(91,27);printf("%.2f",moyenne);

		puts("\n\n");

		getch();
	return 0;
}

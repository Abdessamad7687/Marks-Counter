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

	gotoxy(20,2); printf("旼컴컴컴컴컴컴컴컴컴컴컴컫컴컴컴컴컴컴컴쩡컴컴컴컴컴컫컴컴컴컴컴컴쩡컴컴컴컴컴컴커");
	gotoxy(20,3); printf("?        Matieres        ? Coefficient  ?    Note    ?  Note*coef ? Commentaires ?");
	gotoxy(20,4); printf("쳐컴컴컴컴컴컴컴컴컴컴컴컵컴컴컴컴컴컴컴탠컴컴컴컴컴컵컴컴컴컴컴컴탠컴컴컴컴컴컴캑");
	gotoxy(20,5); printf("? Programmation Avancee  ?      4       ?            ?            ?              ?");
	gotoxy(20,6); printf("쳐컴컴컴컴컴컴컴컴컴컴컴컵컴컴컴컴컴컴컴탠컴컴컴컴컴컵컴컴컴컴컴컴탠컴컴컴컴컴컴캑");
	gotoxy(20,7); printf("?   Macro Economie       ?      3       ?            ?            ?              ?");
	gotoxy(20,8); printf("쳐컴컴컴컴컴컴컴컴컴컴컴컵컴컴컴컴컴컴컴탠컴컴컴컴컴컵컴컴컴컴컴컴탠컴컴컴컴컴컴캑");
	gotoxy(20,9); printf("?        Analyse         ?      3       ?            ?            ?              ?");
	gotoxy(20,10);printf("쳐컴컴컴컴컴컴컴컴컴컴컴컵컴컴컴컴컴컴컴탠컴컴컴컴컴컵컴컴컴컴컴컴탠컴컴컴컴컴컴캑");
	gotoxy(20,11);printf("?    Microprocesseur     ?      2       ?            ?            ?              ?");
	gotoxy(20,12);printf("쳐컴컴컴컴컴컴컴컴컴컴컴컵컴컴컴컴컴컴컴탠컴컴컴컴컴컵컴컴컴컴컴컴탠컴컴컴컴컴컴캑");
	gotoxy(20,13);printf("?     Automatismes       ?      3       ?            ?            ?              ?");
	gotoxy(20,14);printf("쳐컴컴컴컴컴컴컴컴컴컴컴컵컴컴컴컴컴컴컴탠컴컴컴컴컴컵컴컴컴컴컴컴탠컴컴컴컴컴컴캑");
	gotoxy(20,15);printf("쿐lectronique Analogique ?      2       ?            ?            ?              ?");
	gotoxy(20,16);printf("쳐컴컴컴컴컴컴컴컴컴컴컴컵컴컴컴컴컴컴컴탠컴컴컴컴컴컵컴컴컴컴컴컴탠컴컴컴컴컴컴캑");
	gotoxy(20,17);printf("?      Probabilite       ?      3       ?            ?            ?              ?");
	gotoxy(20,18);printf("쳐컴컴컴컴컴컴컴컴컴컴컴컵컴컴컴컴컴컴컴탠컴컴컴컴컴컵컴컴컴컴컴컴탠컴컴컴컴컴컴캑");
	gotoxy(20,19);printf("쿟P_Electronique_Analogic?      2       ?            ?            ?              ?");
	gotoxy(20,20);printf("쳐컴컴컴컴컴컴컴컴컴컴컴컵컴컴컴컴컴컴컴탠컴컴컴컴컴컵컴컴컴컴컴컴탠컴컴컴컴컴컴캑");
	gotoxy(20,21);printf("?        Anglais         ?      1       ?            ?            ?              ?");
	gotoxy(20,22);printf("쳐컴컴컴컴컴컴컴컴컴컴컴컵컴컴컴컴컴컴컴탠컴컴컴컴컴컵컴컴컴컴컴컴탠컴컴컴컴컴컴캑");
	gotoxy(20,23);printf("?          TEC           ?      1       ?            ?            ?              ?");
	gotoxy(20,24);printf("쳐컴컴컴컴컴컴컴컴컴컴컴컵컴컴컴컴컴컴컴탠컴컴컴컴컴컵컴컴컴컴컴컴탠컴컴컴컴컴컴캑");
	gotoxy(20,25);printf("쿞ystemes D'Exploitations?      2       ?            ?            ?              ?");
	gotoxy(20,26);printf("쳐컴컴컴컴컴컴컴컴컴컴컴컵컴컴컴컴컴컴컴탠컴컴컴컴컴컵컴컴컴컴컴컴탠컴컴컴컴컴컴캑");
	gotoxy(20,27);printf("?                        ?      26      ?            ?            ?              ?");
	gotoxy(20,28);printf("읕컴컴컴컴컴컴컴컴컴컴컴컨컴컴컴컴컴컴컴좔컴컴컴컴컴컨컴컴컴컴컴컴좔컴컴컴컴컴컴켸");

	textcolor(8);gotoxy(29,27);printf("Total");
	gotoxy(64,5); textcolor(6);scanf("%f",&note1);
	gotoxy(78,5);printf("%.2f",note1*4);
	if(note1>=10)
		{
			textcolor(2);gotoxy(92,5);printf("Admis");
		}
	if(note1<10)
		{
			textcolor(4);gotoxy(90,5);printf("Non Admis");
		}

	gotoxy(64,7); textcolor(6);scanf("%f",&note2);
	gotoxy(78,7);printf("%.2f",note2*3);
	if(note2>=10)
		{
			textcolor(2);gotoxy(92,7);printf("Admis");
		}
	if(note2<10)
		{
			textcolor(4);gotoxy(90,7);printf("Non Admis");
		}

	gotoxy(64,9); textcolor(6);scanf("%f",&note3);
	gotoxy(78,9);printf("%.2f",note3*3);
	if(note3>=10)
		{
			textcolor(2);gotoxy(92,9);printf("Admis");
		}
	if(note3<10)
		{
			textcolor(4);gotoxy(90,9);printf("Non Admis");
		}

	gotoxy(64,11);textcolor(6);scanf("%f",&note4);
	gotoxy(78,11);printf("%.2f",note4*2);
	if(note4>=10)
		{
			textcolor(2);gotoxy(92,11);printf("Admis");
		}
	if(note4<10)
		{
			textcolor(4);gotoxy(90,11);printf("Non Admis");
		}

	gotoxy(64,13);textcolor(6);scanf("%f",&note5);
	gotoxy(78,13);printf("%.2f",note5*3);
	if(note5>=10)
		{
			textcolor(2);gotoxy(92,13);printf("Admis");
		}
	if(note5<10)
		{
			textcolor(4);gotoxy(90,13);printf("Non Admis");
		}

	gotoxy(64,15);textcolor(6);scanf("%f",&note6);
	gotoxy(78,15);printf("%.2f",note6*2);
	if(note6>=10)
		{
			textcolor(2);gotoxy(92,15);printf("Admis");
		}
	if(note6<10)
		{
			textcolor(4);gotoxy(90,15);printf("Non Admis");
		}

	gotoxy(64,17);textcolor(6);scanf("%f",&note7);
	gotoxy(78,17);printf("%.2f",note7*3);
	if(note7>=10)
		{
			textcolor(2);gotoxy(92,17);printf("Admis");
		}
	if(note7<10)
		{
			textcolor(4);gotoxy(90,17);printf("Non Admis");
		}

	gotoxy(64,19);textcolor(6);scanf("%f",&note8);
	gotoxy(78,19);printf("%.2f",note8*2);
	if(note8>=10)
		{
			textcolor(2);gotoxy(92,19);printf("Admis");
		}
		if(note8<10)
		{
			textcolor(4);gotoxy(90,19);printf("Non Admis");
		}

	gotoxy(64,21);textcolor(6);scanf("%f",&note9);
	gotoxy(78,21);printf("%.2f",note9*1);
	if(note9>=10)
		{
			textcolor(2);gotoxy(92,21);printf("Admis");
		}
	if(note9<10)
		{
			textcolor(4);gotoxy(90,21);printf("Non Admis");
		}

	gotoxy(64,23);textcolor(6);scanf("%f",&note10);
	gotoxy(78,23);printf("%.2f",note10*1);
	if(note10>=10)
		{
			textcolor(2);gotoxy(92,23);printf("Admis");
		}
	if(note10<10)
		{
			textcolor(4);gotoxy(90,23);printf("Non Admis");
		}

	gotoxy(64,25);textcolor(6);scanf("%f",&note11);
	gotoxy(78,25);printf("%.2f",note11*2);
	if(note11>=10)
		{
			textcolor(2);gotoxy(92,25);printf("Admis");
		}
	if(note11<10)
		{
			textcolor(4);gotoxy(90,25);printf("Non Admis");
		}

	notes = note1+note2+note3+note4+note5+note6+note7+note8+note9+note10+note11;

		gotoxy(64,27);printf("%.2f",notes);


		coef = (note1*4)+(note2*3)+(note3*3)+(note4*2)+(note5*3)+(note6*2)+(note7*3)+(note8*2)+(note9*1)+(note10*1)+(note11*2);

		moyenne=coef/26;

		gotoxy(78,27);printf("%.0f",coef);
		gotoxy(91,27);printf("%.2f",moyenne);

		puts("\n\n");

		getch();
	return 0;
}

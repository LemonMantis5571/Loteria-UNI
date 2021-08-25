#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <dos.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

void logo(void)
{
    int figura1=13;
    int figura2=22;
    int figura3=17;
    int figura4=13;
    int figura5=13;
    int figura6=13;
    int figura7=17;
    int figura8=22;
    int figura9=13;

        textcolor(BLUE);
        while(figura1<=24)
        {
            gotoxy(17,figura1);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura1++;
        }

        while(figura2<=24)
        {
            gotoxy(18,figura2);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura2++;
        }

        while(figura3<=24)
        {
            gotoxy(35,figura3);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura3++;
        }

        while(figura4<=20)
        {
            gotoxy(26,figura4);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura4++;
        }

        while(figura5<=24)
        {
            gotoxy(44,figura5);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura5++;
        }

        while(figura6<=15)
        {
            gotoxy(54,figura6);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura6++;
        }

        while(figura7<=24)
        {
            gotoxy(54,figura7);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura7++;
        }

        while(figura8<=24)
        {
            gotoxy(44,figura8);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura8++;
        }

        while(figura9<=15)
        {
            gotoxy(28,figura9);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);        
            figura9++;
        }
}

void carga(void)
{

  int a=20,b=0,porcentaje=2;
  system("cls");
  textbackground(BLACK);
  while(b<=49)
    {
    gotoxy(30,15);
    textcolor(CYAN + BLINK);
    cprintf("Cargando, por favor espere");
	gotoxy(a,20);printf("%c",219);delay(200);
	b++;
	a++;
    porcentaje+=2;
    gotoxy(40,23);
    printf("%d %s",porcentaje,"%");
    }
}

void presentacion(void)
{
    FILE *p;
    char ch;
    system("cls");
    p=fopen("AAA.txt","r");

    if(p==NULL)
    {
        printf("Archivo no encontrado");
    }
	else ch=fgetc(p);

    while(ch!=EOF)
    {
		delay(50);
		printf("%c",ch);
		ch=fgetc(p);

    }

    fclose(p);
}

void logogrande(void)
{
    int i=0;
    textbackground(LIGHTGRAY);
    while(i<=3)
    {
    int figura1=3;
    int figura2=12;
    int figura3=7;
    int figura4=3;
    int figura5=3;
    int figura6=3;
    int figura7=7;
    int figura8=12;
    int figura9=3;

       
        clrscr();
        textcolor(BLUE);
            while(figura1<=14)
            {
                delay(5);
                gotoxy(17,figura1);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                figura1++;
            }
            delay(100);
            while(figura2<=14)
            {
                delay(5);
                gotoxy(18,figura2);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                figura2++;
            }
            delay(100);
            while(figura3<=14)
            {
                delay(5);
                gotoxy(35,figura3);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                figura3++;
            }
            delay(100);
            while(figura4<=10)
            {
                delay(5);
                gotoxy(26,figura4);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                figura4++;
            }
            delay(100);
            while(figura5<=14)
            {
                delay(5);
                gotoxy(44,figura5);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                figura5++;
            }
            delay(100);
            while(figura6<=5)
            {
                delay(5);
                gotoxy(54,figura6);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                figura6++;
            }
            delay(100);
            while(figura7<=14)
            {
                delay(5);
                gotoxy(54,figura7);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                figura7++;
            }
            delay(100);
            while(figura8<=14)
            {
                delay(5);
                gotoxy(44,figura8);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                figura8++;
            }
            delay(100);
            while(figura9<=5)
            {
                delay(5);
                gotoxy(28,figura9);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);
                cprintf("%c",219);        
                figura9++;
            }
        i++;
        delay(300);    
    }
        
}
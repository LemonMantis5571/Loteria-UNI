#include <thinking.h>

void interfaz(void);
void numeros(void);
int concat(int a, int b);
int i;
int comprado;
int ganador1;
int ganador2;
int elmeromeroi=0;
char numero1;
char numero2;
int numero1i;
int numero2i;
int elegido=0;
float inversion=0;
float premio=0;
int control=0;

void main()
{
    system("cls");
	logogrande();
	carga();
	interfaz();
}

void interfaz(void)
{
		int raya1=0;
		int raya2=2;
		int raya3=2;
		int raya4=1;
		int raya5=60;
		int raya6=11;

		textcolor(MAGENTA);
		system("cls");
		fflush(stdin);
		while(raya1<=25)
		{
			gotoxy(1,raya1);
			cprintf("%c",186);
			raya1++;
		}

		while(raya2<=79)
		{
			gotoxy(raya2,25);
			cprintf("%c",205);
			raya2++;
		}

		while(raya3<=79)
		{
			gotoxy(raya3,1);
			cprintf("%c",205);
			raya3++;
		}

		while(raya4<=25)
		{
			gotoxy(79,raya4);
			cprintf("%c",186);
			raya4++;
		}

		while(raya5<=78)
		{
			gotoxy(raya5,10);
			cprintf("%c",205);
			raya5++;
		}

		while(raya6<=24)
		{
			gotoxy(60,raya6);
			cprintf("%c",186);
			raya6++;
		}

		gotoxy(79,1);
		cprintf("%c",187);

		gotoxy(1,1);
		cprintf("%c",201);

		gotoxy(1,25);
		cprintf("%c",200);

		gotoxy(79,25);
		cprintf("%c",188);

		gotoxy(60,25);
		cprintf("%c",202);

		gotoxy(60,10);
		cprintf("%c",201);

		gotoxy(79,10);
		cprintf("%c",185);

		gotoxy(35,2);
		cprintf("%s","La mera mera loteria");

		textcolor(GREEN);

		gotoxy(61,11);
		cprintf("Numero elegido:");
		if(elegido!=0)
		{
			gotoxy(76,11);
			printf("%d",elegido);
		}

		else if(elegido==0)
		{
			gotoxy(61,12);
			printf("%s","Ninguno");
		}
		gotoxy(61,15);
		cprintf("Dinero");
		gotoxy(61,16);
		cprintf("invertido:");
		
		gotoxy(71,16);
		printf("$");

		gotoxy(72,16);
		printf("%.2f",inversion);

		gotoxy(61,19);
		cprintf("Mensaje");

		gotoxy(61,23);
		cprintf("Premio:");

		gotoxy(5,23);
		cprintf("P");
		printf("resentacion");

		gotoxy(25,23);
		cprintf("C");
		printf("omprar");
		gotoxy(25,24);
		printf("Numero");

		gotoxy(35,23);
		cprintf("E");
		printf("mpezar");
		gotoxy(35,24);
		printf("a jugar");

		gotoxy(45,23);
		cprintf("V");
		printf("olver");
		gotoxy(45,24);
		printf("a jugar");

		gotoxy(55,23);
		cprintf("S");
		printf("alir");
		gotoxy(55,24);
		cprintf("(DEL)");

		for(i=0;i<=8;i++)
		{
			gotoxy(30,6+i);
			cprintf("%c",219);
			cprintf("%c",219);
			cprintf("%c",219);
			cprintf("%c",219);
			cprintf("%c",219);
		}

		for(i=0;i<=8;i++)
		{
			gotoxy(40,6+i);
			cprintf("%c",219);
			cprintf("%c",219);
			cprintf("%c",219);
			cprintf("%c",219);
			cprintf("%c",219);
		}

		numeros();
}

void numeros(void)
{
		int tecla=0;
		int tecla2=0;
		int semilla=(time(0));
		textcolor(YELLOW);

		while(tecla==0)
		{		
			srand(semilla-rand());
			gotoxy(32,10);
			ganador1=(rand() % 10);
			cprintf("%d",ganador1);

			srand(semilla+rand());
			gotoxy(42,10);
			ganador2=(rand() % 10);
			cprintf("%d",ganador2);
			delay(400);
			pedir:

			if(kbhit()!=0)
			{
				tecla=getch();
				if(tecla!=80 && tecla!=112 && tecla!=67 && tecla!=99 && tecla!=69 && tecla!=101 && tecla!=83 && tecla!=115)
				{
					interfaz();
				}

				else
				{
					switch(tecla)
					{
						case 80:
						letrap:
						presentacion();
						logo();
						getch();
						interfaz();
						break;

						case 112:
						goto letrap;

						case 67:
						letrac:
							if(numero1!=0 && numero2!=0)
							{
								interfaz();
							}
							else
							{
								primernum:
								fflush(stdin);
								system("cls");
								printf("%s","\n\nIngrese su primer numero (Una sola cifra)\n");
								scanf("%c",&numero1);

								if(numero1<47 || numero1>57)
								{
									printf("\n\nIngrese un numero valido de una cifra\n");
									getch();
									goto letrac;
								}

								else
								{
										segundonum:
										fflush(stdin);
										system("cls");
										printf("%s","\n\nIngrese su segundo numero (Una sola cifra)\n");
										scanf("%c",&numero2);

										if(numero2<47 || numero2>57)
										{
											printf("\n\nIngrese un numero valido de una cifra\n");
											getch();
											goto segundonum;
										}

										else if(numero1==0 && numero2==0)
										{
											system("cls");
											printf("\n\nAmbos numeros no pueden ser cero\n");
											printf("Pulse una tecla para volver a elegir numeros");
											getch();
											goto primernum;
										}

										else
										{
											invertido:
											
												fflush(stdin);
												system("cls");
												printf("%s","\n\nIngrese la cantidad a invertir(Numero menor a $ 1000)\n");
												scanf("%f",&inversion);
												if(inversion>1000 || inversion<=0)
												{
													printf("\n\nIngrese un numero valido menor a $ 1000\n");
													getch();
													goto invertido;
												}

												else
												{
													int numero1i = (int)numero1 -'0';
													int numero2i = (int)numero2 - '0';
													system("cls");
													printf("%s","\nNumeros reservados correctamente\n");
													printf("Pulse una tecla para continuar");
													getch();
													if(numero1i==1 && numero2i==0)
													{
														elegido=10;
													}
													else if(numero1i==1 && numero2i==0)
													{
														elegido=20;
													}
													else if(numero1i==2 && numero2i==0)
													{
														elegido=20;
													}
													else if(numero1i==3 && numero2i==0)
													{
														elegido=30;
													}
													else if(numero1i==4 && numero2i==0)
													{
														elegido=40;
													}
													else if(numero1i==5 && numero2i==0)
													{
														elegido=50;
													}
													else if(numero1i==6 && numero2i==0)
													{
														elegido=60;
													}
													else if(numero1i==7 && numero2i==0)
													{
														elegido=70;
													}
													else if(numero1i==8 && numero2i==0)
													{
														elegido=80;
													}
													else if(numero1i==9 && numero2i==0)
													{
														elegido=90;
													}																																																																								
													else
													{
														elegido=concat(numero1i,numero2i);
													}
												}
											
										}
										
								}
							}
						interfaz();
						case 99:
						goto letrac;

						case 69:
						letrae:

						if(elegido==0)
						{
							interfaz();
						}
						tecla=1;
													if(ganador1==1 && ganador2==0)
													{
														elmeromeroi=10;
													}
													else if(ganador1==1 && ganador2==0)
													{
														elmeromeroi=20;
													}
													else if(ganador1==2 && ganador2==0)
													{
														elmeromeroi=20;
													}
													else if(ganador1==3 && ganador2==0)
													{
														elmeromeroi=30;
													}
													else if(ganador1==4 && ganador2==0)
													{
														elmeromeroi=40;
													}
													else if(ganador1==5 && ganador2==0)
													{
														elmeromeroi=50;
													}
													else if(ganador1==6 && ganador2==0)
													{
														elmeromeroi=60;
													}
													else if(ganador1==7 && ganador2==0)
													{
														elmeromeroi=70;
													}
													else if(ganador1==8 && ganador2==0)
													{
														elmeromeroi=80;
													}
													else if(ganador1==9 && ganador2==0)
													{
														elmeromeroi=90;
													}																																																																								
													else
													{
														elmeromeroi=concat(ganador1,ganador2);
													}						
						if(elmeromeroi==elegido)
						{				
							textcolor(YELLOW);
							gotoxy(61,20);
							cprintf("%s %c","GANASTE",1);
							gotoxy(61,24);
							premio=inversion*3;
							cprintf("%.2f",premio);
							getch();
							interfaz();
						}

						else
						{
							textcolor(YELLOW);
							gotoxy(61,20);
							cprintf("%s %c","Perdiste",2);
							gotoxy(61,24);
							premio=inversion*3;
							cprintf("%s","No tiene premio");
							while(tecla2!=86 && tecla2!=118)
							{
								tecla2=getch();
							}
							numero1=0;
							numero2=0;
							tecla=0;
							inversion=0;
							premio=0;
							elmeromeroi=0;
							elegido=0;
							interfaz();							
						}

						case 101:
						goto letrae;

						case 83:
						exit(0);
						break;

						case 115:
						exit(0);
						break;
						
						default:
						interfaz();

					}
					interfaz();
					
				}
			}
		}
}

int concat(int a,int b)
{
	int c;

	c=(a*(pow(10,log10(b)+1))+b);

	return c;
}

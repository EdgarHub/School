//Codigo de Colores//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

using namespace std;
void dibujo(int error1);

int main()
{
	char pal1[30], pal2[30], letra;
	int cont, cont2, opc=0, i, error=0;
	
	printf(" Escriba la palabra secreta\n");
					gets(pal1);
					cont = strlen(pal1);
					printf("Palabra Guardada!");
					fflush(stdin);
					system("CLS");
					
					
					for(i=0;i<cont;i++)
					{pal2[i]='_';
					}
					pal2[cont]='\0';
					system("CLS");
					//puts(pal2);
				//	printf("\n\n\n");
					
					do{
						dibujo(error);
						puts(pal2);
						printf("\n\n\n");
						opc++;
						printf("Intento numero %i, adivine la letra\n", opc);
						scanf("%c", &letra);
						fflush(stdin);
						system("CLS");
						
						for(i=0;i<cont;i++){
   						if(pal1[i]==letra){			 
   						pal2[i]=letra;  }
   						if(pal1[i]!=letra){
						   cont2++;}
   						}
   						
   						if(cont2==cont){
   							error++;}
   						cont2=0;
   						
   						if(strcmp(pal1,pal2)==0){
   							printf("Ganaste!!\n\n");
   							dibujo(error);
						   }
						  
						   
						
   						
   					}while(error<9 && (strcmp(pal1,pal2)!=0));
   					
   					 
   					
   					if(error==9)
   					{
   						system("CLS");
					   printf("Has perdido! la palabra era:\n");
					   puts(pal1);
					   printf("Intenta nuevamente\n\n");
					   dibujo(error);
					  
					}
   						
					
					
					
	
	/*
	printf("Numero de errores?\n");
	scanf("%i", &error);
	fflush(stdin);
	system("CLS");
	dibujo(error);*/

	
		system ("PAUSE");
		return 0;
	}
	
	void dibujo(int error1)
	{
			
	
	switch(error1)
	{
		case 0:
		
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("XXX                                   NUMERO DE ERRORES                                     XXX\n");
	printf("XXX                                          %i                                              XXX\n",error1);
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			break;
		
			
		case 1:
			
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("XXX                                   NUMERO DE ERRORES                                     XXX\n");
	printf("XXX                                          %i                                              XXX\n",error1);
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX              ______                                                                     XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX            /        \\                                                                   XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			break;
	
		case 2:
		
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("XXX                                   NUMERO DE ERRORES                                     XXX\n");
	printf("XXX                                          %i                                              XXX\n",error1);
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX              ______ __________________________                                          XXX\n");
	printf("XXX             |      |__________________________|                                         XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX            /        \\                                                                   XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			break;
			
		case 3:
		
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("XXX                                   NUMERO DE ERRORES                                     XXX\n");
	printf("XXX                                          %i                                              XXX\n",error1);
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX              ______ __________________________                                          XXX\n");
	printf("XXX             |      |__________________________|                                         XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX            /        \\                                                                   XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			break;
		
		case 4:
			
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("XXX                                   NUMERO DE ERRORES                                     XXX\n");
	printf("XXX                                          %i                                              XXX\n",error1);
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX              ______ __________________________                                          XXX\n");
	printf("XXX             |      |__________________________|                                         XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                     /  \\                                           XXX\n");
	printf("XXX             |      |                     \\  /                                           XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX            /        \\                                                                   XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			break;
			
		case 5:
		
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("XXX                                   NUMERO DE ERRORES                                     XXX\n");
	printf("XXX                                          %i                                              XXX\n",error1);
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX              ______ __________________________                                          XXX\n");
	printf("XXX             |      |__________________________|                                         XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                     /  \\                                           XXX\n");
	printf("XXX             |      |                     \\  /                                           XXX\n");
	printf("XXX             |      |                      TT                                            XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                      TT                                            XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX            /        \\                                                                   XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			break;
			
		case 6:
			
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("XXX                                   NUMERO DE ERRORES                                     XXX\n");
	printf("XXX                                          %i                                              XXX\n",error1);
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX              ______ __________________________                                          XXX\n");
	printf("XXX             |      |__________________________|                                         XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                     /  \\                                           XXX\n");
	printf("XXX             |      |                     \\  /                                           XXX\n");
	printf("XXX             |      |                     /TT                                            XXX\n");
	printf("XXX             |      |                    / ||                                            XXX\n");
	printf("XXX             |      |                      TT                                            XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX            /        \\                                                                   XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			break;
			
		case 7:
			
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("XXX                                   NUMERO DE ERRORES                                     XXX\n");
	printf("XXX                                          %i                                              XXX\n",error1);
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX              ______ __________________________                                          XXX\n");
	printf("XXX             |      |__________________________|                                         XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                     /  \\                                           XXX\n");
	printf("XXX             |      |                     \\  /                                           XXX\n");
	printf("XXX             |      |                     /TT\\                                           XXX\n");
	printf("XXX             |      |                    / || \\                                          XXX\n");
	printf("XXX             |      |                      TT                                            XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX             |      |                                                                    XXX\n");
	printf("XXX            /        \\                                                                   XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			break;
			
		case 8:
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("XXX                                   NUMERO DE ERRORES                                     XXX\n");
	printf("XXX                                          %i                                              XXX\n",error1);
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX              ______ __________________________                                          XXX\n");
	printf("XXX             |      |__________________________|                                         XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                     /  \\                                           XXX\n");
	printf("XXX             |      |                     \\  /                                           XXX\n");
	printf("XXX             |      |                     /TT\\                                           XXX\n");
	printf("XXX             |      |                    / || \\                                          XXX\n");
	printf("XXX             |      |                      TT                                            XXX\n");
	printf("XXX             |      |                     /                                              XXX\n");
	printf("XXX             |      |                    /                                               XXX\n");
	printf("XXX            /        \\                                                                   XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			break;
			
		case 9:
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("XXX                                   NUMERO DE ERRORES                                     XXX\n");
	printf("XXX                                          %i                                              XXX\n",error1);
	printf("XXX                                                                                         XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXX              ______ __________________________                                          XXX\n");
	printf("XXX             |      |__________________________|                                         XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                      ||                                            XXX\n");
	printf("XXX             |      |                     /  \\                                           XXX\n");
	printf("XXX             |      |                     \\  /                                           XXX\n");
	printf("XXX             |      |                     /TT\\                                           XXX\n");
	printf("XXX             |      |                    / || \\                                          XXX\n");
	printf("XXX             |      |                      TT                                            XXX\n");
	printf("XXX             |      |                     /  \\                                           XXX\n");
	printf("XXX             |      |                    /    \\                                          XXX\n");
	printf("XXX            /        \\                                                                   XXX\n");
	printf("XXX                                                                                         XXX\n");
	printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
			break;
			
		
			
		default:
			
			error1=0;
			
			
			
	}
	}


#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <time.h>

#define MAX 1000
#define REPETIR do
#define MIENTRAS while
#define SI if
#define SINO else

using namespace std;

struct buffer{
	int Registro;
	char Edad[MAX];
	char Born[10];
	char Nombre[MAX];
	char ApellidoPAT[MAX];
	char ApellidoMAT[MAX];
	char Direccion[MAX];
	char Mail[MAX];
	char Telefono[MAX];
	char Celular[MAX];
	char CI[MAX];
	char EXP[MAX];
	char Nacionalidad[MAX];
	char Ocupacion[MAX];
	char Sangre[MAX];
	char Patologia[MAX];
	char HistoricoU[MAX];
};



struct addUsuario{
	int Registro;
	string Born;
	string Edad;
	string Nombre;
	string ApellidoPAT;
	string ApellidoMAT;
	string Direccion;
	string Mail;
	string Telefono;
	string Celular;
	string CI;
	string EXP;
	string Nacionalidad;	
	string Ocupacion;
	string Sangre;
	string Patologia;
	string HistoricoU;
	addUsuario()
	{
		Edad.reserve(1000);
		Born.reserve(1000);
		Nombre.reserve(1000);
		ApellidoPAT.reserve(1000);
		ApellidoMAT.reserve(1000);
		Direccion.reserve(1000);
		Mail.reserve(1000);
		Telefono.reserve(1000);
		Celular.reserve(1000);
		CI.reserve(1000);
		EXP.reserve(1000);
		Nacionalidad.reserve(1000);
		Ocupacion.reserve(1000);
		Sangre.reserve(1000);
		Patologia.reserve(1000);
		HistoricoU.reserve(1000);
	}
};

time_t now = time(0);
tm * Time = localtime(&now);
//Año:
int Anow = Time->tm_year; 
int since = 1900;
int Tonow = since + Anow;
//Meses:
int Mnow = (Time->tm_mon) + 1;
//Dia:
int Dnow = (Time->tm_mday);

void Birthday(bool *band){
	string Edad,AAAAs,MMs,DDs;
	char AAAAc[5],MMc[3],DDc[3];
	int AAAA,MM,DD;
	int L=0;
		cout << endl << endl << "\n\t\t Ingrese Fecha de Nacimiento: ";
	REPETIR{ 
		REPETIR{
		cout << endl << "\n\t\t Ahno: ";
		getline(cin,AAAAs);
		L=AAAAs.length();
		}while(L>4);
		strcpy(AAAAc,AAAAs.c_str());
		AAAA = atoi(AAAAc); 
	}MIENTRAS((AAAA< since) || (AAAA>Tonow));
	
	REPETIR{
		REPETIR{
		cout <<"\n\t\t Mes: ";
		getline(cin,MMs);
		L=MMs.length();
		}MIENTRAS(L>2);
		strcpy(MMc,MMs.c_str());
		MM = atoi(MMc);
	}MIENTRAS(MM<1||MM>12);
	
	SI(MM==1){
			REPETIR{
				REPETIR{ 
					cout <<"\n\t\t Dia: ";
					getline(cin,DDs);
					L=DDs.length();
				}MIENTRAS(L>2);
				strcpy(DDc,DDs.c_str());
				DD = atoi(DDc);
			}MIENTRAS(DD<1 || DD>31);
	}
	SI(MM==2){
		SI(AAAA%4==0 && ( AAAA%100!=0 || AAAA%400 ==0)){
			REPETIR{
				REPETIR{ 
					cout <<"\n\t\t Dia: ";
					getline(cin,DDs);
					L=DDs.length();
				}MIENTRAS(L>2);
				strcpy(DDc,DDs.c_str());
				DD = atoi(DDc);
			}MIENTRAS(DD<1 || DD>29);
		} else {
			REPETIR{
				REPETIR{ 
					cout <<"\n\t\t Dia: ";
					getline(cin,DDs);
					L=DDs.length();
				}MIENTRAS(L>2);
				strcpy(DDc,DDs.c_str());
				DD = atoi(DDc);
			}MIENTRAS(DD<1 || DD>28);
		}
	}
	SI(MM==3){
		REPETIR{
			REPETIR{ 
				cout <<"\n\t\t Dia: ";
				getline(cin,DDs);
				L=DDs.length();
			}MIENTRAS(L>2);
			strcpy(DDc,DDs.c_str());
			DD = atoi(DDc);
		}MIENTRAS(DD<1 || DD>31);
	}
	SI(MM==4){
		REPETIR{
			REPETIR{ 
				cout <<"\n\t\t Dia: ";
				getline(cin,DDs);
				L=DDs.length();
			}MIENTRAS(L>2);
			strcpy(DDc,DDs.c_str());
			DD = atoi(DDc);
		}MIENTRAS(DD<1 || DD>30);
	}
	SI(MM==5){
		REPETIR{
			REPETIR{ 
				cout <<"\n\t\t Dia: ";
				getline(cin,DDs);
				L=DDs.length();
			}MIENTRAS(L>2);
			strcpy(DDc,DDs.c_str());
			DD = atoi(DDc);
		}MIENTRAS(DD<1 || DD>31);
	}
	SI(MM==6){
		REPETIR{
			REPETIR{ 
				cout <<"\n\t\t Dia: ";
				getline(cin,DDs);
				L=DDs.length();
			}MIENTRAS(L>2);
			strcpy_s(DDc,DDs.c_str());
			DD = atoi(DDc);
		}MIENTRAS(DD<1 || DD>30);
	}
	SI(MM==7){
		REPETIR{
			REPETIR{ 
				cout <<"\n\t\t Dia: ";
				getline(cin,DDs);
				L=DDs.length();
			}MIENTRAS(L>2);
			strcpy_s(DDc,DDs.c_str());
			DD = atoi(DDc);
		}MIENTRAS(DD<1 || DD>31);
	}
	SI(MM==8){
		REPETIR{
			REPETIR{ 
				cout <<"\n\t\t Dia: ";
				getline(cin,DDs);
				L=DDs.length();
			}MIENTRAS(L>2);
			strcpy(DDc,DDs.c_str());
			DD = atoi(DDc);
		}MIENTRAS(DD<1 || DD>31);
	}
	SI(MM==9){
		REPETIR{
			REPETIR{ 
				cout <<"\n\t\t Dia: ";
				getline(cin,DDs);
				L=DDs.length();
			}MIENTRAS(L>2);
			strcpy(DDc,DDs.c_str());
			DD = atoi(DDc);
		}MIENTRAS(DD<1 || DD>30);
	}
	SI(MM==10){
		REPETIR{
			REPETIR{ 
				cout <<"\n\t\t Dia: ";
				getline(cin,DDs);
				L=DDs.length();
			}MIENTRAS(L>2);
			strcpy(DDc,DDs.c_str());
			DD = atoi(DDc);
		}MIENTRAS(DD<1 || DD>31);
	}
	SI(MM==11){
		REPETIR{
			REPETIR{ 
				cout <<"\n\t\t Dia: ";
				getline(cin,DDs);
				L=DDs.length();
			}MIENTRAS(L>2);
			strcpy(DDc,DDs.c_str());
			DD = atoi(DDc);
		}MIENTRAS(DD<1 || DD>30);
	}
	SI(MM==12){
		REPETIR{
			REPETIR{ 
				cout <<"\n\t\t Dia: ";
				getline(cin,DDs);
				L=DDs.length();
			}MIENTRAS(L>2);
			strcpy(DDc,DDs.c_str());
			DD = atoi(DDc);
		}MIENTRAS(DD<1 || DD>31);
	}

reg.Born = to_string(DD)+"/"+to_string(MM)+"/"+to_string(AAAA);

cout << endl <<"\n\t\t Fecha de nacimiento: "<<reg.Born;
	SI(Tonow==AAAA){
		SI(Mnow>MM){
			SI((Mnow-MM)==1){
				reg.Edad = to_string(Mnow-MM) + " mes de nacido.";
				strcpy(rec.Edad,reg.Edad.c_str());
				cout<<endl<<"\n\t\t Edad: "<<rec.Edad;

			} SINO {
				reg.Edad = to_string(Mnow-MM) + " meses de nacido.";
				strcpy(rec.Edad,reg.Edad.c_str());
				cout<<endl<<"\n\t\t Edad: "<<rec.Edad;
			}
		}
		SI(Mnow==MM){
			SI(Dnow>DD){
				SI((Dnow-DD)==1){
					reg.Edad = to_string(Dnow-DD) + "dia de nacido.";
					strcpy(rec.Edad,reg.Edad.c_str());
				cout<<endl<<"\n\t\t Edad: "<<reg.Edad;;
				} SINO {
				reg.Edad = to_string(Dnow-DD) + "dias de nacido.";
				cout<<endl<<"\n\t\t Edad: "<<reg.Edad;
				}
			} SINO {
				SI((Dnow-DD)==0){
					reg.Edad = " Recien Nacido.";
					cout<<"\n\t\t "<<reg.Edad;
				} SINO {
					system("cls");
					cout<<endl<<"Error en fecha de Nacimiento";
					Sleep(1000);
					*band = false;
					return;
				}
			}
		} SINO {
			system("cls");
			cout<<endl<<"Error en fecha de Nacimiento";
			Sleep(1000);
			*band = false;
			return;
			
		}
	} SINO {
		SI ( MM==Mnow && DD>Dnow){
			reg.Edad = to_string(1+Tonow-AAAA) + "anhos";
			strcpy(rec.Edad,reg.Edad.c_str());
			cout <<"\n\t\t Edad: "<<reg.Edad;
		} SINO {
			SI (MM>Mnow){
			reg.Edad = to_string(1+Tonow-AAAA) + "anhos";
			strcpy(rec.Edad,reg.Edad.c_str());
			cout <<"\n\t\t Edad: "<<reg.Edad;
			}  SINO {
			reg.Edad = to_string(Tonow-AAAA) + "anhos";
			strcpy(rec.Edad,reg.Edad.c_str());
			cout <<"\n\t\t Edad: "<<reg.Edad;
			}
		}
	}
	strcpy(rec.Born,reg.Born.c_str());
}

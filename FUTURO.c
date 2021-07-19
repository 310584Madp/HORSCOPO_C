/* Programa de Horoscopo */




#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int dia,mes,sexo;
	
	cout<<"Ingrese dia:";cin>>dia;
	cout<<"Ingrese numero de mes:";cin>>mes;
	cout<<"Ingrese sexo:";cin>>sexo;
	
	switch (mes){
		case 1:
			if(dia<21){
				cout<<"CAPRICORNIO: Durante esta jornada se enfrentara con situaciones difíciles, que le exigirán el máximo de su concentración. Amor: Utilice un diálogo sincero cuando se comunique. COLOR: ROJO NUMEROS: 13,12,8";
			}
			else{
				cout<<"ACUARIO: Tenga en cuenta las circunstancias y no sea tan cruel con los demás. Amor: Si está en pareja, no dude en decirle todo lo que siente a su amado. COLOR: TURQUEZA NUMEROS: 5,8,19";
			}
		break;
			
		case 2:
			if(dia<19){
				cout<<"ACUARIO: Tenga en cuenta las circunstancias y no sea tan cruel con los demás. Amor: Si está en pareja, no dude en decirle todo lo que siente a su amado. COLOR: TURQUEZA NUMEROS: 5,8,19";
			}
			else{
				cout<<"PISCIS: En esta jornada despertará teniendo una dosis extra de energía, la cual lo ayudará a realizar rápidamente todas sus obligaciones, teniendo resultados positivos. Amor: Restablecerá contacto con una persona que quiere. COLOR: VIOLETA NUMEROS: 30,40,52";
			}
		break;
		
		case 3:
			if(dia<21){
				cout<<"PISCIS: En esta jornada despertará teniendo una dosis extra de energía, la cual lo ayudará a realizar rápidamente todas sus obligaciones, teniendo resultados positivos. Amor: Restablecerá contacto con una persona que quiere. COLOR: VIOLETA NUMEROS: 30,40,52";
			}
			else{
				cout<<"ARIES: A causa de su natural diplomacia hará que todo su equipo de trabajo recurra a usted. Amor: No permita que los celos y la envidia intoxiquen el vínculo amoroso. COLOR: NARANJA NUMEROS: 10,12,26";
			}
		break;
		
		case 4:
			if(dia<19){
				cout<<"ARIES: A causa de su natural diplomacia hara que todo su equipo de trabajo recurra a usted. AMOR: No permita que los celos y la envidia intoxiquen el vinculo amoroso, NUMERO DE LA SUERTE:13, COLOR DE LA SUERTE AZUL.";
			}
			else{
				cout<<"TAURO: Permita que su intuición lo guíe en todos los caminos que deba transitar. Amor: Aprenda a diferenciar entre un romance pasajero y un amor arraigado. COLOR: CELESTE NUMEROS: 18,00";
			}
		break;
		
		case 5:
			if(dia<21){
				cout<<"TAURO: Permita que su intuición lo guíe en todos los caminos que deba transitar. Amor: Aprenda a diferenciar entre un romance pasajero y un amor arraigado. COLOR: CELESTE NUMEROS: 18,00";
			}
			else{
				cout<<"GEMINIS: No cometa un error por su impaciencia. Relajese y conseguira lo que se proponga. Amor: Termine con los miedos internos y comparta lo que le sucede diariamente con sus seres queridos. COLOR: CAOBA NUMEROS: 15,03,47";
			}
		break;
		
		case 6:
			if(dia<19){
				cout<<"GEMINIS: No cometa un error por su impaciencia. Relajese y conseguira lo que se proponga. Amor: Termine con los miedos internos y comparta lo que le sucede diariamente con sus seres queridos. COLOR: CAOBA NUMEROS: 15,03,47";
			}
			else{
				cout<<"CANCER: Para alcanzar sus logros, sepa que la clave es organizarse y no dejar que los objetivos que estan en su mente se diluyan ante cualquier estímulo negativo. Amor: Trate de hacerse un lugar para el amor en su vida. Por mas que su agenda este completa, intente prestarle mas atención a su alma gemela, que tambien lo necesita. COLOR: NEGRO NUMEROS: 60,01,13";
			}
		break;
		
		case 7:
			if(dia<23){
				cout<<"CANCER: Para alcanzar sus logros, sepa que la clave es organizarse y no dejar que los objetivos que estan en su mente se diluyan ante cualquier estímulo negativo. Amor: Trate de hacerse un lugar para el amor en su vida. Por mas que su agenda este completa, intente prestarle mas atención a su alma gemela, que tambien lo necesita. COLOR: NEGRO NUMEROS: 60,01,13";
			}
			else{
				cout<<"LEO: En este momento, sepa que debera mantenerse precavido en todos los sentidos ya que podrian aparecer personas envidiosas que intenten demorar su exito. Amor: Relajese, ya que todas las discusiones con su pareja podran ser superadas, siempre y cuando mantenga una actitud serena y compasiva con su alma gemela. COLOR: CHOCOLATE NUMEROS: 06,89,46";
			}
		break;
		
		case 8:
			if(dia<25){
				cout<<"LEO: En este momento, sepa que debera mantenerse precavido en todos los sentidos ya que podrian aparecer personas envidiosas que intenten demorar su exito. Amor: Relajese, ya que todas las discusiones con su pareja podran ser superadas, siempre y cuando mantenga una actitud serena y compasiva con su alma gemela. COLOR: CHOCOLATE NUMEROS: 06,89,46";
			}
			else{
				cout<<"VIRGO: Si hoy siente que las obligaciones lo superan mas de lo que esperaba, procure no desesperarse. Amor: Si se ha reconciliado con su pareja, no lo eche todo a perder por sus caprichos. COLOR: AZUL NUMEROS: 09,12,32";
			}
		break;
		
		case 9:
			if(dia<24){
				cout<<"VIRGO: Si hoy siente que las obligaciones lo superan mas de lo que esperaba, procure no desesperarse. Amor: Si se ha reconciliado con su pareja, no lo eche todo a perder por sus caprichos. COLOR: AZUL NUMEROS: 09,12,32";
			}
			else{
				cout<<"LIBRA: Sera un momento en el que tendrá que detener un poco la marcha. Amor: Piense en los reclamos que le esta haciendo su pareja hace mucho tiempo y modifique cuanto antes sus actitudes. COLOR: MAGENTA NUMERO: 07,06,01";
			}
		break;
		
		case 10:
			if(dia<24){
				cout<<"LIBRA: Sera un momento en el que tendrá que detener un poco la marcha. Amor: Piense en los reclamos que le esta haciendo su pareja hace mucho tiempo y modifique cuanto antes sus actitudes. COLOR: MAGENTA NUMERO: 07,06,01";
			}
			else{
				cout<<"ESCORPIO: Siempre que se deje guiar por la voz de la intuicion y la sabiduria interior podra abandonar todos los temores que lo atormentan día a día en su vida. Amor: Intente modificar algunas actitudes que tiene con su alma gemela y atrévase a innovar en la intimidad. COLOR: GRIZ NUMERO: 22,40";
			}
		break;
		
		case 11:
			if(dia<23){
				cout<<"ESCORPIO: Siempre que se deje guiar por la voz de la intuicion y la sabiduria interior podra abandonar todos los temores que lo atormentan día a día en su vida. Amor: Intente modificar algunas actitudes que tiene con su alma gemela y atrévase a innovar en la intimidad. COLOR: GRIZ NUMERO: 22,40";
			}
			else{
				cout<<"SAGITARIO: Empiece confiar mas en usted. De lo contrario, los esfuerzos y metas se verán limitados por la inseguridad que lo invade naturalmente en su vida. Amor: Hoy su alma gemela se sentira encantada con usted. COLOR: VERDE ACUA NUMERO: 50,80,46";
			}
		break;
		
		case 12:
			if(dia<22){
				cout<<"SAGITARIO: Empiece confiar mas en usted. De lo contrario, los esfuerzos y metas se verán limitados por la inseguridad que lo invade naturalmente en su vida. Amor: Hoy su alma gemela se sentira encantada con usted. COLOR: VERDE ACUA NUMERO: 50,80,46";
			}
			else{
				cout<<"CAPRICORNIO: Durante esta jornada se enfrentara con situaciones difíciles, que le exigirán el máximo de su concentración. Amor: Utilice un diálogo sincero cuando se comunique. COLOR: ROJO NUMEROS: 13,12,8";
			}
		break;
		
		default: cout<<"ESTE MES NO EXISTE";
		
		
	}
	
	
	getch();
	
}
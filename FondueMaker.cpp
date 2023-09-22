#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <windows.h> 

//#pragma execution_character_set( "utf-8" )

void title(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	//Change console color
	SetConsoleTextAttribute(hConsole, 14);
	
	std::cout << R"(_______             _              ___  ___      _             
|  ___|            | |             |  \/  |     | |            
| |_ ___  _ __   __| |_   _  ___   | .  . | __ _| | _____ _ __ 
|  _/ _ \| '_ \ / _` | | | |/ _ \  | |\/| |/ _` | |/ / _ \ '__|
| || (_) | | | | (_| | |_| |  __/  | |  | | (_| |   <  __/ |   
\_| \___/|_| |_|\__,_|\__,_|\___|  \_|  |_/\__,_|_|\_\___|_|   )" << '\n';

	//Change console color
	SetConsoleTextAttribute(hConsole, 7);
}

int main(){
	using namespace std;
	SetConsoleOutputCP( 65001 );
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int lenguage;
	int persons;
	int cheese;
	
	//Texts
	string welcome[] = {"Welcom to","Bienvenido al","Benvingut al"};
	
	string introduction[] = {
		"Fondue is a Swiss melted cheese dish served in a pot, common to all diners, heated with a candle or alcohol lamp and eaten by dipping bread into the cheese with long-stemmed forks.",
		"La fondue es un plato de queso fundido suizo que se sirve en una olla, común para todos los comensales, calentada con una vela o lámpara de alcohol y se come sumergiendo pan en el queso con tenedores largos o pinchos.",
		"La fondue és un plat de formatge fos suís que se serveix en una olla, comú per a tots els comensals, escalfada amb una espelma o fogonet d'alcohol i es menja submergint pa al formatge amb forquilles llargues o broquetes."
	};
	
	string about[] = {
		"This program will calculate the ingredients and their proportions to make the perfect fondue.",
		"Este programa calculará los ingredientes y sus proporciones para hacer la fondue perfecta.",
		"Aquest programa calcularà els ingredients i les seves proporcions per fer la fondue perfecta."
	};
	
	string text1[] = {
		"For this recipe we are going to use two types of cheese: 50% Gruyère y 50% Emmental.",
		"Para esta receta vamos a utilizar dos tipos de queso: 50% Gruyère y 50% Emmental.",
		"Per aquesta recepta utilitzarem dos tipus de formatge: 50% Gruyère i 50% Emmental."
	};
	
	string text2[] = {
		"How many people will eat fondue?",
		"¿Cuántas personas comerán fondue?",
		"Quantes persones menjaran fondue?"
	};
	
	string text3[] = {
		"Usually, to know how much cheese to use, it is calculated between 100 and 150 grams per person.",
		"Normalmente, para saber cuánto queso se debe utilizar, se calcula entre 100 y 150 gramos por persona.",
		"Normalment, per saber quant formatge s'ha d'utilitzar, es calcula entre 100 i 150 grams per persona."
	};
	
	string text4[] = {
		"How many grams of cheese each person will eat? \n[Input the quantity in grams. Or input 1 for the default amount: 125gr per person]",
		"¿Cuántos gramos de queso comerá cada persona? \n[Introduce la cantidad en gramos. O ingrese 1 para la cantidad predeterminada: 125gr por persona]",
		"Quants grams de formatge menjarà cada persona? \n[Introdueix la quantitat en grams. O introduïu 1 per la quantitat predeterminat: 125gr per persona]"
	};
	
	string text5[] = {
		"Ingredients for",
		"Ingredientes para",
		"Ingredients per a"
	};
	
	string text6[] = {
		"diners",
		"personas",
		"perosnes"
	};
	
	string text7[] = {
		"of",
		"de",
		"de"
	};
	
	string text8[] = {
		"Gruyère cheese",
		"Queso Gruyère",
		"Formatge Gruyère"
	};
	
	string text9[] = {
		"Emmental cheese",
		"Queso Emmental",
		"Formatge Emmental"
	};
	
	string text10[] = {
		"Dry white wine",
		"Vino blanco seco",
		"Vi blanc sec"
	};
	
	string text11[] = {
		"Corn starch",
		"Maicena",
		"Maizena"
	};
	
	string text12[] = {
		"Garlic clove",
		"Diente de ajo",
		"Gra d'all"
	};
	
	string text13[] = {
		"Nutmeg",
		"Nuez moscada",
		"Nou moscada"
	};
	
	//Steps to Make It
	string steps[] = {
		"Steps to make it",
		"Preparación",
		"Preparació"
	};
	
	string step1[] = {
		"Grate or shred the cheese.",
		"Ralla o tritura el queso.",
		"Ratlla o tritura el formatge."
	};
	
	string step2[] = {
		"Rub the inside of the casserole with the garlic clove (peeled).",
		"Frota el interior de la cazuela con el diente de ajo (pelado).",
		"Frega l'interior de la cassola amb el gra d'all (pelat)."
	};
	
	string step3[] = {
		"Add the wine to the casserole and add a little grated nutmeg.",
		"Añade el vino a la cazuela y ponle un poco de nuez moscada rallada.",
		"Afegeix el vi a la cassola i posa-li una mica de nou moscada ratllada."
	};
	
	string step4[] = {
		"Put the casserole over medium-low heat, add the grated cheese and begin to stir. (Note: stir in 8 shape, going through the middle of the casserole).",
		"Pon la cazuela a fuego medio-bajo, añade el queso rallado y empieza a remover. (Nota: remueve en forma de 8, pasando por el centro de la cazuela).",
		"Posa la cassola a foc mitjà-baix, afegeix el formatge ratllat i comença a remenar. (Nota: remou en forma de 8, passant pel centre de la cassola)."
	};
	
	string step5[] = {
		"While the cheese is melting, combine the Kirsch and corn starch in a small bowl. Keep stirring the cheese.",
		"Mientras se funde el queso, mezcla el Kirsch y la Maicena en un recipiente pequeño. Sigue removiendo el queso.",
		"Mentre el formatge es fon, combina el Kirsch i la Maizena en un bol petit. Segueix remenant el formatge."
	};
	
	string step6[] = {
		"Once the cheese has melted, add the Kirsch and corn starch mixture.",
		"Una vez el queso ha fundido, añade la mezcla de Kirsch y Maicena.",
		"Un cop el formatge s'ha fos, afegeix la barreja de Kirsch i Maizena."
	};
	
	string step7[] = {
		"Keep stirring until the cheese has mixed with the wine until creamy.",
		"Sigue revolviendo hasta que el queso se haya mezclado con el vino y quede cremoso.",
		"Segueix remenant fins que el formatge s'hagi barrejat amb el vi i quedi cremós."
	};
	
	string step8[] = {
		"Pour the melted cheese into the fondue pot and serve it.",
		"Vierte el queso fundido en la olla de fondue y sírvelo.",
		"Aboca el formatge fos a l'olla de fondue i serveix-ho."
	};
	
	string thanks[] = {
		"THANK YOU FOR USING THE FONDUE MAKER!",
		"¡GRACIAS POR USAR EL FONDUE MAKER!",
		"GRÀCIES PER UTILITZAR EL FONDUE MAKER!"
	};
	
	string enjoy[] = {
		"Enjoy your meal!",
		"¡Que aproveche!",
		"Que aprofiti!"
	};
	
	//Error Messages
	string error1[] = {
		"Input",
		"Introduce",
		"Introdueix"
	};
	
	string error2[] = {
		"or more",
		"o más",
		"o més"
	};
	
	printf ("Welcom to:\n");
	title();
	
	//Lenguage Selection
	do{
		printf ("\nSelect Language [1=English | 2=Spanish | 3=Catalan]:\n");
    	scanf ("%i", &lenguage);
    	
    	if (lenguage != 1 && lenguage != 2 && lenguage != 3){
    		printf ("\nError!\nInput 1, 2 or 3.\n\n");
    		fflush (stdin);
		}
	}while (lenguage != 1 && lenguage != 2 && lenguage != 3);
	
	lenguage = lenguage -1;
	
	//Clear Console
	system ("CLS");
	
	//Welcome Tittle
	printf ("%s:\n", welcome[lenguage].c_str());
	title();
	
	//Introduction
	printf ("\n\n%s\n\n", about[lenguage].c_str());
	printf ("%s\n\n", introduction[lenguage].c_str());
	printf ("%s\n\n", text1[lenguage].c_str());
	
	//How many persons 
	do{
		printf ("%s\n", text2[lenguage].c_str());
    	scanf ("%i", &persons);
    	
    	if (persons <= 0){
    		printf ("\nError!\n%s 1 %s.\n\n", error1[lenguage].c_str(), error2[lenguage].c_str());
    		fflush (stdin);
		}
	}while (persons <= 0);
	
	//How many cheese 
	printf ("\n%s\n", text3[lenguage].c_str());
	
	do{
		printf ("%s\n", text4[lenguage].c_str());
    	scanf ("%i", &cheese);
    	
    	if (cheese != 1 && cheese < 50){
    		printf ("\nError!\n%s 50 %s.\n\n", error1[lenguage].c_str(), error2[lenguage].c_str());
    		fflush (stdin);
		}
	}while (cheese != 1 && cheese < 50);
	
	if (cheese == 1){
		cheese = 125;
	}
	
	//Clear Console
	system ("CLS");
	
	title();
	
	//List of ingredients
	printf ("\n%s %i %s:\n", text5[lenguage].c_str(), persons, text6[lenguage].c_str());
	
	printf (" - %.0lfgr %s %s.\n", (persons * cheese)/2.0, text7[lenguage].c_str(), text8[lenguage].c_str());
	printf (" - %.0lfgr %s %s.\n", (persons * cheese)/2.0, text7[lenguage].c_str(), text9[lenguage].c_str());
	printf (" - %.0lfml %s %s.\n", (persons * cheese)/2.0, text7[lenguage].c_str(), text10[lenguage].c_str());
	printf (" - %.0lfml %s Kirsch.\n", (persons * cheese)/10.0, text7[lenguage].c_str());
	printf (" - %.0lfgr %s %s.\n", ((persons * cheese * 1.5)/1000)*20, text7[lenguage].c_str(), text11[lenguage].c_str());
	printf (" - 1 %s.\n", text12[lenguage].c_str());
	printf (" - %s.\n\n", text13[lenguage].c_str());
	
	//Steps to Make It
	printf ("%s:\n", steps[lenguage].c_str());
	
	printf (" 1. %s\n", step1[lenguage].c_str());
	printf (" 2. %s\n", step2[lenguage].c_str());
	printf (" 3. %s\n", step3[lenguage].c_str());
	printf (" 4. %s\n", step4[lenguage].c_str());
	printf (" 5. %s\n", step5[lenguage].c_str());
	printf (" 6. %s\n", step6[lenguage].c_str());
	printf (" 7. %s\n", step7[lenguage].c_str());
	printf (" 8. %s %s\n", step8[lenguage].c_str(), enjoy[lenguage].c_str());
	
	printf ("\n%s\n\n", thanks[lenguage].c_str());
	
	SetConsoleTextAttribute(hConsole, 8);
	
    system("PAUSE");           
    return 0;
}

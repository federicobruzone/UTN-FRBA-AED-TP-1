/* UTN-FRBA-AED
 * TP Nº 1: Clases de Datos
 * Alumno: Federico León Bruzone [155-683.6] 
 * Fecha: 10/04/2015
*/ 

#include <iostream>

void imprimBanner() // Esta función imprime un banner en pantalla
{
	using std::cout;
	using std::endl;

	cout << "\t+---------------------------------+" << endl;
	cout << "\t|Algoritmos y Estructuras de Datos|" << endl;
	cout << "\t|UTN-FRBA-Curso K1091             |" << endl;
	cout << "\t|TP No 1 - Tipos de Datos         |" << endl;
	cout << "\t+---------------------------------+\n\n" << endl;
	
}

bool menu() // Esta función despliega un menú de opciones
{
	using std::cout;
	using std::cin;
	using std::endl;
	
	int opcion; 

	cout << "********** Menu Principal **********" << endl;
	cout << "(1): Mostrar valores de bool" << endl;
	cout << "(2): Mostrar valores de char" << endl;
	cout << "(3): Convertir string en char" << endl;
	cout << "(4): Adicionar dos int entre si" << endl;
	cout << "(5): Dividir dos double entre si" << endl;
	cout << "(0): Para terminar el programa" << endl;
	cin >> opcion; //Requiere la entrada de un int. Otro tipo de entrada provoca un comportamiento erróneo.
			
	switch(opcion){
		case 1:
			bool esonoes;
			esonoes = false;
			cout << "\n";
			cout << std::boolalpha << esonoes << " o "; // la función boolalpha expresa los booleanos como 
			esonoes = ~esonoes; 			    // true o false.
			cout << std::boolalpha << esonoes << endl; // ~esonoes aquí haría que el display sea "1"
			cout << "\n";
			break;
		
		case 2:
			cout << "\n";
			char letra;
			letra = 0;
			for (int n = 0; n < 128; n++)
			{
				letra = n;
				cout << letra << " "; //algunos de los caracteres iniciales del grupo ASCII no se 
			}			      // representan en pantalla
			cout << endl << "\n";
			break;
			
		case 3:{
			std::string cadena;
			
			cout << "\n";		
			cout << "Ingrese la cadena que desea descomponer en char: ";
			cin.ignore(); 			// esta línea despeja el caracter de retorno remanente 
			std::getline (cin, cadena);     // de la última instrucción cin.
			cout << "\n";
			// esta instrucción se repite para cada uno de los elementos del string	
			for (char c : cadena) {cout << c << " ";}
			cout << endl << "\n";
			break;
		}
		
		case 4:
			int sumandouno, sumandodos;
			cout << "\n";
			cout << "Inserte el primer numero de la sumatoria: ";
			cin >> sumandouno;
			cout << "Inserte el segundo numero de la sumatoria: ";
			cin >> sumandodos;
			cout << "El resultado es: " << (sumandouno + sumandodos) << endl; 
			cout << "\n";
			break;
		
		case 5:
			double dividendo, divisor;
			cout << "\n";
			cout << "Inserte el dividendo: ";
			cin >> dividendo;
			cout << "Inserte el divisor: ";
			cin >> divisor;
			cout << "El resultado es: " << (dividendo / divisor) << endl; 
			cout << "\n";
			break;
				
		case 0:
			return 0; //retorna 0 a main, interrumpiendo el ciclo que llama a la función menu()
			break;
				
		default:  //el switch salta a esta posicion cuando la entrada es un valor distinto de 1-5 , 0
			cout << "\n";
			cout << "Comando desconocido" << endl;
			cout << "\n";
			break;
	}
	
}



int main() {

	imprimBanner();
	
	// Llama a la función menu() en un ciclo infinito pero interrumpible
	bool ciclo = 1;
	while (ciclo == 1) {
		ciclo = menu();
	}
}

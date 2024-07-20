//---------------------------------------------------------------------------

#ifndef MEMORIAYOH
#define MEMORIAYOH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <iostream>
using namespace std;
//---------------------------------------------------------------------------
const int max_memoria=20, nulo=-1;
typedef int direccion_mem; //cambiar el nombre del tipo de dato int por direccion mem
struct NodoM{
	  int dato;
	  string id[12];
	  direccion_mem link; //entero
};
 //atributos parte privada
 //metodos public
class CSMemoria{

private:
	//NodoM mem[max_memoria];//vector estatico/con una sola dimension/inicializado con 20 space
	 NodoM *mem; //vector dinamico/dimension infinita pero sin inicializar
	direccion_mem libre;

public:
	CSMemoria();
	direccion_mem new_space(string cad);//direccion de memoria que recibe una cadena
	void delete_spacio(direccion_mem dir);//eliminar spacio recibe una "direccion de memoria" un entero
	void poner_dato(direccion_mem dir, string id,int valor);//recibe una direccion, una cadena, un valor
	int ObtenerDato(direccion_mem dir, int lugar);//recibe una direccion y un entero
	int espacio_disponible();
	int espacio_ocupado();
	bool dir_libre(direccion_mem dir);



};





class TForm1 : public TForm
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MEMORIAYO.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
}

CSMemoria::CSMemoria() { // referencia al .h
  mem = new NodoM[max_memoria];//inicializamos el vector
/*INICIO
 PARA CADA I DESDE 0 HASTA max
 MEM[ I ].LINK = I+1
 FIN PARA
 MEM[ max ].LINK = -1
 LIBRE = 0
FIN*/
 for (i = 0; i < max_memoria; i++) {
	  mem[i].link=i+1; //ponemos la direccion a los link 1,2,3,4,5.. 19
 }
 mem[max_memoria].link=-1;//al ultimo (20) le pone -1
 libre=0;
}

direccion_mem CSMemoria::new_space(string cad) {
DIRECCION CSMEMORIA::NEW_ESPACIO ( cadena)
/* cadena ‘a,b,c’
INICIO
 cant = Numero_Ids(Cadena)
 DIR = LIBRE
 D = LIBRE
 PARA CADA I = 1 HASTA CANT -1
 MEM[D].ID=Obtener_Id(cadena,i)
 D = MEM [ D ].LINK
 FIN PARA
 LIBRE=MEM [ D ].LINK
 MEM [ D ].LINK = -1
 MEM[D].ID=Obtener_Id(cadena, cant)
 // RETORNAR DIR
FIN*/





}

void CSMemoria::delete_spacio(direccion_mem dir) {
} // eliminar spacio recibe una "direccion de memoria" un entero

void CSMemoria::poner_dato(direccion_mem dir, string id, int valor) {
} // recibe una direccion, una cadena, un valor

int CSMemoria::ObtenerDato(direccion_mem dir, int lugar) {
} // reciuna direccion y un entero

int CSMemoria::espacio_disponible() {
}

int CSMemoria::espacio_ocupado() {
}

bool CSMemoria::dir_libre(direccion_mem dir) {
}

// ---------------------------------------------------------------------------

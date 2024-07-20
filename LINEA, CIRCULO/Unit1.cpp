//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <fstream>
#include <string>
#include <sstream>


#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 AnsiString Ruta="C:\\Nuevo documento de texto.txt";
 ifstream ArchivoStream(Ruta.c_str());
 if (!ArchivoStream.is_open()) {  //si no se ppudo habrir
	 ShowMessage("ERROR AL ABRIR EL ARCHIVO TEXTO");
	 return;
 }
 AnsiString Texto;
 ArchivoStream>>Texto; //Linea 100 100 200 200
 int x1,y1,x2,y2;
 int UltimoSpace=Texto.LastDelimiter(" ");
 AnsiString Figura= Texto.SubString(UltimoSpace+1,Texto.Length());
 //AnsiString Figura= Texto.SubString(0,);


 /*int UltimoSpace=Texto.LastDelimiter(" ");
  y2= StrToInt(Texto.SubString(UltimoSpace+1,Texto.Length()));
 Texto.Delete(UltimoSpace,Texto.Length());

   UltimoSpace=Texto.LastDelimiter(" ");
  x2= StrToInt(Texto.SubString(UltimoSpace+1,Texto.Length()));
 Texto.Delete(UltimoSpace,Texto.Length());

   UltimoSpace=Texto.LastDelimiter(" ");
   y1= StrToInt(Texto.SubString(UltimoSpace+1,Texto.Length()));
 Texto.Delete(UltimoSpace,Texto.Length());

	UltimoSpace=Texto.LastDelimiter(" ");
   x1= StrToInt(Texto.SubString(UltimoSpace+1,Texto.Length()));
 Texto.Delete(UltimoSpace,Texto.Length());

   UltimoSpace=Texto.LastDelimiter(" ");
 AnsiString Figura= Texto.SubString(UltimoSpace+1,Texto.Length());

 //PODRIA IR CORTANDO HASTA LLEGAR A LINEA     */
 if (Figura=="LINEA") {
	 std::istringstream iss(Texto.c_str());   //convertir a archivo de lectura
	iss>> x1 >> y1 >> x2 >> y2;  //copia el primero segundo tercero y cuarto

	 Canvas->MoveTo(x1,y1);
	 Canvas->LineTo(x2,y2);

	 //100 100 50 50 LINEA   1
	 //50 50 50 100 LINEA    3
	 //50 100 100 100 LINEA   2
	 //como abrir un archivo sin el dialogo

 }else{
	 if (Figura=="CIRCULO") {
		 std::istringstream iss(Texto.c_str());
		 iss >> x1>> y1>> x2;
		 Canvas->Ellipse(x1,y1,x2,x2);
	 }
 }


}
//---------------------------------------------------------------------------

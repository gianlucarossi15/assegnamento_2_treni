#pragma once
/// <summary>
/// @author:Gianluca Rossi
/// </summary>
#include<iostream>
using namespace std;
class Stazione
{
	protected:
	Stazione(); 
	Binario_standard* get_free_Bin_standard_sx(); //resistuisce un report sui binari liberi e occupati
    Binario_standard* get_free_Bin_standard_dx(); //resistuisce un report sui binari liberi e occupati
	void set_Bin_standard_sx(int index, bool status);
	void set_Bin_standard_dx(int index, bool status);
	~Stazione();
	int distance;
	string nome;
	private:
	Binario_standard bin_standard[4];//0-1 sinistra, 2-3 destra
	Binario_standard *arr1,*arr2;
	//array di double per i timer
	
};

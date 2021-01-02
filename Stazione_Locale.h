/// <summary>
/// @author:Gianluca Rossi
/// </summary>
#include "Stazione.h";
class Stazione_Locale:public Stazione
{
    public:
    Stazione_Locale();    
    Binario_transito get_status_Bin_transito_sx(); //resistuisce un report se il binario è libero o occupato
    Binario_transito get_status_Bin_transito_dx(); //resistuisce un report se il binario è libero o occupato 
    
    private:
    Binario_transito bin_transito[2];//0 per un verso, 1 per l'altro
};
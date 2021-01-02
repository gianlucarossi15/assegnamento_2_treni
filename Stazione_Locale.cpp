#include "Stazione_locale.h";
Stazione_Locale:: Stazione_Locale()
{
    
   
}
Stazione_Locale::get_status_Bin_transito_sx()
{
    return bin_transito[0].status==0;

}
Stazione_Locale:: get_status_Bin_transito_dx()
{
    return bin_transito[1].status==0;
}
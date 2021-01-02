#include "Stazione.h";
Stazione::Stazione()
{
    distance=0;
}
 Binario_standard* Stazione::get_free_Bin_standard_sx()
{
    arr1=new Binario_standard[2];
    for (int i = 0; i < 2; i++)
    {
        if(bin_standard[i].status==0)
            arr[i]=bin_standard[i];
    }
    return arr1;
}
Binario_standard* Stazione:: get_free_Bin_standard_dx()
{
    arr2=new Binario_standard[2];
    for (int i = 2; i < 4; i++)
    {
        if(bin_standard[i].status==0)
            arr[i]=bin_standard[i];
    }
    return arr2;
}
void Stazione::set_Bin_standard_sx(int index, bool status)
{
    if(index==0)
        bin_standard[0]=status;
    else if(index==1)
        bin_standard[1]=status;
}
void Stazione::set_Bin_standard_sx(int index, bool status)
{
    if(index==0)
            bin_standard[0]=status;
        else if(index==1)
            bin_standard[1]=status;
}
Stazione::~Stazione()
{
    delete[]arr1,arr2;
}
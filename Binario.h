//Riccardo Patrizio
#include "Treno.h"

class Binario{
private:
    Treno& t;
    //int tipo;
    bool disponibile = true;
    
protected:
    Binario();//
public:
    /*void setTreno(AltaVelocita& _t);
    void setTreno(AltaVelocitaSuper& _t);
    void setTreno(Regionale& _t);//assegna treno per reference**/
    void setTreno(Treno& _t);
    bool update();
    void releaseTreno();//rilascia treno
    //int getTipo(){return tipo;}
};

class Binario_standard : Binario{
    Binario_standard();
    



};
class Binario_transito : Binario{

};
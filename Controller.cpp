#include "Controller.h"


Controller::Controller(std::ifstream line_d, std::ifstream time_t){

}
void Controller::update(){
    tempo = tempo  + delta_t;

};

int main(void){
    std::ifstream line_d("line_description.txt");
    std::ifstream time_t("timetables.txt");
    Controller c = Controller(line_d, time_t);
    while(!c.fine())c.update();
}


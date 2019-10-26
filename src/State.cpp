#include "State.h"
using namespace std ;


State::State(string input){
    this->m_input = input ;
}

~State::State(){}



State * State::move(string input){
    auto it  = this->stateMap.find("input");
    if(it != this->stateMap.end() )
        return it ;
    
    cout << "Unable to move forward after State :" << this->m_input << " : " << input;

    exit(1);
    

}



#include <stdio>

use namespace std;

class State{

  public :
  
  State(string input);

  ~State();

  void addNextState(string, State);
 // State * move (int input);
   
  State * move  (string  input);

  private : 

  string m_input;
  map  <string,State *> stateMap;


}

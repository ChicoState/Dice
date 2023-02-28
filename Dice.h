#ifndef Dice_H
#define Dice_H
#include <vector>

using std::vector;

class Dice
{
  public:
   Dice();
   Dice(unsigned int);
   int roll();
   vector <int> get_distribution();
   vector <int> get_percentage();

  private:
   vector <int> m_roll_counter;
   const static int m_FACES = 6;
};

#endif

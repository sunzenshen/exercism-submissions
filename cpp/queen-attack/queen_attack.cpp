#include "queen_attack.h"

using namespace std;
using namespace queen_attack;

chess_board::operator std::string() const
{
  std::string print_board =
    "_ _ _ _ _ _ _ _\n"
    "_ _ _ _ _ _ _ _\n"
    "_ _ _ _ _ _ _ _\n"
    "_ _ _ _ _ _ _ _\n"
    "_ _ _ _ _ _ _ _\n"
    "_ _ _ _ _ _ _ _\n"
    "_ _ _ _ _ _ _ _\n"
    "_ _ _ _ _ _ _ _\n" ;

  // Refactor? Move finding of coordinate-to-string-position into function
  constexpr size_t row_offset = 16; // move past " _ _ _ _ _ _ _\n", already on _
  constexpr size_t col_offset = 2;  // "_ "
  print_board[row(m_white) * row_offset  +  column(m_white) * col_offset] = 'W';
  print_board[row(m_black) * row_offset  +  column(m_black) * col_offset] = 'B';

  return print_board;
}

bool chess_board::can_attack() const
{
  return same_column();
}

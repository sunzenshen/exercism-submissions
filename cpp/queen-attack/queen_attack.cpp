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
  print_board[m_white.first * row_offset  +  m_white.second * col_offset] = 'W';
  print_board[m_black.first * row_offset  +  m_black.second * col_offset] = 'B';

  return print_board;
}

bool chess_board::can_attack() const
{
  return same_column();
}

bool chess_board::same_column() const
{
  return m_white.second == m_black.second;
}

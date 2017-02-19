#include "queen_attack.h"
#include <stdlib.h>
#include <stdexcept>

using namespace std;
using namespace queen_attack;

chess_board::chess_board(const coordinate& white, const coordinate& black) : m_white(white), m_black(black)
{
  if (m_white == m_black)
    throw std::domain_error("Cannot initialize white and black queens in the same coordinate.");
}

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
  return same_column() || same_row() || diagonal();
}

bool chess_board::diagonal() const
{
  const auto row_offset = abs(row(m_white) - row(m_black));
  const auto column_offset = abs(column(m_white) - column(m_black));
  return row_offset == column_offset;
}


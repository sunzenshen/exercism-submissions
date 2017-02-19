#pragma once

#include <stdexcept>
#include <string>
#include <utility>

namespace queen_attack
{

typedef std::pair<int, int> coordinate;

class chess_board
{
  const coordinate m_black = std::make_pair(7, 3);
  const coordinate m_white = std::make_pair(0, 3);

public:
  chess_board() {}
  chess_board(coordinate white, coordinate black) : m_white(white), m_black(black)
  {
    if (m_white == m_black)
      throw std::domain_error("Cannot initialize white and black queens in the same coordinate.");
  }

  coordinate black() const { return m_black; }
  coordinate white() const { return m_white; }

  operator std::string() const
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

};

} // end namespace queen_attack

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

  operator std::string() const;

  bool can_attack() const
  {
    return false;
  }

};

} // end namespace queen_attack

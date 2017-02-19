#pragma once

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

  coordinate black() const { return m_black; }
  coordinate white() const { return m_white; }

};

} // end namespace queen_attack

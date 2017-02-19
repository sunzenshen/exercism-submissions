#pragma once

#include <utility>

namespace queen_attack
{

class chess_board
{
  const std::pair<int, int> m_black = std::make_pair(7, 3);
  const std::pair<int, int> m_white = std::make_pair(0, 3);

public:
  chess_board() {}

  std::pair<int, int> black() const { return m_black; }
  std::pair<int, int> white() const { return m_white; }

};

} // end namespace queen_attack

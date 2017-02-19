#pragma once

#include <string>
#include <utility>

namespace queen_attack
{

typedef std::pair<int, int> coordinate;

class chess_board
{
public:
  chess_board() {}
  chess_board(const coordinate& white, const coordinate& black);

  coordinate black() const { return m_black; }
  coordinate white() const { return m_white; }

  operator std::string() const;

  bool can_attack() const;

private:
  const coordinate m_black = std::make_pair(7, 3);
  const coordinate m_white = std::make_pair(0, 3);

  int column(const coordinate& coord) const {return coord.second;}
  int row(const coordinate& coord) const {return coord.first;}
  bool same_column() const { return column(m_white) == column(m_black); }
  bool same_row() const { return row(m_white) == row(m_black); }
  bool diagonal() const;

};

} // end namespace queen_attack


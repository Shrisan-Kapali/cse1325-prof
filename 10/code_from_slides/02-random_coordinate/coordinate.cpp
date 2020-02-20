#include "coordinate.h"
#include <cstdlib>

/*
 Class Coordinate - Models a location on a 2D grid.

 @author      George F. Rice
 @copyright   Copyright 2017-2019
 @version     2.0

 This file is part of Roving Robots.

 Roving Robots is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Roving Robots is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Foobar.  If not, see <https://www.gnu.org/licenses/>.
*/ 
 
Coordinate::Coordinate(int x, int y) : _x{x}, _y{y} { }
Coordinate::Coordinate() : Coordinate{std::rand() % MAX_X, std::rand() % MAX_Y} { }
int Coordinate::x( ) {return _x;}
int Coordinate::y( ) {return _y;}

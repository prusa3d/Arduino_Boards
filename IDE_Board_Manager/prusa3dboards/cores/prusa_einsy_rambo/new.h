/*
  Copyright (c) 2014 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef NEW_H
#define NEW_H

#include <stdlib.h>

void * operator new(size_t size);
void * operator new[](size_t size);
void * operator new(size_t size, void * ptr) noexcept;
void operator delete(void * ptr);
void operator delete[](void * ptr);
void operator delete(void * ptr, size_t size) noexcept;
void operator delete[](void * ptr, size_t size) noexcept;

#endif


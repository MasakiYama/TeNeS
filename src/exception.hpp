/* TeNeS - Massively parallel tensor network solver /
/ Copyright (C) 2019- The University of Tokyo */

/* This program is free software: you can redistribute it and/or modify /
/ it under the terms of the GNU General Public License as published by /
/ the Free Software Foundation, either version 3 of the License, or /
/ (at your option) any later version. */

/* This program is distributed in the hope that it will be useful, /
/ but WITHOUT ANY WARRANTY; without even the implied warranty of /
/ MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the /
/ GNU General Public License for more details. */

/* You should have received a copy of the GNU General Public License /
/ along with this program. If not, see http://www.gnu.org/licenses/. */

#ifndef TENES_EXCEPTION_HPP
#define TENES_EXCEPTION_HPP

#include <stdexcept>

namespace tenes{

class logic_error : public std::logic_error {
public:
  logic_error(const std::string &what_arg) : std::logic_error(what_arg) {}
  logic_error(const char *what_arg) : std::logic_error(what_arg) {}
};
class unimplemented_error : public tenes::logic_error {
public:
  unimplemented_error(const std::string &what_arg) : tenes::logic_error(what_arg) {}
  unimplemented_error(const char *what_arg) : tenes::logic_error(what_arg) {}
};

class runtime_error : public std::runtime_error {
public:
  runtime_error(const std::string &what_arg) : std::runtime_error(what_arg) {}
  runtime_error(const char *what_arg) : std::runtime_error(what_arg) {}
};
class input_error : public runtime_error {
public:
  input_error(const std::string &what_arg) : runtime_error(what_arg) {}
  input_error(const char *what_arg) : runtime_error(what_arg) {}
};
class load_error : public runtime_error {
public:
  load_error(const std::string &what_arg) : runtime_error(what_arg) {}
  load_error(const char *what_arg) : runtime_error(what_arg) {}
};

} // end of namespace tenes

#endif // TENES_EXCEPTION_HPP

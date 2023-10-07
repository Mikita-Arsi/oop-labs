#include "Decimal.h"
#include <cmath>
#include <iostream>

void Decimal::_validate_char_param(unsigned char symbol) {
   if (symbol < '0' or symbol > '9') {
      throw std::invalid_argument("Incorrect input");
   }
}

int Decimal::_conversion_to_int(unsigned char* arr, int size) {
   int value = 0;
   for (int i = 0; i < size; i++) {
      value += (arr[i] - '0') * pow(10, i);
   }
   return value;
}

Decimal Decimal::_conversion_to_decimal(int value) {
   std::string str_val = std::to_string(value);
   Decimal num(str_val);
   return num;
}

std::string Decimal::_array_to_str() {
   char to_str_number[_size];
   for (int i = 0; i < _size; i++) {
      to_str_number[i] = _array[i];
   }
   std::string result(to_str_number, _size);
   return result;
}

Decimal::Decimal() {
   _size = 0;
   _array = nullptr;
}

Decimal::Decimal(const size_t& n, unsigned char t = '0') {
   _validate_char_param(t);
   _size = n;
   _array = new unsigned char[n];
   for (int i = 0; i < n; i++) {
      _array[i] = t;
   }
}

Decimal::Decimal(const std::initializer_list<unsigned char>& t) {
   _size = t.size();
   _array = new unsigned char[t.size()];
   int i = _size - 1;

   for (unsigned char symbol : t) {
      _validate_char_param(symbol);
      _array[i] = symbol;
      i -= 1;
   }
}

Decimal::Decimal(const std::string& t) {
   _size = t.size();
   _array = new unsigned char[t.size()];

   int i = _size - 1;

   for (unsigned char symbol : t) {
      _validate_char_param(symbol);
      _array[i] = symbol;
      i -= 1;
   }
}

Decimal::Decimal(const Decimal& other) {
   this->_size = other._size;
   this->_array = new unsigned char[other._size];
   for (int i = 0; i < other._size; i++) {
      this->_array[i] = other._array[i];
   }
}

Decimal::Decimal(Decimal&& other) noexcept {
   _size = other._size;
   _array = other._array;

   other._size = 0;
   other._array = nullptr;
}

Decimal::~Decimal() noexcept {
   if (_size > 0) {
      _size = 0;
      delete[] _array;
      _array = nullptr;
   }
}

Decimal Decimal::operator=(const Decimal& other) {
   this->_size = other._size;
   this->_array = new unsigned char[other._size];
   for (int i = 0; i < other._size; i++) {
      this->_array[i] = other._array[i];
   }
   return *this;
}

Decimal Decimal::operator+(const Decimal& other) {
   int this_value = _conversion_to_int(this->_array, this->_size);
   int other_value = _conversion_to_int(other._array, other._size);
   return _conversion_to_decimal(this_value + other_value);
}

Decimal Decimal::operator-(const Decimal& other) {
   int this_value = _conversion_to_int(this->_array, this->_size);
   int other_value = _conversion_to_int(other._array, other._size);
   return _conversion_to_decimal(this_value - other_value);
}

Decimal Decimal::operator+=(const Decimal& other) {
   int this_value = _conversion_to_int(this->_array, this->_size);
   int other_value = _conversion_to_int(other._array, other._size);
   *this = _conversion_to_decimal(this_value + other_value);
   return *this;
}

Decimal Decimal::operator-=(const Decimal& other) {
   int this_value = _conversion_to_int(this->_array, this->_size);
   int other_value = _conversion_to_int(other._array, other._size);
   *this = _conversion_to_decimal(this_value - other_value);
   return *this;
}

bool Decimal::operator==(const Decimal& other) {

   if (this->_size != other._size) {
      return false;
   }
   for (int i = this->_size - 1; i > -1; i -= 1) {
      if (this->_array[i] != other._array[i]) {
         return false;
      }
   }
   return true;
}

bool Decimal::operator!=(const Decimal& other) { return not(*this == other); }

bool Decimal::operator>=(const Decimal& other) {
   int this_value = _conversion_to_int(this->_array, this->_size);
   int other_value = _conversion_to_int(other._array, other._size);
   return this_value >= other_value;
}

bool Decimal::operator<=(const Decimal& other) {
   int this_value = _conversion_to_int(this->_array, this->_size);
   int other_value = _conversion_to_int(other._array, other._size);
   return this_value <= other_value;
}

bool Decimal::operator>(const Decimal& other) {
   int this_value = _conversion_to_int(this->_array, this->_size);
   int other_value = _conversion_to_int(other._array, other._size);
   return this_value > other_value;
}

bool Decimal::operator<(const Decimal& other) {
   int this_value = _conversion_to_int(this->_array, this->_size);
   int other_value = _conversion_to_int(other._array, other._size);
   return this_value < other_value;
}

int Decimal::get_size() { return _size; }

unsigned char* Decimal::get_array() { return _array; }

//
// Created by shanerbo on 3/27/21.
//

#ifndef YET_ANOTHER_STL_STRING_HPP
#define YET_ANOTHER_STL_STRING_HPP
#include <cstdint>
#include <cstdio>
#include "Exception.hpp"
namespace YAS {
class String {
 public:
  /**
   * default constructor
   */
  String();
  /**
   * Constructor
   * @param[in] str char array
   */
  explicit String(const char *str);

  /**
   * Constructor
   * @param[in] str char array
   */
  String(const String &rhs);

  /**
   * Return size of string
   * @return size
   */
  size_t size() const;

  /**
   * Return if string is empty
   * @return
   */
  bool empty() const;

  /**
   * clear string
   */
  void clear();

  /**
   * Find index of char
   * @param c character to be found
   * @return index of c
   */
  int32_t find(char c);

  /**
   * Reverse string
   * @return reversed string
   */
  String reverse() {}

  /**
   * Get char at specific location
   * @param pos index
   * @return character at that pos
   */
  char operator[](size_t pos);

  /**
   * print out string content_
   */
  void print() { printf("%s", content_); }

  ~String() {
    size_ = 0;
    delete content_;
  }

 private:
  size_t size_;
  char *content_;
};
}  // namespace YAS
#endif  // YET_ANOTHER_STL_STRING_HPP

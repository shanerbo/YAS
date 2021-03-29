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
  String() noexcept;

  /**
   * Constructor
   * @param[in] str char array
   */
  String(const char *str) noexcept;

  /**
   * Constructor
   * @param[in] str char array
   */
  String(const String &rhs) noexcept;

  /**
   * Copy constructor
   * @param rhs
   * @return
   */
  String &operator=(String rhs);

  /**
   * move constructor
   * @param rhs
   */
  String(String &&rhs) noexcept;

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
  String reverse();

  /**
   * Get char at specific location
   * @param pos index
   * @return character at that pos
   */
  char operator[](size_t pos);

  String &operator+=(const String &rhs);

  /**
   * print out string content_
   */
  void print() { printf("%s", size_ == 0 ? "" : content_); }

  /**
   * Helper function
   * @param lhs
   * @param rhs
   */
  friend void swap(String &lhs, String &rhs);

  ~String() {
    size_ = 0;
    delete[] content_;
  }

 private:
  size_t size_;
  char *content_;
};
}  // namespace YAS
#endif  // YET_ANOTHER_STL_STRING_HPP

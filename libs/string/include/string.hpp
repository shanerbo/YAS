//
// Created by shanerbo on 3/27/21.
//

#ifndef YET_ANOTHER_STL_STRING_HPP
#define YET_ANOTHER_STL_STRING_HPP
#include <cstdint>
#include <cstdio>
#include "Exception.hpp"
namespace YAS {
class string {
 public:
  /**
   * default constructor
   */
  string() noexcept;

  /**
   * Constructor
   * @param[in] str char array
   */
  string(const char *str) noexcept;

  /**
   * Constructor
   * @param[in] str char array
   */
  string(const string &rhs) noexcept;

  /**
   * Copy constructor
   * @param rhs
   * @return
   */
  string &operator=(string rhs);

  /**
   * move constructor
   * @param rhs
   */
  string(string &&rhs) noexcept;

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
  string reverse();

  /**
   * return c-like string
   * @return const char array
   */
  const char *c_str() const;
  /**
   * Get char at specific location
   * @param pos index
   * @return character at that pos
   */
  char operator[](size_t pos);

  string &operator+=(const string &rhs);
  string operator+(const string &rhs);

  /**
   * print out string content_
   */
  void print() { printf("%s", size_ == 0 ? "" : content_); }

  /**
   * Helper function for implementing copy and swap idiom
   * @param lhs
   * @param rhs
   */
  friend void swap(string &lhs, string &rhs);

  ~string() {
    size_ = 0;
    delete[] content_;
  }

 private:
  size_t size_;
  char *content_;
};
}  // namespace YAS
#endif  // YET_ANOTHER_STL_STRING_HPP

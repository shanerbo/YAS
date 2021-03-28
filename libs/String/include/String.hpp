//
// Created by shanerbo on 3/27/21.
//

#ifndef YET_ANOTHER_STL_STRING_HPP
#define YET_ANOTHER_STL_STRING_HPP
namespace YAS {
class String {
 public:
  /**
   * Constructor
   * @param[in] str char array
   */
  explicit String(const char *str);

  /**
   * Constructor
   * @param[in] str char array
   */
  explicit String(const String &rhs);

  /**
   * Return size of string
   * @return size
   */
  size_t size();

  /**
   * Return if string is empty
   * @return
   */
  bool empty();

  /**
   * clear string
   */
  void clear();

  /**
   * Find index of char
   * @param c character to be found
   * @return index of c
   */
  size_t find(char c);

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

 private:
  size_t size_;
  char *content_;
};
}  // namespace YAS
#endif  // YET_ANOTHER_STL_STRING_HPP
// String a = new String();
// a.length();
// a.clear();
// a[];
// a = "Jiaran Yu"
// a.reverse("Erbo Shan")
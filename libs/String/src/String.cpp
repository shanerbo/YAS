//
// Created by shanerbo on 3/27/21.
//

#include "String.hpp"
#include <cstdlib>
#include <cstring>
namespace YAS {
String::String() : size_{0}, content_(nullptr) {}

String::String(const char *str) {
  size_ = strlen(str);
  content_ = (char *)malloc(size_ + 1);
  strcpy(content_, str);
}

String::String(const String &rhs) {
  size_ = rhs.size_;
  content_ = (char *)malloc(size_ + 1);
  strcpy(content_, rhs.content_);
}

size_t String::size() const { return size_; }

bool String::empty() const { return size_ == 0; }

void String::clear() {
  size_ = 0;
  content_ = nullptr;
}

int32_t String::find(char c) {
  for (int i = 0; i < size_; ++i) {
    if (content_[i] == c) {
      return i;
    }
  }
  return -1;
}

char String::operator[](size_t pos) {
  if (size_ == 0 or pos >= size_) {
    throw Exception("pos out of range");
  }
  return content_[pos];
}
}  // namespace YAS
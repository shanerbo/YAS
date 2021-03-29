//
// Created by shanerbo on 3/27/21.
//

#include "String.hpp"
#include <cstdlib>
#include <cstring>
#include <iostream>
namespace YAS {
String::String() noexcept : size_{0}, content_(nullptr) {}

String::String(const char *str) noexcept
    : size_(strlen(str)), content_(new char[size_ + 1]) {
  strcpy(content_, str);
}

String::String(const String &rhs) noexcept
    : size_(rhs.size_), content_(new char[size_ + 1]) {
  strcpy(content_, rhs.content_);
}

String::String(String &&rhs) noexcept : String() { swap(*this, rhs); }

String &String::operator=(String rhs) {
  swap(rhs, *this);
  return *this;
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

String &String::operator+=(const String &rhs) {
  size_t new_len = rhs.size_ + size_;
  char *new_str = new char[new_len + 1];
  strcpy(new_str, content_);
  strcpy(new_str + size_, rhs.content_);
  delete[] content_;
  size_ = new_len;
  content_ = new_str;
  return *this;
}

String String::operator+(const String &rhs) {
  String tmp(*this);
  tmp += rhs;
  return tmp;
}

void swap(String &lhs, String &rhs) {
  std::swap(lhs.size_, rhs.size_);
  std::swap(lhs.content_, rhs.content_);
}

String String::reverse() {
  char *temp = new char[size_ + 1];
  for (int i = 0; i < static_cast<int>(size_); ++i) {
    temp[i] = content_[size_ - 1 - i];
  }
  temp[size_] = 0;
  return String(temp);
}

const char *String::c_str() const { return content_; }

}  // namespace YAS
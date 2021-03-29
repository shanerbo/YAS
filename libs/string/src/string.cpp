//
// Created by shanerbo on 3/27/21.
//

#include "string.hpp"
#include <cstdlib>
#include <cstring>
#include <iostream>
namespace YAS {
string::string() noexcept : size_{0}, content_(nullptr) {}

string::string(const char *str) noexcept
    : size_(strlen(str)), content_(new char[size_ + 1]) {
  strcpy(content_, str);
}

string::string(const string &rhs) noexcept
    : size_(rhs.size_), content_(new char[size_ + 1]) {
  strcpy(content_, rhs.content_);
}

string::string(string &&rhs) noexcept : string() { swap(*this, rhs); }

string &string::operator=(string rhs) {
  swap(rhs, *this);
  return *this;
}

size_t string::size() const { return size_; }

bool string::empty() const { return size_ == 0; }

void string::clear() {
  size_ = 0;
  content_ = nullptr;
}

int32_t string::find(char c) {
  for (int i = 0; i < size_; ++i) {
    if (content_[i] == c) {
      return i;
    }
  }
  return -1;
}

char string::operator[](size_t pos) {
  if (size_ == 0 or pos >= size_) {
    throw Exception("pos out of range");
  }
  return content_[pos];
}

string &string::operator+=(const string &rhs) {
  size_t new_len = rhs.size_ + size_;
  char *new_str = new char[new_len + 1];
  strcpy(new_str, content_);
  strcpy(new_str + size_, rhs.content_);
  delete[] content_;
  size_ = new_len;
  content_ = new_str;
  return *this;
}

string string::operator+(const string &rhs) {
  string tmp(*this);
  tmp += rhs;
  return tmp;
}

void swap(string &lhs, string &rhs) {
  std::swap(lhs.size_, rhs.size_);
  std::swap(lhs.content_, rhs.content_);
}

string string::reverse() {
  char *temp = new char[size_ + 1];
  for (int i = 0; i < static_cast<int>(size_); ++i) {
    temp[i] = content_[size_ - 1 - i];
  }
  temp[size_] = 0;
  return string(temp);
}

const char *string::c_str() const { return content_; }
std::ostream &operator<<(std::ostream &os, string &rhs) {
  os << rhs.c_str();
  return os;
}

}  // namespace YAS
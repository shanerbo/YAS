//
// Created by shanerbo on 3/27/21.
//

#include "String.hpp"
namespace YAS {
String::String(const char *str) { return; }
String::String(const String &rhs) {}

size_t String::size() { return 0; }

bool String::empty() { return false; }

void String::clear() {}

size_t String::find(char c) { return nullptr; }

char operator[](const String &rhs) {}
}  // namespace YAS
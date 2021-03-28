//
// Created by shanerbo on 3/27/21.
//

#ifndef YET_ANOTHER_STL_EXCEPTION_HPP
#define YET_ANOTHER_STL_EXCEPTION_HPP
#include <exception>
#include <string>
#include <utility>
class Exception : public std::exception {
  std::string msg_;

 public:
  explicit Exception(std::string msg) : msg_(std::move(msg)) {}

  const char* what() const noexcept override { return msg_.c_str(); }
};
#endif  // YET_ANOTHER_STL_EXCEPTION_HPP

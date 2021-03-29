//
// Created by shanerbo on 3/28/21.
//

#ifndef YET_ANOTHER_STL_VECTOR_HPP
#define YET_ANOTHER_STL_VECTOR_HPP
#include <Exception.hpp>
#include <algorithm>
#include <cstdio>
namespace YAS {

template <class T>
class vector {
 public:
  /**
   * Default constructor
   */
  vector() {
    capacity_ = 2;
    size_ = 0;
    items_ = new T[capacity_];
  }

  /**
   * Constructor
   * @param size
   * @param item
   */
  vector(size_t size, T item)
      : capacity_(2*size_), size_(size), items_(new T[capacity_]) {
    for (int i = 0; i < size_; ++i) {
      items_[i] = item;
    }
  }

  /**
   * Copy constructor
   * @param rhs
   */
  vector(const vector<T>& rhs)
      : capacity_(rhs.capacity_), size_(rhs.size_), items_(new T[capacity_]) {
    for (int i = 0; i < size_; ++i) {
      items_[i] = rhs.items_[i];
    }
  }

  /**
   * Move constructor
   * @param v
   */
  vector(vector<T>&& v) : vector() { swap(*this, v); }

  /**
   * Assignment constructor
   * @param v
   * @return
   */
  vector& operator=(vector<T> v) { swap(*this, v); }

  ~vector() {
    size_ = 0;
    capacity_ = 0;
    delete[] items_;
  }
  /**
   * Add item to the back of the vector
   * @param item
   */
  void push_back(T item) {
    if (size_ >= capacity_) {
      capacity_ *= 2;  // enlarge capacity by two
      T* new_items = new T[capacity_];
      for (int i = 0; i < size_; ++i) {
        new_items[i] = items_[i];
      }
      new_items[size_++] = item;
      std::swap(new_items, items_);
      delete[] new_items;
    } else {
      items_[size_] = item;
      size_++;
    }
  }

  /**
   * Remove last item in the vector and return it
   */
  T pop_back() {
    if (size_ > 0) {
      return items_[size_ - 1];
    } else {
      throw Exception("vector is empty");
    }
  }

  /**
   * Remove all items in vector
   */
  void clear() { ~vector<T>(); }

  size_t size() { return size_; }

  size_t capacity() { return capacity_; }

  void print() {
    for (int i = 0; i < size_; ++i) {
      printf("%d", items_[i]);
    }
  }

  friend void swap(vector<T>& lhs, vector<T>& rhs) {
    std::swap(lhs.items_, rhs.items_);
    std::swap(lhs.size_, rhs.size_);
    std::swap(lhs.capacity_, rhs.capacity_);
  }

 private:
  size_t size_;      // how many items currently we haves
  size_t capacity_;  // how many items can be stored
  T* items_;
};

}  // namespace YAS

#endif  // YET_ANOTHER_STL_VECTOR_HPP

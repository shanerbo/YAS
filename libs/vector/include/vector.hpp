//
// Created by shanerbo on 3/28/21.
//

#ifndef YET_ANOTHER_STL_VECTOR_HPP
#define YET_ANOTHER_STL_VECTOR_HPP
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
    items_ = nullptr;
  }

  /**
   * Constructor
   * @param size
   * @param item
   */
  vector(size_t size, T item) : capacity_(2), size_(size), items_(new T[size]) {
    for (int i = 0; i < size; ++i) {
      items_[i] = item;
    }
  }

  /**
   * Copy constructor
   * @param rhs
   */
  vector(const vector<T>& rhs)
      : capacity_(rhs.capacity_), size_(rhs.size_), items_(new T[size_]) {
    for (int i = 0; i < size_; ++i) {
      items_[i] = rhs.items_[i];
    }
  }

  /**
   * Move constructor
   * @param v
   */
  vector(vector<T>&& v);

  /**
   * Assignment constructor
   * @param v
   * @return
   */
  vector& operator=(vector<T> v);

  ~vector() {
    size_ = 0;
    capacity_ = 0;
    delete[] items_;
  }
  /**
   * Add item to the back of the vector
   * @param item
   */
  void push_back(T item);

  /**
   * Remove last item in the vector and return it
   */
  T pop_back();

  /**
   * Remove all items in vector
   */
  void clear() { ~vector<T>(); }

  size_t size() { return size_; }

  size_t capacity() { return capacity_; }

 private:
  size_t size_;
  size_t capacity_;
  T* items_;
};

}  // namespace YAS

#endif  // YET_ANOTHER_STL_VECTOR_HPP

#include <initializer_list>
#include <iostream>

class Buffer {
public:
  Buffer(const std::initializer_list<float> &values) : _size{values.size()} {
    _data_ptr = new float[values.size()];
    std::copy(values.begin(), values.end(), _data_ptr);
  }

  auto begin() const { return _data_ptr; }
  auto end() const { return _data_ptr + _size; };

  ~Buffer() {
    delete[] _data_ptr;
    _data_ptr = nullptr;
  }

private:
  size_t _size{0};
  float *_data_ptr{nullptr};
};

int main() {
  auto data = Buffer({1.0f, 2.0f, 3.0f, 4.0f, 5.0f});

  for (auto elem : data) {
    std::cout << elem << std::endl;
  }

  for (auto it = data.begin(); it < data.end(); it++) {
    std::cout << *it << std::endl;
  }
}
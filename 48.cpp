#include <iostream>

#include <vector>

int sumArray(const std::vector<int>& arr) {

  int sum = 0;

  for (int num : arr) {

    sum += num;

  }

  return sum;

}

int main() {

  std::vector<int> numbers = {4,-1,2,1};

  std::cout << "Array elements: ";

  for (int num : numbers) {

    std::cout << num << " ";

  }

  std::cout << std::endl;

  int total = sumArray(numbers);

  std::cout << "Sum of array elements: " << total << std::endl;

  return 0;

}












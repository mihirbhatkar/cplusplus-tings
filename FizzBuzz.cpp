#include <iostream>
#include <map>

int main() {
  //   for (int i = 1; i <= 100; i++) {
  //     if (i % 3 == 0 && i % 5 == 0) {
  //       cout << "FizzBuzz" << endl;
  //     } else if (i % 3 == 0) {
  //       cout << "Fizz" << endl;
  //     } else if (i % 5 == 0) {
  //       cout << "Buzz" << endl;
  //     } else {
  //       cout << i << endl;
  //     }
  //   }

  std::map<int, std::string> map;

  map[3] = "Fizz";
  map[5] = "Buzz";
  map[4] = "Jazz";

  for (int i = 1; i <= 100; i++) {
    std::string output = "";

    for (std::map<int, std::string>::iterator itr = map.begin();
         itr != map.end(); ++itr) {
      if (i % itr->first == 0) {
        output += itr->second;
      }
    }

    if (output.empty()) {
      std::cout << i << std::endl;
    } else {
      std::cout << output << std::endl;
    }
  }

  return 0;
}

// Some basic map functions

// begin() – Returns an iterator to the first element in the map.
// end() – Returns an iterator to the theoretical element that follows the last
// element in the map.
// size() – Returns the number of elements in the map.
// max_size() – Returns the maximum number of elements that the map can hold.
// empty() – Returns whether the map is empty.
// pair insert(keyvalue, mapvalue) – Adds a new element to the map.
// erase(iterator position) – Removes the element at the position pointed by the
// iterator. erase(const g)– Removes the key-value ‘g’ from the map. clear() –
// Removes all the elements from the map.

// The auto keyword in C++ is used for type inference, allowing the compiler to
// automatically deduce the data type of a variable or the return type of a
// function

// auto& together is  a way to declare variables with
// automatic type deduction and specify that they are references to the deduced
// type

// entry will have the type std::pair<const int, std::string>. It contains both
// the key (first) and the value (second) for that element.
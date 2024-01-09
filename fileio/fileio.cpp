
// Contains code for fileio
// Kaila Anderson
// 2/7/2023

#include<iostream>
#include<fstream>
#include<stdlib.h>


int printWords(){
  std::ifstream file ("fileio-text.txt");
  
  if(!file.is_open()){
    std::cout << "Unable to open file";
    std::cout << std::endl;
    return 1;
  }

  char ch;
  file.get(ch);
  while(!file.eof()){
    if(ch != ' ')
      std::cout << ch;
    else
      std::cout << std::endl;
    file.get(ch);
  }
  file.close();
  return 0;
}

void addNumbers() {
    std::ifstream numFile("fileio-data-1.txt");
    if (!numFile.is_open()) {
        std::cout << "File failed to open" << std::endl;
    }
    while (!numFile.eof()) {
        char ch;
        const int capacity = 5;
        char num1[capacity] = { 0 };
        char num2[capacity] = { 0 };
        int i = 0;

        while (numFile >> ch) {
            if (ch == ';')
                break;
            num1[i++] = ch;
        }
        int one = atoi(num1);

        int j = 0;
        while (numFile >> ch) {
            if (ch == ';')
                break;
            num2[j++] = ch;
        }

        int two = atoi(num2);
        int result = one + two;

        std::cout << result << std::endl;
    }
    numFile.close();
}

int main(){
  
 printWords();
 std::cout << std::endl;
 addNumbers();
 
}

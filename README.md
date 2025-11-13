# object-oriented-programming-exercises
06-11-2025: Download and use QT creator 18.0.0.

**Problem:** Special characters like 'ä' not displayed correctly.(h2a.Rectangle)
Add #include <windows.h> in Rectangle.cpp
ADD
```c++
SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
```
in fuctionin void Rectangle::printAreaAndCircum(),ä is displayed correctly:
```text
pinta-ala=53.95, ympärysmitta=29.6
```
Then I modified the contents of int main(), even though they don’t belong to the Rectangle::printAreaAndCircum() function,  they still displayed correctly.
```text
Näme:Mikkö Heinonen, studentNumber:999, average:4.8
```
Because Calling
```c++
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
```
changes the console code page globally for the entire process, not just inside the function.
This means once these functions are called, all subsequent std::cout or std::cin operations in any part of the program will use UTF-8 encoding.








# SFMLUtils
Adds extra functionality to SFML in C++

> I just want to draw a damn line with one line of code.
> - Probably most SFML users


## How to use
**There are a few prerequisites before being able to use SFMLUtils**

In your `main.cpp` your RenderWindow must be declared outside of a funciton, and must be called "window".
 ```cpp
 #include <SFML/Graphics.hpp>
 #include "SFMLUtils.h"
 #include <iostream>
 
 using namespace std;
 using namespace sf;
 
 RenderWindow window(VideoMode(800, 600), "Title");
 SFMLUtils utils;
 
 int main() {
   window.setFramerateLimit(60);
   while(true) {
  
     window.clear();
     utils.drawRect(IntRect(20, 20, 100, 100), Color::Red);
     window.display();
   
   }
 }
 ```

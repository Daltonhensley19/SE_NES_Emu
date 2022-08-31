<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgements">Acknowledgements</a></li>
  </ol>
</details>




## About The Project

![Project](https://www.oldcomputerbooks.com/pictures/R519.jpg?v=1590693199)
Image Source: https://www.oldcomputerbooks.com/pictures/R519.jpg?v=1590693199


Hello, all! This project is is centered around emulating the Z80 Processor such that we can load and execute programs which are written using the Z80 instruction set. 
 


### Built With

* [CMake](https://cmake.org/download/)
* [C++/Visual Studio](https://support.microsoft.com/en-us/topic/the-latest-supported-visual-c-downloads-2647da03-1eea-4433-9aff-95f26a218cc0)
* [GCC](https://gcc.gnu.org/install/download.html) (if using Linux)




## Getting Started

This is an example of how you may give instructions on setting up the project locally.
To get a local copy up and running, follow these simple example steps.

### Prerequisites if using an Arch Based Linux Distro

You will nedd to install CMake, GCC, GLFW, and OpenGL.
* CMake
  ```sh
  sudo pacman -S cmake
  ```
* GCC
  ```sh
  sudo pacman -S gcc
  ```

### Prerequisites if using an Windows

You will nedd to install CMake, GCC, GLFW, and OpenGL.
* [CMake](https://cmake.org/download/)
* [Visual Studio](https://support.microsoft.com/en-us/topic/the-latest-supported-visual-c-downloads-2647da03-1eea-4433-9aff-95f26a218cc0)




### Installation Using the Command Line (Assuming Linux or MacOS) 
1. Clone the repo
   ```sh
   git clone https://github.com/Daltonhensley19/z80_emu_group
   ```
2. Make a build directory
   ```sh
   cd z80_emu_group && mkdir build 
   ```
3. Generate Makefiles using CMake
   ```sh
   cd build && cmake ..
   ```
3. Build project 
   ```sh
   make
   ```




## License

Distributed under the MIT License. See `LICENSE` for more information.




## Contact 

Dalton Hensley -  dzhensley@moreheadstate.edu


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

![Project](https://guide-images.cdn.ifixit.com/igi/1ET6yOLDI5jVxAqO.large) 
Image Source: https://guide-images.cdn.ifixit.com/igi/1ET6yOLDI5jVxAqO.large


Hello, all! This project is is centered around emulating the NES such that we can play the games (ROMs) which ran on the NES. One game which we hope to support is the famous "Super Mario Bros." 

Moreover, this project will first focus on naively creating the emulator. This means that we are not strictly concerned with the accuracy of emulation so long as some of the games run *at all*. If we have time later in the semester, we can include cool features like: save states, custom cheats, and making the emulation faster more generally. 

The benefits™:
* Learn how to reason about the interconnected processes between the CPU, the NES memory hierarchy, PPU, APU, etc.
* As the emulator matures, you come to better understand gaps in your knowledge. Not sure how an ISA's work? Learn by emulating one. As an example: the instruction set used on the Ricoh 2A03 (based on the 6502) CPU. 
* Develop the ability to reverse engineer a complex system and translate this system into a programming language. 

## Current Roadmap (Subject to Change, No Particular Order)
  1.) Emulate the CPU
  2.) Emulate the APU (Audio Processing Unit)
  3.) Emulate the PPU (Pixel Processing Unit, kind of like a GPU)
  4.) Emulate a Bus which connects these components 
  5.) Visual Debugger to inspect how the game data (ROM) is flowing through these components. 
  6.) Profit???
  



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
   git clone https://github.com/Daltonhensley19/SE_NES_Emu
   ```
2. Make a build directory
   ```sh
   cd SE_NES_Emu && mkdir build 
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


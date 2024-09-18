# Janus Library

Janus is a C++ library for basic operations, including addition, subtraction, multiplication, division, and factorial calculations.
It is just a starting project for me to learn how to make cpp libraries and get the intricacies and learn the best practices so I can
work on something bigger that I have in mind.

## Purpose

The Janus library was created as an educational project to deepen understanding of C++ programming. It represents the beginning of a journey into more complex C++ development. The primary goal of this library is to serve as a foundational learning tool.

This project is just the start of a broader exploration of C++ capabilities. One of the larger projects in progress is `kalam`, a library for handling basic image operations. By developing Janus, the goal is to build a solid understanding of C++ fundamentals, which will be invaluable when tackling more advanced projects like Kalam.

## Building and Installing

First clone the lib

```bash
git clone git@github.com:Aliqyan-21/Janus.git
```

To build the library, use CMake:

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

To install the library:

```bash
cmake --install .
```

## Usage

Include the library in your project:

```cpp
#include <janus/janus.hpp>
```

Link against janus_lib in your CMake configuration.

## License

[MIT](LICENSE)

### Note

This README clearly states that Janus is a learning tool and provides context for its development within a broader journey of learning and project development.
If you need any further adjustments or additional sections, just let me know!

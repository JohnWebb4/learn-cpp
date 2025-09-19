# Chapter 11

Source: https://www.learncpp.com/cpp-tutorial/header-files/

```
Best practice

To maximize the chance that missing includes will be flagged by compiler, order your #includes as follows (skipping any that are not relevant):

The paired header file for this code file (e.g. add.cpp should #include "add.h")
Other headers from the same project (e.g. #include "mymath.h")
3rd party library headers (e.g. #include <boost/tuple/tuple.hpp>)
Standard library headers (e.g. #include <iostream>)
The headers for each grouping should be sorted alphabetically (unless the documentation for a 3rd party library instructs you to do otherwise).
```

TLDR: Invert the order I normally do. Catches when you are missing an `#include` statement

# Vector

A simple C++ header file to do basic vector operations. 

### Usage

```
#include "Vec.hpp"


vec::vector2i vec1(10, 20);
vec::vector2i vec2(30);
vec::vector2i vec3; 

vec3 = vec1 + vec2; 

std::cout << vec3.x << vec3.y << std::endl;
```
__output__
>40 50

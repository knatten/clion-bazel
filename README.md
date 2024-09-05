One-liner with CMake (intentionally not using CTest):

```
rm -rf build && cmake -B build -S src && cmake --build build && ./build/tests/foo/test_foo
```

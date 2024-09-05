Just testing out some stuff with Bazel vs. CMake in CLion

One-liner with CMake (intentionally not using CTest):

```
rm -rf build && cmake -B build -S src && cmake --build build && ./build/tests/foo/test_foo
```

One-liner with Bazel:

```
cd src; bazel build //... && ./bazel-bin/tests/foo/test_foo
```

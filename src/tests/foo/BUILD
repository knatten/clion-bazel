cc_binary(
    name = "test_foo",
    srcs = ["test_foo.cpp"],
    copts = ["-Ifoo"],
    deps = [
        "//foo:libfoo",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)

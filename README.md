# jsoncpp - JSON parsing and serialization C++ library

This is a `build2` package repository for
[`jsoncpp`](https://github.com/open-source-parsers/jsoncpp), a C++ library
for JSON parsing and serialization, with support for reading and writing
values while optionally preserving comments in the source document.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`jsoncpp` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](./libjsoncpp/PACKAGE-README.md) file.

The development setup for `jsoncpp` uses the standard `bdep`-based workflow.
For example:

```
git clone --recursive https://github.com/build2-packaging/jsoncpp.git
cd jsoncpp

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```

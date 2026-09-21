# libjsoncpp - JSON parsing and serialization C++ library

This is a `build2` package for the
[`JsonCpp`](https://github.com/open-source-parsers/jsoncpp) C++ library. It
provides JSON parsing and serialization, with support for reading and
writing values while optionally preserving comments in the source document.


## Usage

To start using `libjsoncpp` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libjsoncpp ^1.9.8
```

Then import the library in your `buildfile`:

```
import libs = libjsoncpp%lib{jsoncpp}
```


## Importable targets

This package provides the following importable targets:

```
lib{jsoncpp}
```

`lib{jsoncpp}` is the library, exposing JSON parsing
(`Json::CharReader`/`Json::Reader`) and serialization
(`Json::StreamWriter`/`Json::Writer`) through the public headers under
`json/`.


## Configuration variables

This package provides no configuration variables.

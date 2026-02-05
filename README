This is a small demo of how to use both Emscripten and plain clang to build
web applications.

Emscripten is by far the more straightforward approach, as pure clang requires
a lot of extra work for anything beyond e.g. passing integers back and forth.

# emscripten/
You can run this example if you have the Emscripten SDK installed. It will work
if you have `em++` (Emscripten's C++ compiler) in your path. Then, you can run
`make` to generate main.html, using Emscripten's default HTML shell.

You require a local webserver to interact with this file. Run, e.g.:

`python -m http.server`

in the root of this repository, then browsing to `localhost:8000/emscripten/main.html`
will run the application. You can see its printed output (through `std::cout`)
in the developer console.

Emscripten is very convenient in that it provides essentially direct access to
many familiar C++ APIs, such as standard output and the standard library. The
program here would work on a normal C++ platform, and also works fine on the
web.

# pure-wasm/
You can run this example if you have Clang installed (as long as your Clang
was compiled with the `wasm32` target, which I believe most Clangs are). You
can run `make` to generate main.wasm, which is loaded by the manually-written
main.html.

You require a local webserver to interact with this file. Run, e.g.:

`python -m http.server`

in the root of this repository, then browsing to `localhost:8000/pure-wasm/main.html`
will run the application. It also prints to the developer console, using the manually
imported function `print_int32`.

Writing pure WASM is much less convenient than Emscripten. We have to:
- Manually import certain files from JS. That is, declare a function signature
  on the C side that we then implement on the JS side.
- Manually export certain functions to the JS. This is the idea of the `c_main`
  function, which is our custom entry point, essentially, and that we manually
  call from the JS (in main.html).
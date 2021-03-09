Fork of the Arcade Learning Environment (ALE)

For the main (upstream) project see: https://github.com/mgbellemare/Arcade-Learning-Environment

The changes here are intended to:

* Make it easier to "vendor" the ALE source under another C++ project and
  compile it directly (vs building ALE as a library)
* Provide a serializable state that represents unique game states

Specific changes from upstream:

* Only the base C++ interface; no Python bindings
* No CMake or Docker

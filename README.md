Fork of the Arcade Learning Environment (ALE)

For the main (upstream) project see: https://github.com/mgbellemare/Arcade-Learning-Environment

The changes here are intended to:

* Provide a serializable state that represents unique game states
* Apply fixes that haven't yet made it into upstream
* Make it easier to "vendor" the ALE source under another C++ project and
  compile it directly (vs building ALE as a library)

Specific changes from upstream:

* Paddle positions are exposed in the API (needed for complete observable state)
* Make restoreState() restore the RAM instead of leaving stale values
  * Upstream pull request: https://github.com/mgbellemare/Arcade-Learning-Environment/pull/413
* Applied Jesse Farebrother's patch to fix nondeterminism issues
  * Upstream pull request: https://github.com/mgbellemare/Arcade-Learning-Environment/pull/401
* Only the base C++ interface; no Python bindings
* No CMake or Docker

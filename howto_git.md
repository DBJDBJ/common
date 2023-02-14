<h1>CAUTION! This is deprecated. We do not use GIT submodules.</h1>

- [Cloning this repo with submodules](#cloning-this-repo-with-submodules)
- [How to remove a git submodule](#how-to-remove-a-git-submodule)
  - [https://stackoverflow.com/a/36593218/10870835](#httpsstackoverflowcoma3659321810870835)
- ['fatal: detected dubious ownership in repository at'](#fatal-detected-dubious-ownership-in-repository-at)

## Cloning this repo with submodules

> [Be sure you do this BEFORE cloning!](https://stackoverflow.com/a/4438292)

With version 2.13 of Git and later, --recurse-submodules can be used instead of --recursive:
```
git clone --recurse-submodules -j8 https://github.com/dbj-data/machine_wide.git
cd bar
```
Editor’s note: `-j8` is an optional performance optimization that became available in version 2.8, and fetches up to 8 submodules at a time in parallel.

If you forogt the above you need to use this next:

```
git submodule update --recursive --remote
```
This has the added benefit of respecting any "non default" branches specified in the .gitmodules or .git/config files (if you happen to have any, default is origin/master, in which case some of the other answers here would work as well).

For git 1.7.3 or above you can use (but the below gotchas around what update does still apply):
```
git submodule update --recursive
```
or:
```
git pull --recurse-submodules
```
if you want to pull your submodules to latest commits instead of the current commit the repo points to.

## How to remove a git submodule

### https://stackoverflow.com/a/36593218/10870835

The majority of answers to this question are outdated, incomplete, or unnecessarily complex.

A submodule cloned using git 1.7.8 or newer will leave at most four traces of itself in your local repo. The process for removing those four traces is given by the three commands below:
```
# Remove the submodule entry from .git/config
git submodule deinit -f path/to/submodule

# Remove the submodule directory from the superproject's .git/modules directory
rm -rf .git/modules/path/to/submodule

# Remove the entry in .gitmodules and remove the submodule directory located at path/to/submodule
git rm -f path/to/submodule
```

## ['fatal: detected dubious ownership in repository at'](https://stackoverflow.com/questions/72978485/git-submodule-update-failed-with-fatal-detected-dubious-ownership-in-repositor)

Silence all warnings related to git's safe.directory system. [Be sure to understand what you're doing](https://github.com/git/git/commit/8959555cee7ec045958f9b6dd62e541affb7e7d9).
```
git config --global --add safe.directory "*"
```
> IMPORTANT: on Windows it must be `"*"` not `'*'`

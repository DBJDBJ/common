
# How to build a project using this repo
- This repo uses the **organization folder** concept. 
  - No submodules. 
- Please checkout the [MACHINE_WIDE](https://github.com/dbj-data/machine_wide) repo somewhere on your machine
  - we call that directory: organization folder
  - execute `set_machine_wide.cmd`; found in the root of that repo, 
    - BUT from the organization folder!
  - now you have `DBJ_MACHINE_WIDE` env var pointing to the machine wide roorganization folder.
- Building from VStudio you will just [need to know this](https://docs.microsoft.com/en-us/cpp/build/reference/i-additional-include-directories?view=msvc-170) :wink:
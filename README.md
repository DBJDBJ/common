
> This is NOT a git repo with submodules.
> 
> We create organization folder first. e.g. `c:\dbj_machine_wide`. Then we clone all the repos bellonging to this organization under that folder. 
> 
> Then we execute `set_machine_wide.cmd` in that folder. That ctreates `DBJ_MACHINE_WIDE` envvar which we use in builds to use repos from here.
> 
> Simple :wink:

---

![wip](media/work_in_progres_raw.jpg)
<h2> This readme and everything in here is: W.I.P. </h2>
<h2> &nbsp;</h2>

> Hint to those who care: this is **NOT** VS Code Multi Root Workspace
<h2> &nbsp;</h2>

<h1> Table of Contents </h1>

- [BIG FAT CHANGES](#big-fat-changes)
- [What is this repo all about?](#what-is-this-repo-all-about)
  - [Our solution](#our-solution)
    - [Back from single header to the common header :wink:](#back-from-single-header-to-the-common-header-wink)
    - [The Management](#the-management)
- [PS](#ps)
  - [standard C stuff for the WIN OS](#standard-c-stuff-for-the-win-os)
  - [For C++ Aficionados](#for-c-aficionados)
    - [We are even more orthodox than orthodox C++ :wink:](#we-are-even-more-orthodox-than-orthodox-c-wink)
  - [Building](#building)
    - [CLANG-CL is mandatory](#clang-cl-is-mandatory)
- [WIP](#wip)
    - [Linking](#linking)
    - [DBJ\_MACHINE\_WIDE envvar](#dbj_machine_wide-envvar)
- [APPENDIX](#appendix)
  - [Why or Why Not is something in here (WIP!)](#why-or-why-not-is-something-in-here-wip)
  - [We need to talk about WIL](#we-need-to-talk-about-wil)
    - [But, but, but, what about containers?!](#but-but-but-what-about-containers)

---

# BIG FAT CHANGES

- 2023FEB13
This is NOT a git repo with submodules.
 
We create organization folder first. e.g. `c:\dbj_machine_wide`. Then we clone all the repos bellonging to this organization under that folder. 
 
Then we execute `set_machine_wide.cmd` in that folder. That ctreates `DBJ_MACHINE_WIDE` envvar which we use in builds to use repos from here.
 
Simple :wink:
- 2023JAN23
  - DBJ_MACHINE_WIDE is introduced
  - it is env var whow value is thhe full path to the root folder in here
  - if not already done execute `set_machine_wide,.cmd`
  ```
  ```
- 2022DEC18
  - all the common includes are to be consolidated into the root folder
    - that is not a trivial task 


---

# What is this repo all about?

Primary motivation is my biggest burden: I have ammased **a lot of code**, and it is not always clean, safe, resilient and compliant. Just like your :wink:

Even worse there are overlaps and redndancies after years of ad-hoc work on the style of: "*Oh, I need to try this quickly ... Now*".

- Next motivation in here is to avoid deeply nested sub-modules. 
  - more than one layer of git sub modules is enough to generate general confusion
  - unless your poject is not staffed full of git wizards
## Our solution
- You check out this repo on your machine in one well know place. 
  - And then you use all the dbj related common stuff from that place
  - hint: hence the repo name.
- Recap: `MACHINE_WIDE` is a single place from which we include common dbj stuff. 
  - And no cruft.
- No local to your project dbj submodules anywhere, just in here and flat one layer of them
  - no `sub-sub[-sub*]` git modules.

> Your projects using dbj code do require this one repo and its folder to be on the INCLUDE path
> 
> Interedependancies do require this one repo and its folder to be on the INCLUDE path

### Back from single header to the common header :wink:

**Why?**

- Because that means the common "stuff" is not repeated "all around the place", in all the "single headers"
- Opposite to the "single header" philosophy. Here we are following the "common headers but in one place" philosophy
- This is where "machine wide" includes are.
- in one well known place
- perhaps you might call it DBJ SDK :wink:

### The Management

- The development also happens in these many folders and that means a lot of cruft. 
  - Potentially.
- Be careful not to develop in the master branch
- Be careful to use the master branch when including

In case you especially want something from here please do mention it in issues and we might focus on your needs. Hint: if you are persuasive :wink:

# PS

## standard C stuff for the WIN OS
- "two headed" code organization: `DBJ_CAPI` and `DBJ_CPP` was meant to be on the logical top of all  includes. 
- But not any more. 
- The firm roadmap is to have a single top folder, and that is to be: **DBJ-WIN** .
  - > Standard C for the WIN OS

## For C++ Aficionados

We use C++ in a non-standard form: no exceptions, no iostreams, no RTTI, no type_traits shenanigans, no `system_error`, no meta programming and all the other C++ things you love and loathe.

### We are even more orthodox than [orthodox C++](https://gist.github.com/bkaradzic/2e39896bc7d8c34e042b) :wink:

But that is hard. So we like to use MS STL (gasp!) but with the `/kernel` switch.
 
MS STL can be built and used in a so called "kernel" mode. That is a *"big deal"*. That means non standard C++ and non standard std lib, are delivered and maintained by Microsoft.
 
- No C++ exceptions, and no RTTI
- "kernel" mode does require using the cl.exe `/kernel` switch. 
- it seems `clang-cl` can not understand the `/kernel` switch, so please use `/D_HAS_EXCEPTIONS=0` in project properties or on its cli.
- `CPP_UNWIND` is undefined if cl.exe switch `/DNO_EXCEPTIONS=1` is used
- Beware: `CPP_UNWIND` is r"ead only macro".
  - see it in `<vcruntime.h>` in action.
- Also keywords: `try`,`throw` and `switch` are rendered non-existent
- [RTTI](https://docs.microsoft.com/en-us/cpp/build/reference/gr-enable-run-time-type-information?view=msvc-160) is switched off by using `/GR-` cl.exe switch

## Building 

### CLANG-CL is mandatory
- For building we use Visual Studio as IDE and clang-cl as a compiler. 
- When we use VS Code we prefer simple bat files for building
  - VS Code has/had trouble finding and using clang-cl.exe

# WIP

### Linking

First of all idea is to use headers only. No libs. No dlls.

If there are lib's or dll's they are in `~\MACHINE_WIDE\lib`. 
- Perhaps you might add it to your [`/LIBPATH`](https://docs.microsoft.com/en-us/cpp/build/reference/libpath-additional-libpath?view=msvc-160). For happy Visual Studio building (clang-cl or cl) 
  - please place your lib's after the `/linker` switch.

### DBJ_MACHINE_WIDE envvar

- DBJ_MACHINE_WIDE is set by calling `set_machine_wide.cmd`, in the root folder of this repo.
- We are aiming for this to be the only user environment variable one might need to use DBJ stuff, "machine wide". 
- We will set it to the devl machine location of the "machine_wide" repo.
  - for example: `D:\\machine_wide`
  - Important: notice the semicolon at the end of it.
- Please add the `%DBJ_MACHINE_WIDE%` to the INCLUDE PATH like so for example

```
clang-cl -I%DBJ_MACHINE_WIDE% testme.c
```

> We use and recommend [Rapid Environment Editor](https://www.rapidee.com/en/about)

---
# APPENDIX

## Why or Why Not is something in here (WIP!)

It all depends how firs feasible and second fast is "something" in the code.

In the past. Generally everything went through [dbj-bench](https://github.com/dbj-data/dbj-bench) before being accepted.

## We need to talk about WIL 

[WIL](https://github.com/microsoft/wil) is a treasure trove for anyone using all sorts of realy important WIndows API's. In some pleaces it is using really low level legacy stuf (MS RPC), or complex stuff (COM).

WIL is also very revealing on what MSFT top programers think of many thigs you also think about. Like for example comment in the WIL header: `stl.h`. Take some time and think what is NOT inside and what is inside that header. And why.

But "things" will be definitely and regularly "nicked" from WIL and transformed to some dbj win32 internals.

### But, but, but, what about containers?! 

Not much to do with this repo but here is our advice. (As you have revealed yourself in a need of advice.)

Be aware there are two fundamental types of containers: Linux and Windows Containers. And that means: If you realy want to build and use Windows containers, it is veru warmly recomended: make VM first! "Windows Server Core" or "Windows Nano Server".

If you want your trusty Windows 10 in a container prepare for a role coaster ride. (hint:role not roler)

> Windows requires the host OS version to match the container OS version. If you want to run a container based on a newer Windows build, make sure you have an equivalent host build. Otherwise, you can use Hyper-V isolation to run older containers on new host builds.

This if you are probably trying to pull a non-compliant image, check your windows version and accordingly select the proper tag to pull. For example in your Docker file you want to have this:
```
# exact win10 version is essential to match
# for exanple this image wis required on a win 10 
# with exactly the same build number
FROM mcr.microsoft.com/windows:1909.
```
Let us repeat: exact win10 version is essential to match. Image and windows.

Now back to work kids. 

---
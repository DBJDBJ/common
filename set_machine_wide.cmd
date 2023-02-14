
@ECHO.
@ECHO CAUTION! Execute this script from the organization root folder! Not from here.
@ECHO For example from c:\DBJ_MACHINE_WIDE if that is the folder under which you clone all 
@ECHO the repos under  https://github.com/machine-wide/
@ECHO.
@REM typical windows script mumbo jumbo
@REM but it works
set temp=%~dp0
@REM remove the last char
setx DBJ_MACHINE_WIDE %temp:~0,-1%

@REM do not forget to check in a freshly opened cmd
@REM  like this
@REM  echo %DBJ_MACHINE_WIDE%
@REM for /f %%# in ('wMIC Path Win32_LocalTime Get /Format:value') do @for /f %%@ in ("%%#") do @set %%@
@REM echo %day%
@REM echo %DayOfWeek%
@REM echo %hour%
@REM echo %minute%
@REM echo %month%
@REM echo %quarter%
@REM echo %second%
@REM echo %weekinmonth%
@REM echo %year%

@rem now can echo it (for example) into the version header into some macro definition
@rem example:

echo #define VERSION "%date% %time%" > version.h

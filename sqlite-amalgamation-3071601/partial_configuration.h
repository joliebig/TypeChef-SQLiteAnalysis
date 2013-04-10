# lexer error tcl.h not found
# sqlite3.c line 456
#undef SQLITE_TCL
#undef TCLSH

# lexer error windows.h not found
# sqlite3.c line 9481
#define SQLITE_OS_WIN 0

# lexer error malloc/malloc.h not found
# sqlite3.c line 15528
#undef __APPLE__

# lexer error unicode/utypes.h not found
# sqlite3.c line 137385
#define SQLITE_CORE
#undef SQLITE_ENABLE_ICU

# lexer error unknown user defined type
# sqlite3.pi line 6711
#undef __BORLANDC__
#undef _MSC_VER

# type error malloc_usable_size undeclared
# sqlite3.pi line 40999
#define SQLITE_SYSTEM_MALLOC
#undef SQLITE_ZERO_MALLOC
#define HAVE_MALLOC_H
#define HAVE_MALLOC_USABLE_SIZE
# related to #error
#undef SQLITE_WIN32_MALLOC
#undef SQLITE_MEMDEBUG
#undef SQLITE_ZERO_MALLOC

# type error yy_parse_failed undeclared
# sqlite3.pi line 168484
#undef YYERRORSYMBOL

# type error Type Wal not defined
# sqlite3.pi line 77984
#undef SQLITE_OMIT_WAL
#undef SQLITE_OMIT_DISKIO

# type error sqlite3VdbeExpandSql undeclared
# sqlite3.pi line 101167
#undef SQLITE_OMIT_FLOATING_POINT
#undef SQLITE_OMIT_TRACE

# several type errors
#undef SQLITE_OMIT_TRIGGER

# type error selectOpName undeclared
# sqlite3.pi line 152449
#undef SQLITE_OMIT_COMPOUND_SELECT

# type error mutexShared undeclared
# sqlite3.pi line 84122
#undef SQLITE_OMIT_SHARED_CACHE
#undef SQLITE_MUTEX_OMIT

# several type errors; e.g., Tcl_Obj undeclared
# sqlite3.pi line 186030
#undef SQLITE_TEST

# several type errors
# incorrect assignment
# Constant(0) is not a function, but has type CZero()
# sqlite3.pi line 193973
#undef SQLITE_ENABLE_RTREE

# several type errors
# incorrect assignment
# sqlite3.pi line 187806
#undef SQLITE_OMIT_VIRTUALTABLE

# optional macro used for compatibiliy reasons with older versions of sqlite (sqlite3.c line 361)
#undef THREADSAFE

# configuration error; cpp macro defined but has no value
#if defined(SQLITE_THREADSAFE)
    #define SQLITE_THREADSAFE 1
#endif

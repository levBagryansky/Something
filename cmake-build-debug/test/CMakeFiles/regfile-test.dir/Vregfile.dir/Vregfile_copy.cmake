# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL)")
set(VERILATOR_ROOT "/usr/share/verilator" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(Vregfile_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(Vregfile_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(Vregfile_SC 0)
# Coverage output mode?  0/1 (from --coverage)
set(Vregfile_COVERAGE 0)
# Threaded output mode?  0/1/N threads (from --threads)
set(Vregfile_THREADS 0)
# VCD Tracing output mode?  0/1 (from --trace)
set(Vregfile_TRACE_VCD 1)
# FST Tracing output mode? 0/1 (from --fst-trace)
set(Vregfile_TRACE_FST 0)

### Sources...
# Global classes, need linked once per executable
set(Vregfile_GLOBAL "${VERILATOR_ROOT}/include/verilated.cpp" "${VERILATOR_ROOT}/include/verilated_dpi.cpp" "${VERILATOR_ROOT}/include/verilated_vcd_c.cpp")
# Generated module classes, non-fast-path, compile with low/medium optimization
set(Vregfile_CLASSES_SLOW "/home/tardis3/Something/cmake-build-debug/test/CMakeFiles/regfile-test.dir/Vregfile.dir/Vregfile__Slow.cpp" "/home/tardis3/Something/cmake-build-debug/test/CMakeFiles/regfile-test.dir/Vregfile.dir/Vregfile_regfile__Slow.cpp")
# Generated module classes, fast-path, compile with highest optimization
set(Vregfile_CLASSES_FAST "/home/tardis3/Something/cmake-build-debug/test/CMakeFiles/regfile-test.dir/Vregfile.dir/Vregfile.cpp" "/home/tardis3/Something/cmake-build-debug/test/CMakeFiles/regfile-test.dir/Vregfile.dir/Vregfile_regfile.cpp")
# Generated support classes, non-fast-path, compile with low/medium optimization
set(Vregfile_SUPPORT_SLOW "/home/tardis3/Something/cmake-build-debug/test/CMakeFiles/regfile-test.dir/Vregfile.dir/Vregfile__Syms.cpp" "/home/tardis3/Something/cmake-build-debug/test/CMakeFiles/regfile-test.dir/Vregfile.dir/Vregfile__Trace__Slow.cpp")
# Generated support classes, fast-path, compile with highest optimization
set(Vregfile_SUPPORT_FAST "/home/tardis3/Something/cmake-build-debug/test/CMakeFiles/regfile-test.dir/Vregfile.dir/Vregfile__Dpi.cpp" "/home/tardis3/Something/cmake-build-debug/test/CMakeFiles/regfile-test.dir/Vregfile.dir/Vregfile__Trace.cpp")
# All dependencies
set(Vregfile_DEPS "/home/tardis3/Something/src/regfile.v" "/usr/bin/verilator_bin")
# User .cpp files (from .cpp's on Verilator command line)
set(Vregfile_USER_CLASSES )

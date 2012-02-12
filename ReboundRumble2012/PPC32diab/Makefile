# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))
WRVX_COMPBASE := $(subst \,/,$(WRVX_COMPBASE))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC32diab
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/Robot-Code-2012
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/ReboundRumble2012



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC32
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/lib/WPILib.a 

IDE_LIBRARIES = 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
DEBUGFLAGS_Linker = -XO -Xsize-opt
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif


#Project Targets
PROJECT_TARGETS = ReboundRumble2012/$(MODE_DIR)/ReboundRumble2012.out \
	 ReboundRumble2012_partialImage/$(MODE_DIR)/ReboundRumble2012_partialImage.o


#Rules

# ReboundRumble2012
ifeq ($(DEBUG_MODE),1)
ReboundRumble2012/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
ReboundRumble2012/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
ReboundRumble2012/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
ReboundRumble2012/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
ReboundRumble2012/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
ReboundRumble2012/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
ReboundRumble2012/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
ReboundRumble2012/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
ReboundRumble2012/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -XO -Xsize-opt
ReboundRumble2012/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
ReboundRumble2012/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
ReboundRumble2012/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
ReboundRumble2012/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/lib/WPILib.a 
ReboundRumble2012/$(MODE_DIR)/% : IDE_LIBRARIES = 
ReboundRumble2012/$(MODE_DIR)/% : IDE_DEFINES = 
ReboundRumble2012/$(MODE_DIR)/% : PROJECT_TYPE = DKM
ReboundRumble2012/$(MODE_DIR)/% : DEFINES = 
ReboundRumble2012/$(MODE_DIR)/% : EXPAND_DBG = 0
ReboundRumble2012/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
ReboundRumble2012/$(MODE_DIR)/% : CPU = PPC32
ReboundRumble2012/$(MODE_DIR)/% : TOOL_FAMILY = diab
ReboundRumble2012/$(MODE_DIR)/% : TOOL = diab
ReboundRumble2012/$(MODE_DIR)/% : TOOL_PATH = 
ReboundRumble2012/$(MODE_DIR)/% : CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
ReboundRumble2012/$(MODE_DIR)/% : LIBPATH = 
ReboundRumble2012/$(MODE_DIR)/% : LIBS = 
ReboundRumble2012/$(MODE_DIR)/% : OBJ_DIR := ReboundRumble2012/$(MODE_DIR)

OBJECTS_ReboundRumble2012 = ReboundRumble2012_partialImage/$(MODE_DIR)/ReboundRumble2012_partialImage.o

ReboundRumble2012/$(MODE_DIR)/ReboundRumble2012.out : $(OBJECTS_ReboundRumble2012)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";ddump -Ng $(OBJECTS_ReboundRumble2012) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)dcc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -Xdollar-in-ident -Xforce-declarations $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)dld -tPPCFH:vxworks63 -X -r5 -r4 -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_ReboundRumble2012) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

ReboundRumble2012/$(MODE_DIR)/ReboundRumble2012_compile_file : $(FILE) ;

_clean :: ReboundRumble2012/$(MODE_DIR)/ReboundRumble2012_clean

ReboundRumble2012/$(MODE_DIR)/ReboundRumble2012_clean : 
	$(TRACE_FLAG)if [ -d "ReboundRumble2012" ]; then cd "ReboundRumble2012"; rm -rf $(MODE_DIR); fi


# ReboundRumble2012_partialImage
ifeq ($(DEBUG_MODE),1)
ReboundRumble2012_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
ReboundRumble2012_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
ReboundRumble2012_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
ReboundRumble2012_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
ReboundRumble2012_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
ReboundRumble2012_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
ReboundRumble2012_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
ReboundRumble2012_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
ReboundRumble2012_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -XO -Xsize-opt
ReboundRumble2012_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
ReboundRumble2012_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
ReboundRumble2012_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
ReboundRumble2012_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/lib/WPILib.a 
ReboundRumble2012_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = 
ReboundRumble2012_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
ReboundRumble2012_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
ReboundRumble2012_partialImage/$(MODE_DIR)/% : DEFINES = 
ReboundRumble2012_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
ReboundRumble2012_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
ReboundRumble2012_partialImage/$(MODE_DIR)/% : CPU = PPC32
ReboundRumble2012_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = diab
ReboundRumble2012_partialImage/$(MODE_DIR)/% : TOOL = diab
ReboundRumble2012_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
ReboundRumble2012_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
ReboundRumble2012_partialImage/$(MODE_DIR)/% : LIBPATH = 
ReboundRumble2012_partialImage/$(MODE_DIR)/% : LIBS = 
ReboundRumble2012_partialImage/$(MODE_DIR)/% : OBJ_DIR := ReboundRumble2012_partialImage/$(MODE_DIR)

ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Spike.o : $(PRJ_ROOT_DIR)/Spike.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/BallCollector.o : $(PRJ_ROOT_DIR)/Subsystems/BallCollector.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Collar.o : $(PRJ_ROOT_DIR)/Subsystems/Collar.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Drivetrain.o : $(PRJ_ROOT_DIR)/Subsystems/Drivetrain.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/LimitSensor.o : $(PRJ_ROOT_DIR)/Subsystems/LimitSensor.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Optical.o : $(PRJ_ROOT_DIR)/Subsystems/Optical.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Passer.o : $(PRJ_ROOT_DIR)/Subsystems/Passer.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Puncher.o : $(PRJ_ROOT_DIR)/Subsystems/Puncher.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Turret.o : $(PRJ_ROOT_DIR)/Subsystems/Turret.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Vision.o : $(PRJ_ROOT_DIR)/Subsystems/Vision.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_ReboundRumble2012_partialImage = ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Spike.o \
	 ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/BallCollector.o \
	 ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Collar.o \
	 ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Drivetrain.o \
	 ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/LimitSensor.o \
	 ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Optical.o \
	 ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Passer.o \
	 ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Puncher.o \
	 ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Turret.o \
	 ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Vision.o

ReboundRumble2012_partialImage/$(MODE_DIR)/ReboundRumble2012_partialImage.o : $(OBJECTS_ReboundRumble2012_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dld -tPPCFH:vxworks63 -X -r5  -o "$@" $(OBJECTS_ReboundRumble2012_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

ReboundRumble2012_partialImage/$(MODE_DIR)/ReboundRumble2012_partialImage_compile_file : $(FILE) ;

_clean :: ReboundRumble2012_partialImage/$(MODE_DIR)/ReboundRumble2012_partialImage_clean

ReboundRumble2012_partialImage/$(MODE_DIR)/ReboundRumble2012_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "ReboundRumble2012_partialImage" ]; then cd "ReboundRumble2012_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Spike.d ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/BallCollector.d ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Collar.d \
	 ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Drivetrain.d ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/LimitSensor.d ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Optical.d \
	 ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Passer.d ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Puncher.d ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Turret.d \
	 ReboundRumble2012_partialImage/$(MODE_DIR)/Objects/ReboundRumble2012/Subsystems/Vision.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

JOBS?=1
ifeq ($(JOBS),1)
main_all : external_build  $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"
else
main_all : external_build 
	@$(MAKE) -f $(MAKEFILE) --jobs $(JOBS) $(MFLAGS) $(PROJECT_TARGETS);\
	echo "make: built targets of `pwd`"
endif 

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""

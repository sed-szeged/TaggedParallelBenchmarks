include ../../common/make.config
include ../../../repara.mk

# OpenCL installation path      
# OPENCL_DIR = /home/mwb7w/NVIDIA_GPU_Computing_SDK/
# OPENCL_DIR = /home/mwb7w/ati-stream-sdk-v2.2-lnx64/


CC = gcc
CC_FLAGS = -g -O3 -Wall $(ANALYSIS_FLAGS)

EXE = hotspot

$(EXE): hotspot.c hotspot.h OpenCL_helper_library.c OpenCL_helper_library.h
	$(CC) $(CC_FLAGS) -o $(EXE) -I$(OPENCL_INC) OpenCL_helper_library.c hotspot.c -L$(OPENCL_LIB) -lOpenCL -lm

clean:
	rm -f $(EXE)

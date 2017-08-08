#ifdef __cplusplus
extern "C" {
#endif

//========================================================================================================================================================================================================200
//	KERNEL_GPU_OPENCL_WRAPPER HEADER
//========================================================================================================================================================================================================200

void 
kernel_gpu_opencl_wrapper(	par_str parms_cpu,
							dim_str dim_cpu,
							box_str* box_cpu,
							FOUR_VECTOR* rv_cpu,
							fp* qv_cpu,
							FOUR_VECTOR* fv_cpu,
							int deviceNumber,int platformNumber,char *argv []);

//========================================================================================================================================================================================================200
//	END KERNEL_GPU_OPENCL_WRAPPER HEADER
//========================================================================================================================================================================================================200

#ifdef __cplusplus
}
#endif

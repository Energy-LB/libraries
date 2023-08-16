
#ifndef __FILES_Hdef
#define __FILES_Hdef

#define MAX_CPU  24
//#define MAX_CPU  181   
#define CORE_X_CPU 8 
#define NFREQ 20 

#define NODES 24 
#define CLOCK1 2400000
#define CLOCK2  800000

struct eLB_t {
	double package[MAX_CPU][2];
	double dram[MAX_CPU][2];
	double ecore[MAX_CPU][2];
};

struct clockLB_t {
	double max[MAX_CPU];
	double min[MAX_CPU];
	double cur[MAX_CPU];
	int avalfreq[MAX_CPU][NFREQ];
};

#endif

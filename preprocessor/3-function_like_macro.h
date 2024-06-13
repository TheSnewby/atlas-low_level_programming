#ifndef function_like_macro_h
#define function_like_macro_h
#define ABS(x) { \
	int X = x; \
	(X) < (0) ? (-X) : (X); \
	} 

#endif

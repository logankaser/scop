#ifndef SCOP_H
# define SCOP_H
# include <GLES3/gl3.h>
# include "matrix.h"

typedef struct		s_scop
{
	GLuint			mvp_id;
	GLuint			vao_id;
	unsigned		vert_count;
	t_mat			proj;
	t_mat			trans;
	t_mat			TP;
}					t_scop;

#endif
#ifndef _RAY_THREAD_H_
#define _RAY_THREAD_H_

#include "ray_actor.h"

ray_actor_t* ray_thread_new(lua_State* L);

void ray_thread_init(lua_State* L, int narg);

int rayM_thread_send (ray_actor_t* self, ray_actor_t* that, int narg);
int rayM_thread_recv (ray_actor_t* self, ray_actor_t* from);
int rayM_thread_close(ray_actor_t* self);

LUALIB_API int luaopen_ray_thread(lua_State* L);

#endif /* _RAY_THREAD_H_ */

/*This file is generated by luagen.*/
#include "lua_ftk_sources_manager.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkSourcesManager");
}

static int lua_ftk_sources_manager_create(lua_State* L)
{
	tolua_Error err = {0};
	FtkSourcesManager* retv;
	int max_source_nr;
	int param_ok = tolua_isnumber(L, 1, 0, &err);

	return_val_if_fail(param_ok, 0);

	max_source_nr = tolua_tonumber(L, 1, 0);
	retv = ftk_sources_manager_create(max_source_nr);
	tolua_pushusertype(L, (void*)retv, "FtkSourcesManager");

	return 1;
}

static int lua_ftk_sources_manager_add(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkSourcesManager* thiz;
	FtkSource* source;
	int param_ok = tolua_isusertype(L, 1, "FtkSourcesManager", 0, &err) && tolua_isusertype(L, 2, "FtkSource", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	source = tolua_tousertype(L, 2, 0);
	retv = ftk_sources_manager_add(thiz, source);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_sources_manager_remove(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkSourcesManager* thiz;
	FtkSource* source;
	int param_ok = tolua_isusertype(L, 1, "FtkSourcesManager", 0, &err) && tolua_isusertype(L, 2, "FtkSource", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	source = tolua_tousertype(L, 2, 0);
	retv = ftk_sources_manager_remove(thiz, source);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_sources_manager_get_count(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkSourcesManager* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkSourcesManager", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_sources_manager_get_count(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_sources_manager_get(lua_State* L)
{
	tolua_Error err = {0};
	FtkSource* retv;
	FtkSourcesManager* thiz;
	int i;
	int param_ok = tolua_isusertype(L, 1, "FtkSourcesManager", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	i = tolua_tonumber(L, 2, 0);
	retv = ftk_sources_manager_get(thiz, i);
	tolua_pushusertype(L, (void*)retv, "FtkSource");

	return 1;
}

static int lua_ftk_sources_manager_need_refresh(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkSourcesManager* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkSourcesManager", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_sources_manager_need_refresh(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_sources_manager_set_need_refresh(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkSourcesManager* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkSourcesManager", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_sources_manager_set_need_refresh(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_sources_manager_destroy(lua_State* L)
{
	tolua_Error err = {0};
	FtkSourcesManager* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkSourcesManager", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	ftk_sources_manager_destroy(thiz);

	return 1;
}

int tolua_ftk_sources_manager_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkSourcesManager", "FtkSourcesManager", "", NULL);
	tolua_beginmodule(L, "FtkSourcesManager");
	tolua_function(L, "Create", lua_ftk_sources_manager_create);
	tolua_function(L, "Add", lua_ftk_sources_manager_add);
	tolua_function(L, "Remove", lua_ftk_sources_manager_remove);
	tolua_function(L, "GetCount", lua_ftk_sources_manager_get_count);
	tolua_function(L, "Get", lua_ftk_sources_manager_get);
	tolua_function(L, "NeedRefresh", lua_ftk_sources_manager_need_refresh);
	tolua_function(L, "SetNeedRefresh", lua_ftk_sources_manager_set_need_refresh);
	tolua_function(L, "Destroy", lua_ftk_sources_manager_destroy);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}

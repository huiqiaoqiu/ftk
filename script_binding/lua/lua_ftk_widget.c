/*This file is generated by luagen.*/
#include "lua_ftk_widget.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkWidget");
}

static int lua_ftk_widget_type(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_type(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_top(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_top(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_left(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_left(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_top_abs(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_top_abs(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_left_abs(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_left_abs(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_top_in_window(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_top_in_window(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_left_in_window(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_left_in_window(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_width(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_width(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_height(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_height(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_is_insensitive(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_is_insensitive(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_is_visible(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_is_visible(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_is_focused(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_is_focused(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_is_active(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_is_active(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_id(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_id(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_update(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_update(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_get_gc(lua_State* L)
{
	tolua_Error err = {0};
	FtkGc* retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_get_gc(thiz);
	tolua_pushusertype(L, (FtkGc*)retv, "FtkGc");

	return 1;
}

static int lua_ftk_widget_canvas(lua_State* L)
{
	tolua_Error err = {0};
	FtkCanvas* retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_canvas(thiz);
	tolua_pushusertype(L, (FtkCanvas*)retv, "FtkCanvas");

	return 1;
}

static int lua_ftk_widget_has_attr(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int attr;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	attr = tolua_tonumber(L, 2, 0);
	retv = ftk_widget_has_attr(thiz, attr);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_state(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_state(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_user_data(lua_State* L)
{
	tolua_Error err = {0};
	void* retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_user_data(thiz);
	tolua_pushusertype(L, (void*)retv, "void");

	return 1;
}

static int lua_ftk_widget_get_text(lua_State* L)
{
	tolua_Error err = {0};
	const char* retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_get_text(thiz);
	tolua_pushstring(L, (const char*)retv);

	return 1;
}

static int lua_ftk_widget_invalidate(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_invalidate(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_show(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int visible;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	visible = tolua_tonumber(L, 2, 0);
	ftk_widget_show(thiz, visible);

	return 1;
}

static int lua_ftk_widget_show_all(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int visible;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	visible = tolua_tonumber(L, 2, 0);
	ftk_widget_show_all(thiz, visible);

	return 1;
}

static int lua_ftk_widget_set_visible(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int visible;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	visible = tolua_tonumber(L, 2, 0);
	ftk_widget_set_visible(thiz, visible);

	return 1;
}

static int lua_ftk_widget_move(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int x;
	int y;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err) && tolua_isnumber(L, 3, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	x = tolua_tonumber(L, 2, 0);
	y = tolua_tonumber(L, 3, 0);
	ftk_widget_move(thiz, x, y);

	return 1;
}

static int lua_ftk_widget_resize(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int width;
	int height;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err) && tolua_isnumber(L, 3, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	width = tolua_tonumber(L, 2, 0);
	height = tolua_tonumber(L, 3, 0);
	ftk_widget_resize(thiz, width, height);

	return 1;
}

static int lua_ftk_widget_move_resize(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int x;
	int y;
	int width;
	int height;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err) && tolua_isnumber(L, 3, 0, &err) && tolua_isnumber(L, 4, 0, &err) && tolua_isnumber(L, 5, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	x = tolua_tonumber(L, 2, 0);
	y = tolua_tonumber(L, 3, 0);
	width = tolua_tonumber(L, 4, 0);
	height = tolua_tonumber(L, 5, 0);
	ftk_widget_move_resize(thiz, x, y, width, height);

	return 1;
}

static int lua_ftk_widget_set_type(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int type;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	type = tolua_tonumber(L, 2, 0);
	ftk_widget_set_type(thiz, type);

	return 1;
}

static int lua_ftk_widget_set_insensitive(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int insensitive;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	insensitive = tolua_tonumber(L, 2, 0);
	ftk_widget_set_insensitive(thiz, insensitive);

	return 1;
}

static int lua_ftk_widget_set_focused(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int focused;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	focused = tolua_tonumber(L, 2, 0);
	ftk_widget_set_focused(thiz, focused);

	return 1;
}

static int lua_ftk_widget_set_active(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int active;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	active = tolua_tonumber(L, 2, 0);
	ftk_widget_set_active(thiz, active);

	return 1;
}

static int lua_ftk_widget_set_id(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int id;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	id = tolua_tonumber(L, 2, 0);
	ftk_widget_set_id(thiz, id);

	return 1;
}

static int lua_ftk_widget_set_canvas(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	FtkCanvas* canvas;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isusertype(L, 2, "FtkCanvas", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	canvas = tolua_tousertype(L, 2, 0);
	ftk_widget_set_canvas(thiz, canvas);

	return 1;
}

static int lua_ftk_widget_set_parent(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	FtkWidget* parent;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isusertype(L, 2, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	parent = tolua_tousertype(L, 2, 0);
	ftk_widget_set_parent(thiz, parent);

	return 1;
}

static int lua_ftk_widget_set_text(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	const char* text;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	text = tolua_tostring(L, 2, 0);
	ftk_widget_set_text(thiz, text);

	return 1;
}

static int lua_ftk_widget_set_font(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	const char* font_desc;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	font_desc = tolua_tostring(L, 2, 0);
	ftk_widget_set_font(thiz, font_desc);

	return 1;
}

static int lua_ftk_widget_set_font_size(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int font_size;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	font_size = tolua_tonumber(L, 2, 0);
	ftk_widget_set_font_size(thiz, font_size);

	return 1;
}

static int lua_ftk_widget_append_child(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	FtkWidget* child;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isusertype(L, 2, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	child = tolua_tousertype(L, 2, 0);
	ftk_widget_append_child(thiz, child);

	return 1;
}

static int lua_ftk_widget_append_sibling(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	FtkWidget* next;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isusertype(L, 2, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	next = tolua_tousertype(L, 2, 0);
	ftk_widget_append_sibling(thiz, next);

	return 1;
}

static int lua_ftk_widget_remove_child(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	FtkWidget* child;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isusertype(L, 2, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	child = tolua_tousertype(L, 2, 0);
	ftk_widget_remove_child(thiz, child);

	return 1;
}

static int lua_ftk_widget_set_attr(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int attr;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	attr = tolua_tonumber(L, 2, 0);
	ftk_widget_set_attr(thiz, attr);

	return 1;
}

static int lua_ftk_widget_unset_attr(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int attr;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	attr = tolua_tonumber(L, 2, 0);
	ftk_widget_unset_attr(thiz, attr);

	return 1;
}

static int lua_ftk_widget_set_user_data(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	char* destroy;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	destroy = (char*)tolua_tostring(L, 2, 0);
	ftk_widget_set_user_data(thiz, lua_ftk_destroy_func, destroy);

	return 1;
}

static int lua_ftk_widget_set_gc(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int state;
	FtkGc* gc;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err) && tolua_isusertype(L, 3, "FtkGc", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	state = tolua_tonumber(L, 2, 0);
	gc = tolua_tousertype(L, 3, 0);
	ftk_widget_set_gc(thiz, state, gc);

	return 1;
}

static int lua_ftk_widget_reset_gc(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int state;
	FtkGc* gc;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err) && tolua_isusertype(L, 3, "FtkGc", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	state = tolua_tonumber(L, 2, 0);
	gc = tolua_tousertype(L, 3, 0);
	ftk_widget_reset_gc(thiz, state, gc);

	return 1;
}

static int lua_ftk_widget_set_event_listener(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	char* listener;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	listener = (char*)tolua_tostring(L, 2, 0);
	ftk_widget_set_event_listener(thiz, lua_ftk_event_listener_func, listener);

	return 1;
}

static int lua_ftk_widget_toplevel(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_toplevel(thiz);
	tolua_pushusertype(L, (FtkWidget*)retv, "FtkWidget");

	return 1;
}

static int lua_ftk_widget_parent(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_parent(thiz);
	tolua_pushusertype(L, (FtkWidget*)retv, "FtkWidget");

	return 1;
}

static int lua_ftk_widget_prev(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_prev(thiz);
	tolua_pushusertype(L, (FtkWidget*)retv, "FtkWidget");

	return 1;
}

static int lua_ftk_widget_next(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_next(thiz);
	tolua_pushusertype(L, (FtkWidget*)retv, "FtkWidget");

	return 1;
}

static int lua_ftk_widget_child(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_child(thiz);
	tolua_pushusertype(L, (FtkWidget*)retv, "FtkWidget");

	return 1;
}

static int lua_ftk_widget_last_child(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_widget_last_child(thiz);
	tolua_pushusertype(L, (FtkWidget*)retv, "FtkWidget");

	return 1;
}

static int lua_ftk_widget_lookup(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* retv;
	FtkWidget* thiz;
	int id;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	id = tolua_tonumber(L, 2, 0);
	retv = ftk_widget_lookup(thiz, id);
	tolua_pushusertype(L, (FtkWidget*)retv, "FtkWidget");

	return 1;
}

static int lua_ftk_widget_find_target(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* retv;
	FtkWidget* thiz;
	int x;
	int y;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err) && tolua_isnumber(L, 3, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	x = tolua_tonumber(L, 2, 0);
	y = tolua_tonumber(L, 3, 0);
	retv = ftk_widget_find_target(thiz, x, y);
	tolua_pushusertype(L, (FtkWidget*)retv, "FtkWidget");

	return 1;
}

static int lua_ftk_widget_paint(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	FtkRect* rects;
	int rect_nr;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isusertype(L, 2, "FtkRect", 0, &err) && tolua_isnumber(L, 3, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	rects = tolua_tousertype(L, 2, 0);
	rect_nr = tolua_tonumber(L, 3, 0);
	ftk_widget_paint(thiz, rects, rect_nr);

	return 1;
}

static int lua_ftk_widget_destroy(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	ftk_widget_destroy(thiz);

	return 1;
}

static int lua_ftk_widget_ref(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	ftk_widget_ref(thiz);

	return 1;
}

static int lua_ftk_widget_unref(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	ftk_widget_unref(thiz);

	return 1;
}

static int lua_ftk_widget_paint_self(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	FtkRect* rects;
	int rect_nr;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isusertype(L, 2, "FtkRect", 0, &err) && tolua_isnumber(L, 3, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	rects = tolua_tousertype(L, 2, 0);
	rect_nr = tolua_tonumber(L, 3, 0);
	retv = ftk_widget_paint_self(thiz, rects, rect_nr);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_widget_ref_self(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	ftk_widget_ref_self(thiz);

	return 1;
}

static int lua_ftk_widget_unref_self(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	ftk_widget_unref_self(thiz);

	return 1;
}

static int lua_ftk_widget_event(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	FtkEvent* event;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isusertype(L, 2, "FtkEvent", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	event = tolua_tousertype(L, 2, 0);
	retv = ftk_widget_event(thiz, event);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

int tolua_ftk_widget_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkWidget", "FtkWidget", "", NULL);
	tolua_beginmodule(L, "FtkWidget");
	tolua_function(L, "Type", lua_ftk_widget_type);
	tolua_function(L, "Top", lua_ftk_widget_top);
	tolua_function(L, "Left", lua_ftk_widget_left);
	tolua_function(L, "TopAbs", lua_ftk_widget_top_abs);
	tolua_function(L, "LeftAbs", lua_ftk_widget_left_abs);
	tolua_function(L, "TopInWindow", lua_ftk_widget_top_in_window);
	tolua_function(L, "LeftInWindow", lua_ftk_widget_left_in_window);
	tolua_function(L, "Width", lua_ftk_widget_width);
	tolua_function(L, "Height", lua_ftk_widget_height);
	tolua_function(L, "IsInsensitive", lua_ftk_widget_is_insensitive);
	tolua_function(L, "IsVisible", lua_ftk_widget_is_visible);
	tolua_function(L, "IsFocused", lua_ftk_widget_is_focused);
	tolua_function(L, "IsActive", lua_ftk_widget_is_active);
	tolua_function(L, "Id", lua_ftk_widget_id);
	tolua_function(L, "Update", lua_ftk_widget_update);
	tolua_function(L, "GetGc", lua_ftk_widget_get_gc);
	tolua_function(L, "Canvas", lua_ftk_widget_canvas);
	tolua_function(L, "HasAttr", lua_ftk_widget_has_attr);
	tolua_function(L, "State", lua_ftk_widget_state);
	tolua_function(L, "UserData", lua_ftk_widget_user_data);
	tolua_function(L, "GetText", lua_ftk_widget_get_text);
	tolua_function(L, "Invalidate", lua_ftk_widget_invalidate);
	tolua_function(L, "Show", lua_ftk_widget_show);
	tolua_function(L, "ShowAll", lua_ftk_widget_show_all);
	tolua_function(L, "SetVisible", lua_ftk_widget_set_visible);
	tolua_function(L, "Move", lua_ftk_widget_move);
	tolua_function(L, "Resize", lua_ftk_widget_resize);
	tolua_function(L, "MoveResize", lua_ftk_widget_move_resize);
	tolua_function(L, "SetType", lua_ftk_widget_set_type);
	tolua_function(L, "SetInsensitive", lua_ftk_widget_set_insensitive);
	tolua_function(L, "SetFocused", lua_ftk_widget_set_focused);
	tolua_function(L, "SetActive", lua_ftk_widget_set_active);
	tolua_function(L, "SetId", lua_ftk_widget_set_id);
	tolua_function(L, "SetCanvas", lua_ftk_widget_set_canvas);
	tolua_function(L, "SetParent", lua_ftk_widget_set_parent);
	tolua_function(L, "SetText", lua_ftk_widget_set_text);
	tolua_function(L, "SetFont", lua_ftk_widget_set_font);
	tolua_function(L, "SetFontSize", lua_ftk_widget_set_font_size);
	tolua_function(L, "AppendChild", lua_ftk_widget_append_child);
	tolua_function(L, "AppendSibling", lua_ftk_widget_append_sibling);
	tolua_function(L, "RemoveChild", lua_ftk_widget_remove_child);
	tolua_function(L, "SetAttr", lua_ftk_widget_set_attr);
	tolua_function(L, "UnsetAttr", lua_ftk_widget_unset_attr);
	tolua_function(L, "SetUserData", lua_ftk_widget_set_user_data);
	tolua_function(L, "SetGc", lua_ftk_widget_set_gc);
	tolua_function(L, "ResetGc", lua_ftk_widget_reset_gc);
	tolua_function(L, "SetEventListener", lua_ftk_widget_set_event_listener);
	tolua_function(L, "Toplevel", lua_ftk_widget_toplevel);
	tolua_function(L, "Parent", lua_ftk_widget_parent);
	tolua_function(L, "Prev", lua_ftk_widget_prev);
	tolua_function(L, "Next", lua_ftk_widget_next);
	tolua_function(L, "Child", lua_ftk_widget_child);
	tolua_function(L, "LastChild", lua_ftk_widget_last_child);
	tolua_function(L, "Lookup", lua_ftk_widget_lookup);
	tolua_function(L, "FindTarget", lua_ftk_widget_find_target);
	tolua_function(L, "Paint", lua_ftk_widget_paint);
	tolua_function(L, "Destroy", lua_ftk_widget_destroy);
	tolua_function(L, "Ref", lua_ftk_widget_ref);
	tolua_function(L, "Unref", lua_ftk_widget_unref);
	tolua_function(L, "PaintSelf", lua_ftk_widget_paint_self);
	tolua_function(L, "RefSelf", lua_ftk_widget_ref_self);
	tolua_function(L, "UnrefSelf", lua_ftk_widget_unref_self);
	tolua_function(L, "Event", lua_ftk_widget_event);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}

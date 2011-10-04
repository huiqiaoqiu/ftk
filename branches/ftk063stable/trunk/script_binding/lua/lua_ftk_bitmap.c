/*This file is generated by luagen.*/
#include "lua_ftk_bitmap.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkBitmap");
}

static int lua_ftk_bitmap_create(lua_State* L)
{
	tolua_Error err = {0};
	FtkBitmap* retv;
	int w;
	int h;
	FtkColor clear_color;
	int param_ok = tolua_isnumber(L, 1, 0, &err) && tolua_isnumber(L, 2, 0, &err) && tolua_isusertype(L, 3, "FtkColor", 0, &err);

	return_val_if_fail(param_ok, 0);

	w = tolua_tonumber(L, 1, 0);
	h = tolua_tonumber(L, 2, 0);
	clear_color = *(FtkColor*)tolua_tousertype(L, 3, 0);
	retv = ftk_bitmap_create(w, h, clear_color);
	tolua_pushusertype(L, (FtkBitmap*)retv, "FtkBitmap");

	return 1;
}

static int lua_ftk_bitmap_width(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkBitmap* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkBitmap", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_bitmap_width(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_bitmap_height(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkBitmap* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkBitmap", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_bitmap_height(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_bitmap_bits(lua_State* L)
{
	tolua_Error err = {0};
	FtkColor* retv;
	FtkBitmap* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkBitmap", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_bitmap_bits(thiz);
	tolua_pushusertype(L, (FtkColor*)retv, "FtkColor");

	return 1;
}

static int lua_ftk_bitmap_ref(lua_State* L)
{
	tolua_Error err = {0};
	FtkBitmap* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkBitmap", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	ftk_bitmap_ref(thiz);

	return 1;
}

static int lua_ftk_bitmap_unref(lua_State* L)
{
	tolua_Error err = {0};
	FtkBitmap* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkBitmap", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	ftk_bitmap_unref(thiz);

	return 1;
}

int tolua_ftk_bitmap_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkBitmap", "FtkBitmap", "", NULL);
	tolua_beginmodule(L, "FtkBitmap");
	tolua_function(L, "Create", lua_ftk_bitmap_create);
	tolua_function(L, "Width", lua_ftk_bitmap_width);
	tolua_function(L, "Height", lua_ftk_bitmap_height);
	tolua_function(L, "Bits", lua_ftk_bitmap_bits);
	tolua_function(L, "Ref", lua_ftk_bitmap_ref);
	tolua_function(L, "Unref", lua_ftk_bitmap_unref);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}

/*This file is generated by luagen.*/
#include "lua_ftk_translator.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkTranslator");
}

static int lua_ftk_translator_create(lua_State* L)
{
	tolua_Error err = {0};
	FtkTranslator* retv;
	const char* package;
	const char* locale;
	int param_ok = tolua_isstring(L, 1, 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	package = tolua_tostring(L, 1, 0);
	locale = tolua_tostring(L, 2, 0);
	retv = ftk_translator_create(package, locale);
	tolua_pushusertype(L, (FtkTranslator*)retv, "FtkTranslator");

	return 1;
}

static int lua_ftk_translator_get_text(lua_State* L)
{
	tolua_Error err = {0};
	const char* retv;
	FtkTranslator* thiz;
	const char* text;
	int param_ok = tolua_isusertype(L, 1, "FtkTranslator", 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	text = tolua_tostring(L, 2, 0);
	retv = ftk_translator_get_text(thiz, text);
	tolua_pushstring(L, (const char*)retv);

	return 1;
}

static int lua_ftk_translator_destroy(lua_State* L)
{
	tolua_Error err = {0};
	FtkTranslator* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkTranslator", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	ftk_translator_destroy(thiz);

	return 1;
}

int tolua_ftk_translator_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkTranslator", "FtkTranslator", "", NULL);
	tolua_beginmodule(L, "FtkTranslator");
	tolua_function(L, "Create", lua_ftk_translator_create);
	tolua_function(L, "GetText", lua_ftk_translator_get_text);
	tolua_function(L, "Destroy", lua_ftk_translator_destroy);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}

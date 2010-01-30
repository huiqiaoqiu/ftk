#include "ftk.h"

#define IDC_TEST_BUTTON 1000
static Ret button_quit_clicked(void* ctx, void* obj)
{
	ftk_quit();

	return RET_OK;
}

static Ret button_unfullscreen_clicked(void* ctx, void* obj)
{
	ftk_window_set_fullscreen(ctx, 0);

	return RET_OK;
}

static Ret button_fullscreen_clicked(void* ctx, void* obj)
{
	ftk_window_set_fullscreen(ctx, 1);

	return RET_OK;
}

int main(int argc, char* argv[])
{
	int width = 0;
	int height = 0;
	FtkWidget* win = NULL;
	FtkWidget* button = NULL;

	ftk_init(argc, argv);
	
	win = ftk_app_window_create();
	width = ftk_widget_width(win);
	height = ftk_widget_height(win);
	
	width = width/2 - 10;
	button = ftk_button_create(win, 0, height/4, width, 50);
	ftk_widget_set_text(button, "Fullscreen");
	ftk_button_set_clicked_listener(button, button_fullscreen_clicked, win);

	button = ftk_button_create(win, width + 10, height/4, width, 50);
	ftk_widget_set_text(button, "Unfullscreen");
	ftk_button_set_clicked_listener(button, button_unfullscreen_clicked, win);
	
	button = ftk_button_create(win, width/2, height/2, width, 60);
	ftk_widget_set_text(button, "quit");
	ftk_button_set_clicked_listener(button, button_quit_clicked, win);
	ftk_window_set_focus(win, button);

	ftk_widget_set_text(win, "fullscreen");
	ftk_widget_show_all(win, 1);
	ftk_widget_set_attr(win, FTK_ATTR_QUIT_WHEN_CLOSE);

	ftk_run();

	return 0;
}

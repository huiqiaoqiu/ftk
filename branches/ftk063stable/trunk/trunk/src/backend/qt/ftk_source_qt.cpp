
#include "ftk_source_qt.h"

static int ftk_source_qt_get_fd(FtkSource* thiz)
{
	return -1;
}

static int ftk_source_qt_check(FtkSource* thiz)
{
	return 0;
}

static Ret ftk_source_qt_dispatch(FtkSource* thiz)
{
	usleep(20000);
	return RET_OK;
}

static void ftk_source_qt_destroy(FtkSource* thiz)
{
	if(thiz != NULL)
	{
		FTK_ZFREE(thiz, sizeof(*thiz));
	}
}

FtkSource* ftk_source_qt_create(void)
{
	FtkSource* thiz = (FtkSource*)FTK_ZALLOC(sizeof(FtkSource));
	if(thiz != NULL)
	{
		thiz->get_fd = ftk_source_qt_get_fd;
		thiz->check = ftk_source_qt_check;
		thiz->dispatch = ftk_source_qt_dispatch;
		thiz->destroy = ftk_source_qt_destroy;
		thiz->ref = 1;
	}

	return thiz;
}

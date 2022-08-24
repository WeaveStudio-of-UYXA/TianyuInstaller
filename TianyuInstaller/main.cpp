#pragma execution_character_set("utf-8")
#define WIN_DEPLOY
//#define ANDROID_DEPLOY
#include <QApplication>
#include "UI/MainWindow.h"
#include "Base/Macro.h"

int main(int argc, char* argv[]) {
	QApplication app(argc, argv);
	TianyuUI::MainWindow* win = new TianyuUI::MainWindow();
	win->show();
	return app.exec();
}
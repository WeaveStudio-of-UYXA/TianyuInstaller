#pragma execution_character_set("utf-8")

#include <QApplication>
#include "UI/MainWindow.h"
#include "Base/Macro.h"
#include "Base/Exception.h"

int main(int argc, char* argv[]) {
	QApplication app(argc, argv);
	qDebug() << "C info:";
	qDebug() << argv[0];
	qDebug() << argc;
	qDebug() << "Qt info";
	qDebug() << QApplication::applicationDirPath();
	qDebug() << QDir::currentPath();
	try {
		
		TianyuUI::MainWindow* win = new TianyuUI::MainWindow();
		win->show();
		int a = app.exec();
	}
	catch (TianyuAPI::Exception& e) {
		qDebug() << e.what();
	}
	catch (std::exception& e) {
		qDebug() << e.what();
	}
	catch (...) {
		qDebug() << "UNKNOWN ERROR";
	}
	return 0;
}
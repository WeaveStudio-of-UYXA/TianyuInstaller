#pragma once
#include "Macro.h"
#if DEPLOY == 2
#include "AndroidAPI.h"
#endif
namespace TianyuAPI
{
	class Base :public QObject {
		Q_OBJECT
		Public static QString UsersPath;
		Public static QString ProgramPath ;
#if DEPLOY == 2
		Public static bool checkPermission() {
			return TianyuAPI::Android::requestStoragePermission();
		}
#endif
		Public static QString setPath(QString Users, QString Program) {
			UsersPath = Users;
			ProgramPath = Program;
		}
		Public static QString getUsersPath() {
			if (UsersPath == "") {
				throw ;
			}
			return UsersPath;
		}
		Public static QString getProgramPath() {
			return ProgramPath;
		}
		Public static bool checkSettingsFile() {
			
		}
	};
	class StyleSheet :public QObject
	{
		Q_OBJECT
		Private QWidget* Top;
		Private QString QStyleSheet, CStyleSheet;
		Private QMap<QString, QString> SettingsMap;
		Public StyleSheet(QWidget * parent = Q_NULLPTR) {
			this->Top = parent;
			this->setParent(parent);
		}
		Public void setTopWidget(QWidget* TopWidget) {
			Top = TopWidget;
		}
		Public void loadStyleSheet() {
			QFile StyleSheetFile;
			StyleSheetFile.setFileName(":/TianyuResource/Resource/StyleSheet.qss");
			if (StyleSheetFile.open(QIODevice::ReadOnly)) {
				QStyleSheet = StyleSheetFile.readAll();
				StyleSheetFile.close();
			}
		}
		Public void setKVPair(QString KEY, QString VALUE) {
			this->SettingsMap[KEY] = VALUE;
			this->update();
		}
		Public void update() {
			QString StyleSheet;
			StyleSheet = QStyleSheet;
			for (QMap<QString, QString>::iterator i = SettingsMap.begin(); i == SettingsMap.end(); i++) {
				StyleSheet.replace(i.key(), i.value());
			}
			Top->setStyleSheet(StyleSheet);
			CStyleSheet = StyleSheet;
		}
	};
}
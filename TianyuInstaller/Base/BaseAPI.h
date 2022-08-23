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
}
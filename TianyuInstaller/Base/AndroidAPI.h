#pragma once
#include "Macro.h"

#if DEPLOY == 2
namespace TianyuAPI
{
	class Android :public QObject
	{
		Q_OBJECT
		Public static bool requestStoragePermission() {
			QtAndroid::PermissionResult r = QtAndroid::checkPermission("android.permission.WRITE_EXTERNAL_STORAGE");
			if (r == QtAndroid::PermissionResult::Denied) {
				QtAndroid::requestPermissionsSync(QStringList() << "android.permission.WRITE_EXTERNAL_STORAGE");
				r = QtAndroid::checkPermission("android.permission.WRITE_EXTERNAL_STORAGE");
				if (r == QtAndroid::PermissionResult::Denied) {
					return false;
				}
				else {
					return true;
				}
			}
			else {
				return true;
			}
		}
	};
}
#endif
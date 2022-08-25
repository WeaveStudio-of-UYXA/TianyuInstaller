#pragma once
#include "../Base/Macro.h"
#include "../Base/BaseAPI.h"
#include "SideWidget.h"

namespace TianyuUI
{
	class MainWindow :public QWidget
	{
		Q_OBJECT
		Private TianyuUI::SideWidget* SideArea;
		Private QGridLayout* CurrentLayout;
		Private TianyuAPI::StyleSheet* CurrentStyle;
		Public MainWindow(QWidget* parent = Q_NULLPTR) {
			this->setParent(parent);
			this->setObjectName("MainWindow");
			CurrentStyle = new TianyuAPI::StyleSheet(this);
			
			
			CurrentLayout = new QGridLayout(this);
			
			SideArea = new TianyuUI::SideWidget(this);
			CurrentLayout->addWidget(SideArea);
		}
		
	};
}


#pragma once
#include "../Base/Macro.h"
#include "SideWidget.h"

namespace TianyuUI
{
	class MainWindow :public QWidget
	{
		Q_OBJECT
		Private TianyuUI::SideWidget* SideArea;
		Private QGridLayout* CurrentLayout;
		Public MainWindow(QWidget* parent = Q_NULLPTR) {
			this->setParent(parent);
			this->setObjectName("MainWindow");
			CurrentLayout = new QGridLayout(this);
			
			SideArea = new TianyuUI::SideWidget(this);
			CurrentLayout->addWidget(SideArea);
		}
	
	};
}

